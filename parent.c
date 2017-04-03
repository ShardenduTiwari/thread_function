#include<stdio.h>
#include<pthread.h>        //for using thread functions.


pthread_t tid;  //thread created of type int

void *thread_func(void *a)  //thread function initialisation
{
 int *b;
 b=(int*)a;         //Type-casting
 int mul;
 mul=b[0]*b[1];
 return (void*)mul;

}



int main()
{

 int c;
 int a[2]={2,4};
 pthread_create(&tid,NULL,&thread_func,a);          //Thread-created
 pthread_join(tid,(void *)c);		            //Thread-join
 printf("The current pid is:\t%u",pthread_self());  //To give the current id of parent
 printf("%d\n",c);                                 
 return 0;
}
 
 
