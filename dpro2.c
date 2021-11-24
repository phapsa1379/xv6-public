#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include <stddef.h>




int main()
{
//printf("\n$ dpro2 is running.....\n");
int child1,child2,child3,child4,child5;

child1 = fork();
while (child1 == 0)
{

//	printf("parent (pid: %d) creating child 1 (pid: %d)",getppid(),getpid());
		int p = 5 ;
            while(1)
            {
            	if (p%2 == 0)
            	{
    			          p = p/2;
    		      }
    		      else{
    			         p=3*p+1;
    			          }
            }
            exit();
}
child2 = fork();
while(child2 == 0)
{
//	printf("parent (pid: %d) creating child 2 (pid: %d)",getppid(),getpid());
  int p = 5 ;
          while(1)
          {
            if (p%2 == 0)
            {
                  p = p/2;
            }
            else{
                 p=3*p+1;
                  }
          }
          exit();
}
child3 = fork();
while (child3 == 0)
{
	//printf("parent (pid: %d) creating child 3 (pid: %d)",getppid(),getpid());
  int p = 5 ;
          while(1)
          {
            if (p%2 == 0)
            {
                  p = p/2;
            }
            else{
                 p=3*p+1;
                  }
          }
          exit();
}
child4 = fork();
while (child4 == 0)
{
	//printf("parent (pid: %d) creating child 4 (pid: %d)",getppid(),getpid());
  int p = 5 ;
          while(1)
          {
            if (p%2 == 0)
            {
                  p = p/2;
            }
            else{
                 p=3*p+1;
                  }
          }
          exit();
}
child5 = fork();
while (child5 == 0)
{
	//printf("parent (pid: %d) creating child 5 (pid: %d)",getppid(),getpid());
  int p = 5 ;
          while(1)
          {
            if (p%2 == 0)
            {
                  p = p/2;
            }
            else{
                 p=3*p+1;
                  }
          }
          exit();
}





int pid = wait();


if(pid==-1) {

	printf(1,"Finish.\n");

	exit();
	}
}
