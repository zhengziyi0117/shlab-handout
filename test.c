#define log(STR) printf(#STR"[%d]\n",getpid());
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>

// void handler(int sig)   //信号处理程序

// {

//    if(sig == SIGINT)

//       printf("SIGINT sig\n");

//    else if(sig == SIGQUIT)

//       printf("SIGQUIT sig\n");

//    else

//       printf("SIGUSR1 sig\n");

// }

 

// int main(){
//        sigset_t new,old,wait;   //三个信号集

//     struct sigaction act;

//     act.sa_handler = handler;

//     sigemptyset(&act.sa_mask);

//     act.sa_flags = 0;

//     sigaction(SIGINT, &act, 0);    //可以捕捉以下三个信号：SIGINT/SIGQUIT/SIGUSR1

//     sigaction(SIGQUIT, &act, 0);

//     sigaction(SIGUSR1, &act, 0);

   

//     sigemptyset(&new);

//     sigaddset(&new, SIGUSR1);  //SIGINT信号加入到new信号集中

//     sigemptyset(&wait);

//     sigaddset(&wait, SIGINT);  //SIGUSR1信号加入wait
//     sigprocmask(SIG_BLOCK, &new, &old);       //将SIGINT阻塞，保存当前信号集到old中

   

//     //临界区代码执行    

  

//     if(sigsuspend(&wait) != -1) //程序在此处挂起；用wait信号集替换new信号集。即：过来SIGUSR1信  号，阻塞掉，程序继续挂起；                           //过来其他信号，例如SIGINT，则会唤醒程序。执行sigsuspend的原子操作。注意：如                                     //果“sigaddset(&wait, SIGUSR1);”这句没有，则此处不会阻塞任何信号，即过来任何信号均会唤醒程序。

//     { printf("sigsuspend error"); }



//     printf("After sigsuspend\n");

//     sigprocmask(SIG_SETMASK, &old, NULL);

//     return 0;
// }

// void sig_handler(){
//    printf("回收开始");
//    int pid=waitpid(-1,NULL,0);
//    printf("[%d]\n",pid);
//    // return ;
// }
// void sigint_handler_empty(){
//   printf("do noting\n");
// }
// void sigint_handler(){
//    printf("I've died\n");
//    exit(3);
//    // return ;
// }
// int main(){
//    signal(SIGCHLD,sig_handler);
//    signal(SIGINT,sigint_handler_empty);
//    int pid;
//    if((pid=fork())==0){
//       signal(SIGINT,sigint_handler);
//       setpgid(0,0);
//       sleep(10000);
//       printf("Child\n");
//       exit(0);
//    }
//    sleep(1);
//    kill(pid,SIGINT);
//    printf("Parent\n");
//    sleep(1000);
//    return 0;
// }
int main(){
   log(dqwdq);
}

