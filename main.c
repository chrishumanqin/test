
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <arpa/inet.h>
#include <sys/select.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <net/if.h>
#include <netinet/in.h>
#include <pthread.h>
#include <time.h>
#include "hi_type.h"

//#include "sample_comm.h"

extern int g_s32Quit ;

#if 1
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif /* End of #ifdef __cplusplus */





extern HI_VOID SAMPLE_IVE_Md(HI_VOID);
extern void SAMPLE_SVP_NNIE_Rfcn(void);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* End of #ifdef __cplusplus */
#endif

//extern void *SAMPLE_VENC_H265_H264(void *p);


int main(void)
{

    //SAMPLE_IVE_Md();
    SAMPLE_SVP_NNIE_Rfcn();

#if 0
    int s32MainFd;
    struct timespec ts = { 2, 0 };
    pthread_t id;

    pthread_create(&id, NULL, SAMPLE_VENC_H265_H264, NULL);
    pthread_detach(id);
    while (!g_s32Quit)
    {
        nanosleep(&ts, NULL);
    }
#endif

    return 0;
}

