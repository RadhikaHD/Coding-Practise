#include<iostream>
#include<list>
#include<cstdlib>
#include<ctime>
#define MAX 50

class Bullet
{
	public:
	int i;
};

class bulletPool
{
	public:
	bulletPool():tooFar(false){}
	
	bool goneTooFar() const
	{
		return tooFar;
	}
	
	void reset()
	{
		tooFar = false;
		
	}
	
	unsigned int bulletCount() const 
	{
		return bulletList.size();
	}
	
	unsigned int freeCount() const
	{
		return freeList.size();
	}
	
	void draw() const
	{
		std::list<Bullet>::const_iterator iter= bulletList.begin();
		while(iter != bulletList.end())
		{
			//iter->draw();
			std::cout<<"drawing bullet"<<std::endl;
			++iter;
		}
	}
	
	 void update(int i)
	{
		
		std::list<Bullet>::iterator iter1 = bulletList.begin();
		while (iter1 != bulletList.end())
		{
			
			if (i%2==0)
			tooFar = true;
			else
			tooFar = false;
			++iter1;
		}
		
	}
	
	Bullet getBullet()
	{
		Bullet x;
		if(freeList.empty())
		{
			
			x.i = rand()%MAX;
			bulletList.push_back(x);
			x = bulletList.back();
				if(goneTooFar())
				{
					freeList.push_back(x);
					bulletList.pop_back();
					std::cout<<"moving to freelist"<<x.i<<std::endl;
				}
				return x;
		}
		else
		{
			x = freeList.back();
			freeList.pop_back();
			std::cout<<"giving from freelist"<<x.i<<std::endl;
			return x;
		}
	}
	
	private:
	std::list<Bullet> bulletList;
	std::list<Bullet> freeList;
	bool tooFar;
	
};

int main()
{
	bulletPool pool;
	Bullet b = pool.getBullet();
	std::cout<<"Bulletlist count: "<<pool.bulletCount()<<"Freelist count: "<<pool.freeCount()<<std::endl;
	
	for (int i= 0; i< MAX; i++)
	{
		pool.update(i);
		Bullet b = pool.getBullet();
		std::cout<<"Bulletlist count: "<<pool.bulletCount()<<"Freelist count: "<<pool.freeCount()<<std::endl;
	}
	
	std::cout<<"Bulletlist count: "<<pool.bulletCount()<<"Freelist count: "<<pool.freeCount()<<std::endl;
	
	return 0;
}
