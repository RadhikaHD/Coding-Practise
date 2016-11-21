# include <iostream>

class Manager
{
public:
    
    static Manager* getInstance();
    int add( const int a, const int b)
    {
        return a+b;
    }
    
private:
    
    static Manager* manager;
    
    Manager()
    {
        std::cout <<"created"<<std::endl;
    }
    
  
    
    ~Manager()
    {
        std::cout <<"destroyed"<<std::endl;
        delete manager;
    }
    
};


Manager* Manager::getInstance()
{
    if(!manager)
    {
      manager = new Manager();
    }
    
    return manager;
}

Manager* Manager::manager = NULL;

int main()
{
    
    Manager* newmanager = Manager::getInstance();
    std::cout << newmanager->add(1,2) << std::endl;
    
}