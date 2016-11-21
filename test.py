import sys

# Complete the function below.

def  num_illuminated(grid_width, grid_height, conn_x1, conn_y1, conn_x2, conn_y2, start_x, start_y):
   count = 0
   turn_off(conn_x1, conn_y1, conn_x2, conn_y2, start_x, start_y, count)
   return grid_height*grid_width - count


def turn_off(conn_x1, conn_y1, conn_x2, conn_y2, start_x, start_y, count):
    count +=1
    if



if __name__ == '__main__':
    start_x = 1
    start_y = 0
    grid_width = 1
    grid_height = 1
    conn_x1 = start_x - 1
    conn_y1 = start_y - 0
    conn_x2 = start_x -1
    conn_y2 = start_y -1
    
    print(num_illuminated(grid_width, grid_height, conn_x1, conn_y1, conn_x2, conn_y2, start_x, start_y))