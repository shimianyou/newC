#include <stdio.h>
#include <cstdint>
#include <string>
#include <stdbool.h>
#include <ctype.h>
#include <cstring>
#include <iso646.h>
#include <math.h>
#include <limits.h>
#include <float.h>
#include <cmath>

//#define PI 3.14159265358979
#define A 65618
#define PRAISE "You are an extraordinary being."
//#define INT_MAX
//
//void smile();
//void two();
//void jing(int a);
//#define PI 3.14159
int main();//������������
//double LF(double a);        double fl(double *a,double *b);             void SG(double[],int);  void kb(double[][4],double a[][4],int n);
//void weiba(void);           void chline(char ch,int i,int j);           double power(double n,int p);/*�������� */    void ddf(double a[]/*�հ�*/,double b[]/*����Դ*/,int n);
//void copy_arr(double [5],double [5],int );      void copy_ptr(double [5],double [5],int );      void copy_ptrs(double [5],double [5],double [5]);
//void na();                  int nb(int max,int min);                    void bdx(double * a,double * b,double * c);
//void cdl();                 double dao(double a,double b);              void to_bass_n(unsigned long n,unsigned short t);
//float fm();                 void larger_of(double *c,double *d);        int sump(int * start,int * end);        double dxc(double [],int n);
//void one_three();
//#define AI[1,2,3,4,5,6,7,8]
#define BOOK "War and peace"
#define YING 26
#define SPACE ' '
/*      (��ϰ&&ʱ�䣩==����        */
#include "sili.h"


int main(){
    char ab[5];
    gets(ab);
    puts(ab);
    printf("%s",ab);

    return 0;

//    /*10.12~13*/
//    void yhyd/*�û�����*/(double num1[],double num2[],double num3[]);
//    void zupj/*ÿ��ƽ��ֵ*/(const double num1[],const double num2[],const double num3[],double *p1,double *p2,double *p3);
//    void sypj/*����ƽ��*/(double p1,double p2,double p3,double *sp);
//    void qbzd/*15�����е����ֵ*/(double num1[],double num2[],double num3[],int n,double *max1,double *max2,double *max3,double *max);
//    void dyjg/*��ӡ���*/(double num1[],double num2[],double num3[],
//                          double *p1,double *p2,double *p3,double *sp,double *max1,double *max2,double *max3,double max);
//    double num1[5],num2[5],num3[5];
//    double p1=0,p2=0,p3=0,sp=0;
//    double max1=0,max2=0,max3=0,max;
//
//
//    yhyd(&num1[5],&num2[5],&num3[5]);
//    zupj(&num1[5],&num2[5],&num3[5],&p1,&p2,&p3);
//    sypj(p1,p2,p3,&sp);
//    qbzd(&num1[5],&num2[5],&num3[5],5,&max1,&max2,&max3,&max);
//    dyjg(&num1[5],&num2[5],&num3[5],&p1,&p2,&p3,&sp,&max1,&max2,&max3,max);
//
//    return 0;

///*10.8*/
//    //void ddf(double a[]/*�հ�*/,double b[]/*����Դ*/,int n);
//    double dd1[7]={111,22,3,445,5.5,66,77};
//    double dd2[3];
//
//    printf("dd1��ʼ����Ϊ��\n");
//    for (int i = 0; i < 7; ++i) {
//        printf("%6.3f ",dd1[i]);
//    }
//    printf("\ndd2��ʼ����Ϊ��\n");
//    for (int i = 0; i < 3; ++i) {
//        printf("%6.3f ",dd2[i]);
//    }
//    ddf(dd2,dd1,3);
//
//    printf("\ndd2���ƺ�����Ϊ��\n");
//    for (int i = 0; i < 3; ++i) {
//        printf("%6.3f ",dd2[i]);
//    }
//
//
//    return 0;


///*10.7*/
//    //void kb(double[][4],double a[][4],int n);
//    double sz1[5][4];
//    double dkbsz[5][4];
//    printf("����ԭʼ����Ϊ��\n");
//    for (int i = 0; i <5; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            printf("%6.3f ",sz1[i][j]);
//        }
//        printf("\n");
//    }
//    for (int i = 0; i < 5; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            sz1[i][j]=j*j*i+2.2*i;
//        }
//    }
//    printf("\n������ĳ�ʼ������Ϊ��\n");
//    for (int i = 0; i <5; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            printf("%6.3f ",sz1[i][j]);
//        }printf("\n");
//    }
//    printf("�����Ƶ������ʼԪ�أ�\n");
//    for (int i = 0; i <5; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            printf("%6.3f ",dkbsz[i][j]);
//        }
//        printf("\n");
//    }
//
//    kb(dkbsz,sz1,4);
//
//    printf("����֮�������Ԫ�أ�\n");
//    for (int i = 0; i <5; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            printf("%6.3f ",dkbsz[i][j]);
//        }
//        printf("\n");
//    }
//
//
//    return 0;

    /*��������*/
//    double source[12]={2.5,3.2,1.2,1.6,2.4,0.1,5.2,0.9,0.3,0.9,1.4,7.3};
//    printf("����δ����ǰ��\n ");
//    for (int i = 0; i < 12; ++i) {
//        printf("%.3f ",source[i]);
//    }
//    SG(source,12);
//    printf("\n���ĺ������Ԫ�أ�\n ");
//    for (int i = 0; i < 12; ++i) {
//        printf("%.3f ",source[i]);
//    }
//
//
//    return 0;



    //int N=0;char d;
//    scanf("%d",&N);
//
//    int sum[N];
//
//    for (int i = 0; i < N; ++i) {
//        if ((d=getchar())==' ')break;
//        sum[i]=(int)d;
//        //sum[i]=getchar();
//       // scanf("%d",sum[i]);
//    }
//    for (int i = 0; i < N; ++i) {
//
//        printf("%s",sum[i]);
//    }

//        int a=0,sum=0;
//        double you[15]={0.8,0.8,0.8,0.8,0.8,1,1,1,1,1.8,1.8,1.8,1.8,1.8,1.8,};
//
//    for (int i = 1; i <= 15; ++i) {
//        if (i=1){
//            for (int j = 0; j < 15; ++j) {
//
//            }
//        }
//    }
//
//
//
//    return 0;
//
//    double adb[17]={3.666,6,4,3,7,8,33,2,99.99,6.342,5,4,6,7,8,86,44};
//
//    printf("adb�ļ���=%f\n",dxc(adb,17));
//
//    return 0;



/************10.5�����ϰ2******************//*����ֻ����ʾ������Ϊ�˸��ģ��������*///###ע�⣬�����ں��������
//�����淭ȥ
// void copy_arr(double [5],double [5],int );
// void copy_ptr(double [5],double [5],int );
// void copy_ptrs(double [5],double [5],double [5]);
//    double source[5]={1.1,2.2,3.3,4.4,5.5};
//    double target1[5];
//    double target2[5];
//    double target3[5];
//    for (int i = 0; i < 5; ++i) {
//        printf("��ʼtarget1[%d]=%f target2[%d]=%f target3[%d]=%f  source[%d]=%f\n",i,target1[i],i,target2[i],i,target3[i],i,source[i]);
//    }printf("\n");
//
//
//    copy_arr(target1,source,5);
//    for (int i = 0; i < 5; ++i) {
//        printf("target1[%d]=%f  source[%d]=%f\n",i,target1[i],i,source[i]);
//    }
//    printf("\n");
//    copy_ptr(target2,source,5);
//    for (int i = 0; i < 5; ++i) {
//        printf("target2[%d]=%f  source[%d]=%f\n",i,target2[i],i,source[i]);
//    }printf("\n");
//
//    copy_ptrs(target3,source,source+5);
//    for (int i = 0; i < 5; ++i) {
//        printf("target3[%d]=%f  source[%d]=%f\n",i,target3[i],i,source[i]);
//    }printf("\n");
//
//    return 0;


//    show((int[4]){8,3,9,2},4);
//    show2((int [][3]){{8,3,9},{5,4,1}},2);

//    double trots[20];
//    void data(double trots[],int n);
//    void data(int a,double trots[a]);
//
//    short clops[10][30];
//    void datr(short clops[][30],int n);
//    void datr(int a,int b,short clops[a][b]);
//
//    long  shots[5][10][15];
//    void ggh(long shots[][10][15],int n);
//    void ggh(int a ,int b ,int c,long ggh[a][b][c] );

    //
//    int abd[6]={1,2,3,8,16,32};
//    abd[2];
//    int acc[100]={[99]=-1};
//
//    int aff[100] = {[5]=101,[10]=101,101,101,[3]=101};


//    int digits[10];
//    float rates[6];
//    int mat[3][5];
//    int *psa[20];
//    char (*pstr)[20];

//    int grid[30][100];
//
//    /**/    &grid[22][56];//*((*grid+22)+56);
//            grid+22;*grid+22;
//            grid;grid+0;*grid;**grid

//    int n=5;
//    double x;
//    int* p1=&n;
//    double *pd=&x;
//
//    x=n;
//    pd=p1;

//    return 0;

//    int zippo[4][2]={{2,4},{6,8},{1,3},{5,7}};
//    int (*pz)[2];
//
//    pz=zippo;
//
//    printf("*(*(pz+2)+1)=%d     *(pz+2)+1=%d    *(pz+2)=%d\n",*(*(pz+2)+1),*(pz+2)+1,*(pz+2));
//    printf("*(*(zippo+2)+1)=%d     *(zippo+2)+1=%d    *(zippo+2)=%d\n",*(*(zippo+2)+1),*(zippo+2)+1,*(zippo+2));
//    printf("*(*(pz+2)+1)=%d     **(pz+2)+1=%d    **(pz+2)=%d\n",*(*(pz+2)+1),**(pz+2)+1,**(pz+2));
//
//
//    return 0;



//    int a[5]={10,15,20,25,30};
//    int *p=a,*q=p;
//
//    q=p+5;
//    printf("�ܱ�2�������ǣ�\n");
//    while (p<q){
//        if (*p%2==0)
//            printf("%d ",*p);
//        p=p+1;
//
//    }
//
//    return 0;


    /*����Խ�����һλ*/
    /*���ۣ�Խ��һλ��Ϊ0�����ǰ���ָ���ַ��С��ѭ���ģ����ô�������ʮλ����ʱ�����ݳ��ֲ�������
     * ���ϣ��Ѿ�������ȷ*/
//
//#define SIZE 10
//    int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
//    long answer;
//    answer = sump(marbles,marbles + SIZE +11);
//    printf("��������� %ld\n",answer);
//
//    return 0;


//    int shi[9];
//
//    int i;
//
//    for (int j = 0; j < 9; ++j) {
//        shi[j]=j+1;
//    }
//    for (i = 0; i < 9; ++i) {
//        printf("%2d %14d\n",i,shi[i]);
//    }
//
//    return 0;

    /*9.10��������*/
//    unsigned long number;
//    unsigned short target;
//    printf("����������������2~10��\n");
//    scanf("%lu %hu",&number,&target);
//    to_bass_n(number,target);
//
//    return 0;

///*�ھ�����ϰ8*/
//
//    return 0;

    /*�����жϴ�С*/
//    double a,b,c;
//    printf("����������������\n");
//    scanf("%lf %lf %lf",&a,&b,&c);
//    printf("ԭʼ���������ֱ�Ϊa=%lf b=%lf c=%lf\n",a,b,c);
//
//    bdx(&a,&b,&c);
//
//    printf("���˺�������������ֱ�Ϊa=%lf b=%lf c=%lf\n",a,b,c);
//
//    return 0;

//    double a,b;
//    printf("����������ֵ��\n");
//    scanf("%lf %lf",&a,&b);
//    printf("�������ֵԭ����a=%lf b=%lf.\n",a,b);
//    larger_of(&a,&b);
//    printf("�������ֵ������a=%lf b=%lf.(���ú�����)\n",a,b);
//    return 0;


//    double a,b,c;
//    printf("��������������\n");
//    scanf("%lf %lf",&a,&b);
//
//    c=dao(a,b);
//    printf("c=%lf",c);
//
//    return 0;

//
//    char ch,u;
//    int a,b;
//
//    printf("�������ַ��Լ����֣�\n");
//    ch=getchar();
//    //while (ch!='\n')u=getchar();
//    scanf("%d %d",&a,&b);
//
//    chline(ch,a,b);
//    return 0;


//    double a,b,c;
//    printf("��������������\n");
//    scanf("%lf %lf",&a,&b);
//
//    c=fl(&a,&b);
//
//    printf("c=%lf",c);
//
//
//    return 0;

//
//    int a,b;
//    na();
//    printf("��������������һ�����ޣ�һ������\n");
//    while ((a=nb(1,4))!=4){
//        printf("%d",a);
//        na();
//    }
//    printf("Bye!\n");
//
//    return 0;
    /*8.8*/
//    char ch;
//    double j=0,i=0;
//
//    cdl();
//
//    while (ch=getchar()){
//        while (getchar()!='\n')continue;//������
//        switch (ch) {
//            case 'a':
//                printf("�������һ�����֣�\n");
//                scanf("%lf",&j);
//                printf("������ڶ������֣�\n");
//                scanf("%lf",&i);
//                printf("%.2lf + %.2lf = %.2lf\n",j,i,j+i);
//                break;
//            case 'b':
//                printf("�������һ�����֣�\n");
//                scanf("%lf",&j);
//                printf("������ڶ������֣�\n");
//                scanf("%lf",&i);
//                printf("%.2lf - %.2lf = %.2lf\n",j,i,j-i);
//                break;
//            case 'c':
//                printf("�������һ�����֣�\n");
//                scanf("%lf",&j);
//                printf("������ڶ������֣�\n");
//                scanf("%lf",&i);
//                printf("%.2lf * %.2lf = %.2lf\n",j,i,j*i);
//                break;
//            case 'd':
//                printf("�������һ�����֣�\n");
//                scanf("%lf",&j);
//                printf("������ڶ������֣�\n");
//                i=fm();
//                printf("%.2lf / %.2lf = %.2lf\n",j,i,j/i);
//                break;
//            case 'e':
//                printf("�����˳�\n");
//                goto exit;
//            default:cdl();
//                break;
//        }
//    }
//
//    exit:
//    return 0;



    /*8.5*/
//    int min=1,max=100,i=0;
//    int zong=(min+max)/2;
//    char ch;
//    //printf("�Ҳ��������Ϊ%d.\n",zong);
//    do {
//        printf("�Ҳ��������Ϊ%d\n",zong);
//        if (getchar()=='y')break;
//        printf("�������%d�Ǵ��˻���С�ˣ�����d/x\n",zong);
//        while ((ch=getchar())=='\n')continue;
//        if (ch=='d'||ch=='D'){
//            max=zong-1;
//            zong=(min+max)/2;
//            continue;
//        }else if (ch=='x'||ch=='X'){
//            min=zong+1;
//            zong=(min+max)/2;
//            continue;
//        } else{ continue;}
//    } while (getchar()!='Y');
//    printf("�������\n");
//
//    return 0;

    /*8.4*/
//    char ch;
//    int num=0,b=0;
//    while ((ch=getchar())!=EOF&&ch!='\n'){
//        if ((isalpha(ch))!=0)
//            num++;
//        if ( ispunct(ch) || ch==' ')
//            b++;
//    }
//    printf("��������Ϊ%d������ƽ����ĸ��Ϊ%d\n",num,num/b);
//    return 0;
    /*8.3*/
//    char ch;int Dnum=0,Xnum=0;
//    while ((ch=getchar())!=EOF){
//        if (isupper(ch)){
//            Dnum++;
//        }
//        if (islower(ch)){
//            Xnum++;
//        }
//        printf("��д��ĸ��%d����Сд��ĸ��%d��\n",Dnum,Xnum);
//    }
//
//    return 0;
/*8.2*/
//    char ch;
//    int chi,num=0;
//    while ((ch=getchar())!=EOF){
//        if (ch>=32) {
//            printf("��:%c",ch);
//            //putchar(ch);
//            printf(" ֵ:%d ", ch);
//        }else
//            if (ch=='\n'||ch=='\t'){
//                if (ch=='\n')
//                printf("\\n,ֵ��%d",ch);
//                else printf("\\t,ֵ:%d",ch);
//            } else{
//                printf("\'%c\'--^%c",ch,(ch+64));
//            }
//        if (++num==10){
//            printf("\n");
//            num=0;
//        }
//    }







    //return 0;
///*7.11��Ŀ*/
//    const double YJSJ=2.05,TCSJ=1.15,HLBSJ=1.09;//�ۼ�
//    char xq;int BS=0,ZBS=0,j=1;
//    double SJ,DDSJ,ZK=0,ZKH=0,YF=0,HWZJ=0;
//    printf("********************��ӭ����ABC�ʹ��ӻ���********************\n  ���������ѡ�������Ʒ:\na)��   2.05��Ԫ/��      b)��� 1.15��Ԫ/��\n"
//           "c)���ܲ� 1.09��Ԫ/��      d)�˳�����\n*****************Ը���ι������������������******************\n");
//
//    while ((xq=getchar())>='a'&&xq<='d'){
//        switch (xq) {
//            case 97:SJ=YJSJ;
//                printf("����ѡ����,����������\n");
//                break;
//            case 98:SJ=TCSJ;
//                printf("����ѡ�����,����������\n");
//                break;
//            case 99:SJ=HLBSJ;
//                printf("����ѡ����ܲ�,����������\n");
//                break;
//            case 100:goto exit;
//        }printf("��������������:\n");
//    }
//    while ((scanf("%d",&BS))==1){
//        ZBS=ZBS+BS;
//        printf("��������%d��,����������Ҫ��?��Ҫ���������,����Ҫ������'N'.\n��������������:\n",ZBS);
//    }printf("��һ��������%d��\n",ZBS);
//
//    while (1){
//        DDSJ=ZBS*SJ;//�˷�ǰ�۸�
//        if (DDSJ<=100){//�����ۿ�
//            ZK=DDSJ*0.05;
//            ZKH=DDSJ-ZK;
//            DDSJ=ZKH;
//        }
//        printf("���Ķ���%d��,�ۿ�%f.3,�ۿۺ�۸�%.3f\n\n",ZBS,ZK,DDSJ);
//
//        if (ZBS>0 && ZBS<=5){//�˷�
//            YF=6.5;
//        } else if (ZBS>5&&ZBS<=20){
//            YF=14;
//        }else if (ZBS>20){
//            YF=14;
//            for (int i = 21; i <= ZBS; ++i) {
//                YF=YF+0.5;
//            }
//        }
//        HWZJ=DDSJ+YF;
//        printf("���Ĺ�����ϢΪ:\n"
//               "��Ʒ�ۼ�Ϊ:%.3f��/��Ԫ        ��������Ϊ:%d��\n"
//               "�����߲˷���Ϊ%.3f��Ԫ         �����ܷ���Ϊ��%.3f��Ԫ\n"
//               "�ۿ�Ϊ:%.3f��Ԫ              �˷ѺͰ�װ��:%.3f��Ԫ\n�����ܶ�Ϊ:%.3f��Ԫ\n\n",SJ,ZBS,DDSJ,DDSJ,ZK,YF,HWZJ);
//        break;
//    }
//    exit:
//    printf("�����˳�!\nABC�ʹ�����껶ӭ�����´ι���!\n");
//    return 0;


///*7.10��Ŀ*/
//    int n;
//    double SYZ,SL1=0.15,SL2=0.28;
//    const double DS=17850,HZ=23900,YG=29750,YL=14875;
//    double SJGZ,sqgz,NS;int i=99;
//    for (int k = 1; k <= i; ++k) {
//
//        printf("----------------------������ĵ�%d������---------------------\n"
//               "ѡ�������˰�����:\n"
//               "1) ����          2) ����\n"
//               "3) �ѻ�,����      4) �ѻ�,����\n"
//               "----------------------������ĵ�%d������---------------------\n",k,k);
//        scanf("%d", &n);
//        if (n >= 1 && n <= 4) {
//            switch (n) {
//                case 1:
//                    SYZ = DS;
//                    printf("�����˰��Ϊ:%.3f��Ԫ��15%%��,�������ְ�28%%��\n", DS);
//                    break;
//                case 2:
//                    SYZ = HZ;
//                    printf("������˰��Ϊ:%.3f��Ԫ��15%%��,�������ְ�28%%��\n", HZ);
//                    break;
//                case 3:
//                    SYZ = YG;
//                    printf("�ѻ�,���� ��˰��Ϊ:%.3f��Ԫ��15%%��,�������ְ�28%%��\n", YG);
//                    break;
//                case 4:
//                    SYZ = YL;
//                    printf("�ѻ�,���� ��˰��Ϊ:%.3f��Ԫ��15%%��,�������ְ�28%%��\n", YL);
//                    break;
//
//            }
//        } else { printf("��������ټ�~\n");
//            break;}
//
//        printf("��������Ĺ���:\n");
//
//        while ((scanf("%lf", &sqgz)) == 1) {
//            if (sqgz <= SYZ) {
//                NS = sqgz * SL1;
//                SJGZ = sqgz - NS;
//                printf("���˰ǰ����Ϊ%.3lf.˰����Ϊ%.3lf.������˰%.3lf\n\n\n", sqgz, SJGZ, NS);
//                break;
//            } else {
//                NS = SYZ * SL1 + (sqgz - SYZ) * SL2;
//                SJGZ = sqgz - NS;
//                printf("���˰ǰ����Ϊ%.3lf.˰����Ϊ%.3lf.������˰%.3lf\n\n\n", sqgz, SJGZ, NS);
//                break;
//            }
//        }
//    }
//    return 0;


    /*################# n ��Χ�ڵ�����(��) #######################*/

//    printf("������һ��������(ֻȡ��������,��������):\n");
//
//   int n;
//    scanf("%d",&n);
//    printf("���������n=%d\n,", n);
//    printf("�����е�����Ϊ:\n");
//
//    for (int j = 2; j <= n; ++j) {
//        int i=0;
//        for (int k = 2; k < j; ++k) {
//            if (j%k==0)i++;
//        }
//        if (i==0){
//            printf("%d ",j);
//        }
//    }
//
//    return 0;
//    for (int j = 2; j <= n; ++j) {
//        int f=0;
//        for (int k = 2; k < j; ++k) {
//            if (j%k==0){
//                f++;
//            }
//        }
//        if (f==0){
//            printf("%d ",j);
//        }
//    }
//###########7.7/7.8#############//
//#define GZ 10
//#define JB 40
//#define SL1 0.15
//#define SL2 0.2
//#define SL3 0.25

//    //#define SJGZ 10
//    //#define JB 40
//    //#define SL1 0.15
//    //#define SL2 0.2
//    //#define SL3 0.25
//    char ch;int xuan,d=0;int x=0;
//    printf("##################################################\n");
//    printf("��ѡ���ʵȼ�,����1~4,����5���˳�\n"
//                     "1)$8.75/hr          2)$9.33/hr\n"
//                     "3)$10.00/hr         4)$11.20/hr\n"
//                     "5)quit\n""##################################################\n");
//    float SJGZ=0;//(ch=getchar())
//    while (d==0){
//        scanf("%d",&xuan);
//        if (xuan>0&&xuan<=5){
//            switch (xuan) {
//                case 1:SJGZ=8.75;
//                    d+=1;
//                    break;
//                case 2:SJGZ=9.33;
//                    d+=1;
//                    break;
//                case 3:SJGZ=10;
//                    d+=1;
//                    break;
//                case 4:SJGZ=11.20;
//                d+=1;
//                    break;
//                case 5:
//                    printf("�ټ�!(switchѭ����)\n");
//                    goto exit;
//            }
//        } else printf("�������,����������(���뷶Χ1~5):\n");
//    }
//
//
//    printf("������һ�ܹ���Сʱ��:\n");
//
//    float Jbgz,shui,jing,Jbgz2;
//
//    scanf("%d",&x);
//    Jbgz=JB*SJGZ+(x-JB)*1.5*SJGZ;
//    Jbgz2=Jbgz;
//    printf("���˰ǰ����Ϊ%.3f��Ԫ\n",Jbgz);
//    if (Jbgz<=300){
//        shui=Jbgz*SL1;
//        printf("��Ҫ����˰Ϊ:%.3f��Ԫ\n",shui);
//    } else if (Jbgz>300&&Jbgz<=450){
//        shui=300*SL1+(Jbgz-300)*SL2;
//        printf("��Ҫ����˰Ϊ:%.3f��Ԫ\n",shui);
//    } else if (Jbgz>450){
//        shui=300*SL1+150*SL2+(Jbgz-450)*SL3;
//        printf("��Ҫ����˰Ϊ:%.3f��Ԫ\n",shui);
//    }
//    jing=Jbgz2-shui;
//    printf("��ľ�����Ϊ:%.3f��Ԫ\n",jing);
//
//    exit:printf("�ټ�!(ѭ���� return ��)\n");
//    return 0;





//#define SJGZ 10
//#define JB 40
//#define SL1 0.15
//#define SL2 0.2
//#define SL3 0.25
//    printf("������һ�ܹ���Сʱ��:\n");
//    int x=0;
//    float Jbgz,shui,jing,Jbgz2;
//
//    scanf("%d",&x);
//    Jbgz=JB*SJGZ+(x-JB)*1.5*SJGZ;
//    Jbgz2=Jbgz;
//    printf("���˰ǰ����Ϊ%.3f��Ԫ\n",Jbgz);
//    if (Jbgz<=300){
//        shui=Jbgz*SL1;
//        printf("��Ҫ����˰Ϊ:%.3f��Ԫ\n",shui);
//    } else if (Jbgz>300&&Jbgz<=450){
//        shui=300*SL1+(Jbgz-300)*SL2;
//        printf("��Ҫ����˰Ϊ:%.3f��Ԫ\n",shui);
//    } else if (Jbgz>450){
//        shui=300*SL1+150*SL2+(Jbgz-450)*SL3;
//        printf("��Ҫ����˰Ϊ:%.3f��Ԫ\n",shui);
//    }
//    //jing=Jbgz2-shui;
//    printf("��ľ�����Ϊ:%.3f��Ԫ\n",Jbgz2-shui);
//
//    return 0;
//int j=0,h=0;
//char ch;
//    printf("������һ���ַ�,��'#'�Ž���:\n");
//    while ((ch=getchar())!='#'){
//        if (ch=='e'&&j==0){
//        j+=1;
//        }
//        if (ch=='n'&&j==1){
//            h++;j-=1;
//        }
////        printf("��������%d��'ei'\n",h);
//
//}printf("��������%d��'ei'\n",h);
//
//    return 0;

//    printf("�������ַ���,��'#'Ϊ��β:\n");
//    char ch;int n=0;
//    while ((ch=getchar())!='#'){
//        switch (ch) {
//            case '.':putchar('!');
//                n++;
//                break;
//            case '!':
//                putchar('!');
//                putchar('!');
//                n++;
//                break;
//            default:
//                putchar(ch);
//        }
//
//
//    }
//
//    printf("\nһ��������%d���滻.",n);
//
//
//    return 0;

//    printf("�������ַ���,��'#'Ϊ��β:\n");
//    char ch;int n=0;
//    while ((ch=getchar())!='#'){
//        if (ch=='.'){
//            //ch='!';
//            n++;
//            putchar('!');
//        } else
//        if (ch=='!'){
//            //ch='!!';
//            n++;
//            putchar('!');
//            putchar('!');
//        } else{
//            putchar(ch);
//        }
//
//
//    }
//
//    printf("\nһ��������%d���滻.",n);
//
//
//    return 0;

//    char ch;
//    printf("������һ������,��0��β:\n");
//    int o=0,j=0;
//    float op=0,jp=0,ol=0,jl=0;
//    while ((ch=getchar())!='0'){
//        if (ch%2==0)
//        {
//            char n=ch;
//            ol=ol+n-48;
//            o++;
//            op=ol/o;
//        }
//        if (ch%2!=0){
//            char n=ch;
//            jl=jl+n-48;
//            j++;
//            jp=jl/j;
//        }
//
//    }printf("��������Ϊ%d,����ƽ��ֵΪ%.3f������Ϊ%.0f\nż������Ϊ%d,ż��ƽ��ֵΪ%.3f,ż����Ϊ%.0f\n",j,jp,jl,o,op,ol);
//
//    return 0;
    //��ӡ7.12 2
//    printf("������:\n");
//    char ch;int n=1;
//    while ((ch=getchar())!='#'){
//        printf(" ��%d�� �ַ� %c AS %d",n,ch,ch);
//        if (n==8)printf("\n");
//        n++;
//    }
//    return 0;

//    printf("������:\n");
//    char ch;int k=0,h=0,q=0;
//    while ((ch=getchar())!='#'){
//        if (ch==' '){
//            k++;
//            printf("�ո�%d\n",k);
//        }
//        if (ch=='\n')h++;printf("����%d\n",h);
//        if (!(isspace(ch)))q++;printf("q=%d\n",q);
//    }
//    printf("�ո�Ϊ%d,����Ϊ%d,�ַ�Ϊ%d",k,h,q);
//
//
//
//    return 0;
//    int age = 20;
//    while (age++<=65){
//        if ((age%20)==0)
//            printf("��һ��%d\n",age);
//        if (age=65)
//            printf("�ڶ���%d\n",age);break;
//    }
//
//
//    return 0;
//    int num;
//    for (num = 1; num < 11; ++num) {
//        if (num % 3 ==0){
//            putchar('$');
//        } else putchar('*');
//        putchar('%');
//    }
//    printf("\n");
//
//
//
//    return 0;
//char ch;
////const char SPACE = ' ';
//ch = getchar();
//    while (ch !='\n'){
//        if (ch== SPACE)
//            putchar(ch);
//            else putchar(ch+1);
//            ch=getchar();
//    }
//    putchar(ch);
//
//    return 0;
//
//    int Rabnud=5;
//    int zou=1;
//    while (Rabnud<150) {
//
//        printf("��ǰ��%d�ܣ�����%d�ˡ�\n", zou, Rabnud);
//        Rabnud = 2 * (Rabnud - zou++);
//
//    }
//    printf("%d�ܺ󣬲�ʿ�����ѵ��ڵ˰���\n",--zou);
//    return 0;

//    const float Ben=100;
//    float Dapsum=100,Deisum=100;
//    int n=0;
//    do {
//
//        printf("��%d��\n",++n);
//        Dapsum=Dapsum+Ben*0.1;
//        printf("Dapsum=%.4f\n",Dapsum);
//        Deisum= Deisum+Deisum*0.05;
//        printf("Deisum=%.4f\n",Deisum);
//
//    } while ((Deisum-Dapsum)<0);
//    printf("��Ҫ%d��\n",n);
//
//    return 0;

//    char zf[256];
//    printf("������һ������,�Իس���β:\n");
//    int n=0;
//    do {
//        scanf("%c",&zf[n]);//#######��#####
//    } while (zf[n]!='\n' && ++n);
//
//    for (int j = n; j >=0; --j) {
//        printf("%c",zf[j]);
//    }
//
//    return 0;

//    double ni[8];
//    double mi[8];
//    printf("������8������:\n");
//
//    for (int n = 0; n < 8; ++n) {
//        scanf("%lf",&ni[n]);
//    }
////    for (int n = 0; n < 8; ++n) {
////        mi[n]=0;
////    }
//    for (int n = 0; n < 8; ++n) {
//        mi[n]+=ni[n]+mi[n-1];
//    }
//    printf("��һ������Ϊ:\n");
//    for (int n = 0; n < 8; ++n) {
//        printf("%7.2lf ",ni[n]);
//    }
//    printf("\n�ڶ�������Ϊ:\n");
//    for (int n = 0; n < 8; ++n) {
//        printf("%7.2lf ",mi[n]);
//    }
//    return 0;

//    int mi[8];
//
//    for (int n = 0,c=2; n < 8; ++n,c*=2) {
//
//        mi[n] = c;
//    }
//    int s=0;
//    do {
//
//        printf("%d\n",mi[s]);
//        s++;
//    } while (s<8);
//
//    return 0;

//    int zheng[8];
//    printf("������8������:\n");
//    //scanf("%d",&zheng);
//    for (int n = 0; n < 8; n++) {
//        scanf("%d",&zheng[n]);
//    }
//    for (int n = 7; n >= 0; --n) {//ע��Խ������
//        printf(" %d",zheng[n]);
//
//    }
//
//    return 0;

//    int a=0,b=0;
//    printf("������������,һ��Ϊ��������,һ��Ϊ��������:\n");
//
//    while ((scanf("%d%d",&a,&b) == 2 ) && a != b && a<b){
//        printf("���������������ƽ���ֱ���%d��%d\n",a*a,b*b);
//        printf("����������ƽ����Ϊ%d\n",he(a,b));
//    }printf("�������!���˳�.");
/*int he(int a,int b){
    int sum=0;
    for (int n = a; n <= b; ++n) {
            ########��������#########
        sum+= n*n;
    }
    return sum;
}*/
//    return 0;


//    float a,b;
//    printf("����������������:\n");
//    while (scanf("%f%f",&a,&b)==2){
//
//        printf("������Ϊ%f", fu(a,b));
//    }
//   /* float fu(float a,float b){####��������
//        float c=0;
//        c=(a-b)/(a*b);
//        return c;*/
//    }
//
//
//
//
//    return 0;

//    char f[100];
//    printf("�����뵥��:\n");
//    scanf("%s",f);
//    int a=strlen(f);
//
//    for (int n = a; n >=0; --n) {
//        printf("%c",f[n]);
//    }
//
//    return 0;



//    int a=0,b=1;
//
//    printf("������������,�ֱ�Ϊ���޺�����:\n");
//    scanf("%d%d",&a,&b);
//    printf("����      ƽ��        ����\n");
//    for (int n = a; n < b; ++n) {
//
//
//        printf("%d%10d%10d\n",n,n*n,n*n*n);
//
//    }
//
//    return 0;

    //######################�����Ѿ����#########################
//
//    char lets[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//    char n_lets[27]="ZYXWVUTSRQPONMLKJIHGFEDCBA";
//    char f='A';
//
//    char string[8];
//    char n;
//    int j=0,y;
//    printf("������һ����дӢ����ĸ��\n");
//    scanf("%s",string);
//    n=string[0];
//    int h=n-f;//��ȡ������ĸ�����������A=0
//    int g= string[0];//��ȡ������ĸ�����������A=65
//
//    //              ######(���찴������ĸѰ���������Ӧ����ĸλ��)
//    printf("����Ĵ�д����%d\n",h);
//    int n=g+(g-1);//��Ͷ��ж���
//    int o,p=h;
//    int s=0;
//    int u=26-h;
//    for ( j = 0,o=h; j <= h; ++j,o--,u--) {//������
//
//        for (int k = 0; k < o; k++) {//����ո�#######################################
//            printf("%c",32);//���,���ỻ�ؿո�
//        }
//                                             // ##########�ѽ��########################
//        for (int d=0;d<j+1;d++) {//˳��
//            printf("%c",lets[d]);
//        }                                // ############################################
//
//                                    //###########����δ���################
//        for (int k = j-1; k >= 0; k--) {
//            printf("%c",lets[k]);
//        }
//
//        printf("\n");
//    }
//
//    return 0;



//    for (int n = 5; n >= 0; n--) {
//
//        for (int j = 6; j >= n; j--) {
//            printf("%c",lets[j]);
//        }
//        printf("\n");
//    }





//
//    for (int n = 1; n <= 5; n++) {
//        for (int j = 0; j <n; j++) {
//            printf("$");
//        }
//        printf("\n");
//    }






//    char shu[YING];
//    char c='a';
//    for (int n = 0; n < YING; n++,c++) {
//
//        shu[n]=c;
//       // printf("%c",shu[n]);
//    }
//    //printf("%s",&shu[4]);
//    for (int j = 0; j < YING; j++)
//        printf("%c",shu[j]);
//
//    printf("OK\n");
//    return 0;





//
//    int n;
//    char ch;
//    for(n=0,ch='A';n<4;n++,ch+=2*n)printf("%c",ch);
//    return 0;








//
//    int a,b;
//    for(a=1;a<=4;a++){
//        for(b=1;b<=8;b++){
//            printf("$");
//        }
//        printf("\n");
//    }
// return 0;






//
//    int x;
//    scanf("%d",x)==1;
//    x!=5;
//    x>=20;
//
//
//

//    double value;
//    for (value=36;value>0;value/=2){
//        printf("%3f\n",value);
//
//    }   printf("\n\n%3f",value);
//    return 0;




//    int quack=2;
//
//    quack+=5;
//    quack*=10;
//    quack-=6;
//    quack/=8;
//    quack%=3;
//    printf("quack=%d",quack);
//
//    return 0;


//    int a=0;
//
//    while (a++<=3);
//        //int b;
//        printf("����while����%d\n",a);
//    {   //b++;
//    }
//
////    printf("������һ��double������\n");
//    double n = 0;
//    scanf("%lf",&n);
//    double b;
//     b=LF(n);
//
//    printf("�����������������Ϊ%.2lf",b);









//    int z = 0;
//    printf("������һ��������\n");
//    scanf("%d",&z);
//
//    while (z-1<15){
//        printf("%d  ",z);
//        z++;
//    }
//return 0;














//    int f=1;
//    const int s = 7;
//
//    while (f>0){
//        printf("������������\n");
//        //int f;
//        scanf("%d",&f);
//
//        int h;
//        h = f/s;
//        int F=0;
//        F = (int)f%(int)s;
//        printf("�������������Ϊ%d\n��ת��Ϊ%d��%d��\n\n",f,h,F);
//
//    }
//return 0;







//    int a=0;int b=100;
//
//    while (a++<b){
//        jing(a);
//        printf("a=%d\n",a);
//    }
//
//
//
//    return 0;











//    int n=0,b=0;
//    b=b++;
//    b=++b;
//    printf("int�ֽ�=%zd",sizeof (char));
//
//    return 0;




    //const int n;

//    int n = 1;
//    int j =0;
//    while (j<=15) {
//        long long int h;
//        h=n;
//        printf("n=%d\n", h);
//        h = pow(n, n);
//        printf("%d��%d�η�=%lld\n\n", n,n,h);
//        n++;
//        j++;
//    }
//    return 0;


//    float cost =12.99;
//    float percent = 80.0;
//    char string[20];
//
//    printf("This copy of \"%s\" sells for $%.2f.\n",BOOK,cost);
//    printf("That is %.0f%% of list.\n",percent);
//    printf("�ַ���%s",string);
//
//    return 0;


   // printf("%hd",A);

//    const double a=3268.09;
//    printf("*%20.2f*",a);
//    int s=3268;
//    char name[50];
//
//    printf("$320 What`s your name?MAX=%lld,min=%lld,%s=%c,PI=%llf\n",LLONG_MAX,LLONG_MIN,"%c",'a',PI);
//    scanf("%s",name);
//    printf("Hello %s.%s,strlen=%zd,sizeof=%zd\n",name,PRAISE,strlen(name),sizeof(name));
//    printf("�ҽ�shimianyou@163.com��%d,%f,%lf",s);
    //printf("%hd",s);



//    char a;
//    printf("���������֣�\n");
//    int n=-1;
//
//
//
//        scanf("%d",&a);
//
//        printf("�������������%d����Ӧ���ַ�Ϊ%c\n",a,a);






//    long long ab=3268099093;
//    float a,b;
//    b=2.0e4+1;
//    a=b-2.0e4;
//    printf("%f\n%d",a,ab);
//    float a=(0.1234E-10)/10;
//    float b=a/10;
//    printf("a=%e,\n%f",a,b);
//    float aboat=32000.0;
//    double abet=2.14e9;
//    long double dip=5.32e-5;
//    printf("%f,%e\n",aboat,aboat);
//    printf("%a",aboat);
//    intmax_t num;
//    for ( ; num !=-1 ; num+=1) {
//        intmax_t j;
//        printf("%d   %d/n",j,num);
//        j+=1;
//    }
//    unsigned int un = 3000000000;
//    printf("unsigned int un=%u,un=%d\n",un,un);
//    int toes;
//    toes = 10;
//
//    printf("int toes=%d\ntoes������Ϊ%d\ntoes������Ϊ%d\n",toes,2*toes,toes*toes*toes);
//    printf("starting now:\n");
//    one_three();
//    printf("done!");

    //return 0;

}




//10.13 ������
void yhyd/*�û�����*/(double num1[],double num2[],double num3[]){
    printf("��������������,ÿ�����double���͵�����\n�������һ�����飺\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%lf",&num1[i]);
    }
    printf("������ڶ������飺\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%lf",&num2[i]);
    }
    printf("��������������飺\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%lf",&num3[i]);
    }
    printf("�����������Ϊ��\n");
    printf("��һ�� ");
    for (int i = 0; i < 5; ++i) {
        printf("%6.3lf",num1[i]);
    }
    printf("\n�ڶ��� ");
    for (int i = 0; i < 5; ++i) {
        printf("%6.3lf",num2[i]);
    }
    printf("\n������ ");
    for (int i = 0; i < 5; ++i) {
        printf("%6.3lf",num3[i]);
    }
}
void zupj/*ÿ��ƽ��ֵ*/(const double num1[],const double num2[],const double num3[],double *p1,double *p2,double *p3){
    //double p1,p2,p3;
    for (int i = 0; i < 5; ++i) {
        *p1+=num1[i];
    }printf("\np1�ܺ�=%7.3f",*p1);
    for (int i = 0; i < 5; ++i) {
        *p2+=num2[i];
    }printf("   p2�ܺ�=%7.3f",*p2);
    for (int i = 0; i < 5; ++i) {
        *p3+=num3[i];
    }printf("   p3�ܺ�=%7.3f",*p3);

    printf("\n��һ��ƽ��ֵ��%6.3f\n�ڶ���ƽ��ֵ��%6.3f\n������ƽ��ֵ��%6.3f\n",*p1/5,*p2/5.0,*p3/5.0);
}
void sypj/*����ƽ��*/(double p1,double p2,double p3,double *sp){
*sp=(p1+p2+p3)/15.0;
    printf("������ƽ��ֵΪ��%6.3f\n",*sp);
}
void qbzd/*15�����е����ֵ*/(double num1[],double num2[],double num3[],int n,double *max1,double *max2,double *max3,double *max){
    //double max1=0,max2=0,max3=0,max;
    for (int i = 0; i < n; ++i) {
        if (*max1 < num1[i])*max1 = num1[i];
    }printf("��һ�����ֵ��%6.3f",*max1);
    for (int i = 0; i < n; ++i) {
        if (*max2<num2[i])*max2=num2[i];
    }printf("�ڶ������ֵ��%6.3f",*max2);
    for (int i = 0; i < n; ++i) {
        if (*max3<num3[i])*max3=num3[i];
    }printf("���������ֵ��%6.3f",*max3);

    if (*max1>*max2)*max=*max1;
    else *max=*max2;
    if (*max<*max3)*max=*max3;
    printf("\n�������ֵΪ��%7.3f\n",*max);
}
void dyjg/*��ӡ���*/(double num1[],double num2[],double num3[],
                  double *p1,double *p2,double *p3,double *sp,
                  double *max1,double *max2,double *max3,double max){
    printf("*************************************************\n");
    printf("�û����������ݵ����н����\n");
    printf("��������ֱ�Ϊ��\n");
    printf("��һ�� ");
    for (int i = 0; i < 5; ++i) {
        printf("%6.3lf",num1[i]);
    }
    printf("\n�ڶ��� ");
    for (int i = 0; i < 5; ++i) {
        printf("%6.3lf",num2[i]);
    }
    printf("\n������ ");
    for (int i = 0; i < 5; ++i) {
        printf("%6.3lf",num3[i]);
    }
    printf("\nÿ�������ƽ��ֵΪ��");
    printf("\n��һ��ƽ��ֵ��%6.3f\n�ڶ���ƽ��ֵ��%6.3f\n������ƽ��ֵ��%6.3f\n",*p1/5,*p2/5.0,*p3/5.0);
    printf("������ƽ��ֵΪ��%6.3f\n",*sp);
    printf("�������ֵΪ��%7.3f\n",max);

    printf("*************************************************\n");
}







//10.13 ������


void ddf(double a[]/*�հ�*/,double b[]/*����Դ*/,int n){
    int j=n-1;
    for (int i = 0; i < 3; ++i) {
//        j -= 1;
        a[i] = b[j];
        j++;
    }
}



void kb(double a[][4],double b[][4],int n){
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 4; ++j) {
            a[i][j]=b[i][j];
        }
    }


}


/*��������*/

void SG(double a[],int n){

    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-1; ++j) {
            if (a[j]<a[j+1]){
                double count=0;
                count = a[j];
                a[j]=a[j+1];
                a[j+1]=count;
            }
        }
    }


}


/*����*/

double dxc(double a[],int n){
    double jc;
    double max,min;max=min=a[0];
    for (int i = 0; i < n; ++i) {
        if (min>a[i]){
            min=a[i];
        }
        if (max<a[i]){
            max=a[i];
        }
    }
    //jc=(max-min);
    return max-min;
}



/*10.5.2*/

void copy_ptrs(double a[5],double b[5],double c[5]){
    double *pe;
    pe=c;
    int g=(c-b)-1;
    printf("g=%d\n",g);

    for (  ; pe > b; --pe) {
        a[g]=b[g];g--;
    }
}

void copy_ptr(double a[5],double b[5],int n){
//double *ag=a,*bg=b;
    for (int i = 0; i < n; ++i) {
        *(a+i) = *(b+i);
    }
}

void copy_arr(double a[5],double b[5],int n){

    for (int i = 0; i < n; ++i) {
        a[i]=b[i];
    }
}



/*���鳬��һλ���ƣ����飩*/


int sump(int * start,int * end){
    int total = 0;
    while (start < end){
        total += *start;
        start++;
    }
    return total;
}

/*����ѭ���ݹ�*/
void to_bass_n(unsigned long n,unsigned short t){
    if (t<2||t>10){
        printf("������2~10֮�����\n");
        return;
    }
    int r;
    r=n%t;
    if (n>=2)to_bass_n(n/t,t);
    printf("%d",r);
}


double power(double n,int p){
    double pow=1;int i;

    if (n==0&&p==0){
        printf("0 �� 0 ����Ϊ1\n");
        return 1;
    }
    if (n==0){
        return 0;
    }
    if (p==0)return 1;
    //ѭ��
    if (p>0){
        for (int i = 1; i <= p; ++i) {
            pow *= n;
            return pow;
        }}
        else
        {
            for (int i = 1; i <= -p; ++i) {
                pow *= n;
                return 1/pow;
            }
        }
    }
    //�ݹ�
//    if (p>0)return n* power(n,p-1);/*��p���ݵĵݹ�*/
//    else
//        return power(n,p+1)/n;//��p���ݵĵݹ�




void bdx(double * a,double * b,double * c){
    double g,D=0,Z=0,X=0;int l=1;
    while (*a>*b&&*a>*c&&l==1){
        D=*a;
        if (*b>*c){
            Z=*b;X=*c;
        }else {Z=*c;X=*b;}
        l--;*a=D;*b=Z;*c=X;
        printf("�����ڵ��������ֱ�Ϊa=%lf b=%lf c=%lf\n",*a,*b,*c);
    }
    while (*b>*a&&*b>*c&&l==1){
        D=*b;
        if (*a>*c){
            Z=*a;X=*c;
        }else {Z=*c;X=*a;}
        l--;*a=D;*b=Z;*c=X;
        printf("�����ڵ��������ֱ�Ϊa=%lf b=%lf c=%lf\n",*a,*b,*c);
    }
    while (*c>*a&&*c>*b&&l==1){
        D=*c;
        if (*a>*b){
            Z=*a;X=*b;
        }else {Z=*b;X=*a;}
        l--;*a=D;*b=Z;*c=X;
        printf("�����ڵ��������ֱ�Ϊa=%lf b=%lf c=%lf\n",*a,*b,*c);
    }
    *a=D;*b=Z;*c=X;
    printf("�����ڵ��������ֱ�Ϊa=%lf b=%lf c=%lf\n",*a,*b,*c);
}




void larger_of(double *c,double *d){
    float s;
    if (*c>*d){
        s=*c;
        *d=s;*c=s;
    }else{
        s=*d;
        *c=s;*d=s;
    }

    printf("�������ֵ������a=%lf b=%lf.(���ú�����)\n",*c,*d);
}




double dao(double a,double b){
    //double c,d;
    return 2/(1/a+1/b);

}

void chline(char ch,int i,int j){
    char c;
    c=ch;
    for (int k = 0; k < i; ++k) {
        for (int l = 0; l < j; ++l) {
            printf("%c",c);
        }
        printf("\n");
    }

}



double fl(double *a,double *b){
    double f;

    if (*a>*b){
        return *b;
    }else return *a;


}


void na(){
    /*9.5 9.a*/
    printf("Please choose one of the following:\n"
           "1) copy files       2) move files\n"
           "3) remove files     4) quit\n"
           "Enter the number o your choice:\n");
}

int nb(int  max,int  min){
    int a,i,x;
    a=max;i=min;

    if ((scanf("%d",&x))!=1)return 4;
    if (x<a&&x>i){return x;}
    else
    while (x>a||x<i){
        printf("����������\n");
        na();scanf("%d",&x);
        if (x<a&&x>i){return x;}
    }
}



float fm(){
    double r;int i=0;
    while (i==0){
        if (((scanf("%lf",&r))==1&&r!=0)){
            //i++;
            break;
        } else printf("���������루��ĸ��Ϊ0��:\n");
    }
    return r;
}

void cdl(){
        printf("********������С�˵�********\n"
               "a. �ӷ�             b. ����\n"
               "c. �˷�             d. ����\n"
               "e. �˳�\n"
               "****************************\n");
}

double LF(double a){
    double b;
    b=a*a*a;
    return b;
}

//void jing(int a){
//    while (a-->0)
//        printf("#");
//    printf("\n");
//}

//
//long ping(int a){
//    int b;
//    b=(long)a*a;
//    return 0;
//}


//void one_three(){
//    printf("one\n");
//    two();
//    printf("three\n");
//}
//
//void two(){
//    printf("two\n");
//}
void weiba(void){};