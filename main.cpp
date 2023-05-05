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

#define PI 3.14159265358979
#define A 65618
#define PRAISE "You are an extraordinary being."
//#define INT_MAX
//
//void smile();
//void two();
//void jing(int a);
#define PI 3.14159
int main();//声明函数调用
double LF(double a);
void weiba(void);
void cdl();
float fm();
//void one_three();
//#define AI[1,2,3,4,5,6,7,8]
#define BOOK "War and peace"
#define YING 26
#define SPACE ' '
/*      (练习&&时间）==完美        */
#include "sili.h"


int main(){

sili();
sili1();

    return 0;
    /*8.8*/
//    char ch;
//    double j=0,i=0;
//
//    cdl();
//
//    while (ch=getchar()){
//        while (getchar()!='\n')continue;//清理缓存
//        switch (ch) {
//            case 'a':
//                printf("请输入第一个数字：\n");
//                scanf("%lf",&j);
//                printf("请输入第二个数字：\n");
//                scanf("%lf",&i);
//                printf("%.2lf + %.2lf = %.2lf\n",j,i,j+i);
//                break;
//            case 'b':
//                printf("请输入第一个数字：\n");
//                scanf("%lf",&j);
//                printf("请输入第二个数字：\n");
//                scanf("%lf",&i);
//                printf("%.2lf - %.2lf = %.2lf\n",j,i,j-i);
//                break;
//            case 'c':
//                printf("请输入第一个数字：\n");
//                scanf("%lf",&j);
//                printf("请输入第二个数字：\n");
//                scanf("%lf",&i);
//                printf("%.2lf * %.2lf = %.2lf\n",j,i,j*i);
//                break;
//            case 'd':
//                printf("请输入第一个数字：\n");
//                scanf("%lf",&j);
//                printf("请输入第二个数字：\n");
//                i=fm();
//                printf("%.2lf / %.2lf = %.2lf\n",j,i,j/i);
//                break;
//            case 'e':
//                printf("您已退出\n");
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
//    //printf("我猜你的数字为%d.\n",zong);
//    do {
//        printf("我猜你的数字为%d\n",zong);
//        if (getchar()=='y')break;
//        printf("那这个数%d是大了还是小了，输入d/x\n",zong);
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
//    printf("我真聪明\n");
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
//    printf("单词总数为%d，单词平均字母数为%d\n",num,num/b);
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
//        printf("大写字母有%d个，小写字母有%d个\n",Dnum,Xnum);
//    }
//
//    return 0;
/*8.2*/
//    char ch;
//    int chi,num=0;
//    while ((ch=getchar())!=EOF){
//        if (ch>=32) {
//            printf("符:%c",ch);
//            //putchar(ch);
//            printf(" 值:%d ", ch);
//        }else
//            if (ch=='\n'||ch=='\t'){
//                if (ch=='\n')
//                printf("\\n,值：%d",ch);
//                else printf("\\t,值:%d",ch);
//            } else{
//                printf("\'%c\'--^%c",ch,(ch+64));
//            }
//        if (++num==10){
//            printf("\n");
//            num=0;
//        }
//    }







    //return 0;
///*7.11题目*/
//    const double YJSJ=2.05,TCSJ=1.15,HLBSJ=1.09;//售价
//    char xq;int BS=0,ZBS=0,j=1;
//    double SJ,DDSJ,ZK=0,ZKH=0,YF=0,HWZJ=0;
//    printf("********************欢迎来到ABC邮购杂货店********************\n  请输入序号选择你的商品:\na)洋蓟   2.05美元/磅      b)甜菜 1.15美元/磅\n"
//           "c)胡萝卜 1.09美元/磅      d)退出订购\n*****************愿本次购物给您带来美好体验******************\n");
//
//    while ((xq=getchar())>='a'&&xq<='d'){
//        switch (xq) {
//            case 97:SJ=YJSJ;
//                printf("您已选择洋蓟,请输入重量\n");
//                break;
//            case 98:SJ=TCSJ;
//                printf("您已选择甜菜,请输入重量\n");
//                break;
//            case 99:SJ=HLBSJ;
//                printf("您已选择胡萝卜,请输入重量\n");
//                break;
//            case 100:goto exit;
//        }printf("请输入所需重量:\n");
//    }
//    while ((scanf("%d",&BS))==1){
//        ZBS=ZBS+BS;
//        printf("您已输入%d磅,请问您还需要吗?需要请继续输入,不需要清输入'N'.\n请输入所需重量:\n",ZBS);
//    }printf("您一共已输入%d磅\n",ZBS);
//
//    while (1){
//        DDSJ=ZBS*SJ;//运费前价格
//        if (DDSJ<=100){//订单折扣
//            ZK=DDSJ*0.05;
//            ZKH=DDSJ-ZK;
//            DDSJ=ZKH;
//        }
//        printf("您的订单%d磅,折扣%f.3,折扣后价格%.3f\n\n",ZBS,ZK,DDSJ);
//
//        if (ZBS>0 && ZBS<=5){//运费
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
//        printf("您的购买信息为:\n"
//               "物品售价为:%.3f磅/美元        订购重量为:%d磅\n"
//               "订购蔬菜费用为%.3f美元         订单总费用为：%.3f美元\n"
//               "折扣为:%.3f美元              运费和包装费:%.3f美元\n费用总额为:%.3f美元\n\n",SJ,ZBS,DDSJ,DDSJ,ZK,YF,HWZJ);
//        break;
//    }
//    exit:
//    printf("您已退出!\nABC邮购杂物店欢迎您的下次光临!\n");
//    return 0;


///*7.10题目*/
//    int n;
//    double SYZ,SL1=0.15,SL2=0.28;
//    const double DS=17850,HZ=23900,YG=29750,YL=14875;
//    double SJGZ,sqgz,NS;int i=99;
//    for (int k = 1; k <= i; ++k) {
//
//        printf("----------------------这是你的第%d次输入---------------------\n"
//               "选择你的纳税人身份:\n"
//               "1) 单身          2) 户主\n"
//               "3) 已婚,共有      4) 已婚,离异\n"
//               "----------------------这是你的第%d次输入---------------------\n",k,k);
//        scanf("%d", &n);
//        if (n >= 1 && n <= 4) {
//            switch (n) {
//                case 1:
//                    SYZ = DS;
//                    printf("单身的税金为:%.3f美元按15%%计,超出部分按28%%计\n", DS);
//                    break;
//                case 2:
//                    SYZ = HZ;
//                    printf("户主的税金为:%.3f美元按15%%计,超出部分按28%%计\n", HZ);
//                    break;
//                case 3:
//                    SYZ = YG;
//                    printf("已婚,共有 的税金为:%.3f美元按15%%计,超出部分按28%%计\n", YG);
//                    break;
//                case 4:
//                    SYZ = YL;
//                    printf("已婚,离异 的税金为:%.3f美元按15%%计,超出部分按28%%计\n", YL);
//                    break;
//
//            }
//        } else { printf("输入错误再见~\n");
//            break;}
//
//        printf("请输入你的工资:\n");
//
//        while ((scanf("%lf", &sqgz)) == 1) {
//            if (sqgz <= SYZ) {
//                NS = sqgz * SL1;
//                SJGZ = sqgz - NS;
//                printf("你的税前工资为%.3lf.税后工资为%.3lf.所需纳税%.3lf\n\n\n", sqgz, SJGZ, NS);
//                break;
//            } else {
//                NS = SYZ * SL1 + (sqgz - SYZ) * SL2;
//                SJGZ = sqgz - NS;
//                printf("你的税前工资为%.3lf.税后工资为%.3lf.所需纳税%.3lf\n\n\n", sqgz, SJGZ, NS);
//                break;
//            }
//        }
//    }
//    return 0;


    /*################# n 范围内的素数(求) #######################*/

//    printf("请输入一个正整数(只取整数部分,其余抛弃):\n");
//
//   int n;
//    scanf("%d",&n);
//    printf("你所输入的n=%d\n,", n);
//    printf("在其中的素数为:\n");
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
//    printf("请选择工资等级,输入1~4,输入5则退出\n"
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
//                    printf("再见!(switch循环内)\n");
//                    goto exit;
//            }
//        } else printf("输入错误,请重新输入(输入范围1~5):\n");
//    }
//
//
//    printf("请输入一周工作小时数:\n");
//
//    float Jbgz,shui,jing,Jbgz2;
//
//    scanf("%d",&x);
//    Jbgz=JB*SJGZ+(x-JB)*1.5*SJGZ;
//    Jbgz2=Jbgz;
//    printf("你的税前工资为%.3f美元\n",Jbgz);
//    if (Jbgz<=300){
//        shui=Jbgz*SL1;
//        printf("你要交的税为:%.3f美元\n",shui);
//    } else if (Jbgz>300&&Jbgz<=450){
//        shui=300*SL1+(Jbgz-300)*SL2;
//        printf("你要交的税为:%.3f美元\n",shui);
//    } else if (Jbgz>450){
//        shui=300*SL1+150*SL2+(Jbgz-450)*SL3;
//        printf("你要交的税为:%.3f美元\n",shui);
//    }
//    jing=Jbgz2-shui;
//    printf("你的净收入为:%.3f美元\n",jing);
//
//    exit:printf("再见!(循环外 return 处)\n");
//    return 0;





//#define SJGZ 10
//#define JB 40
//#define SL1 0.15
//#define SL2 0.2
//#define SL3 0.25
//    printf("请输入一周工作小时数:\n");
//    int x=0;
//    float Jbgz,shui,jing,Jbgz2;
//
//    scanf("%d",&x);
//    Jbgz=JB*SJGZ+(x-JB)*1.5*SJGZ;
//    Jbgz2=Jbgz;
//    printf("你的税前工资为%.3f美元\n",Jbgz);
//    if (Jbgz<=300){
//        shui=Jbgz*SL1;
//        printf("你要交的税为:%.3f美元\n",shui);
//    } else if (Jbgz>300&&Jbgz<=450){
//        shui=300*SL1+(Jbgz-300)*SL2;
//        printf("你要交的税为:%.3f美元\n",shui);
//    } else if (Jbgz>450){
//        shui=300*SL1+150*SL2+(Jbgz-450)*SL3;
//        printf("你要交的税为:%.3f美元\n",shui);
//    }
//    //jing=Jbgz2-shui;
//    printf("你的净收入为:%.3f美元\n",Jbgz2-shui);
//
//    return 0;
//int j=0,h=0;
//char ch;
//    printf("请输入一串字符,以'#'号结束:\n");
//    while ((ch=getchar())!='#'){
//        if (ch=='e'&&j==0){
//        j+=1;
//        }
//        if (ch=='n'&&j==1){
//            h++;j-=1;
//        }
////        printf("共出现了%d次'ei'\n",h);
//
//}printf("共出现了%d次'ei'\n",h);
//
//    return 0;

//    printf("请输入字符串,以'#'为结尾:\n");
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
//    printf("\n一共进行了%d次替换.",n);
//
//
//    return 0;

//    printf("请输入字符串,以'#'为结尾:\n");
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
//    printf("\n一共进行了%d次替换.",n);
//
//
//    return 0;

//    char ch;
//    printf("请输入一串数字,以0结尾:\n");
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
//    }printf("奇数个数为%d,奇数平均值为%.3f奇数和为%.0f\n偶数个数为%d,偶数平均值为%.3f,偶数和为%.0f\n",j,jp,jl,o,op,ol);
//
//    return 0;
    //打印7.12 2
//    printf("请输入:\n");
//    char ch;int n=1;
//    while ((ch=getchar())!='#'){
//        printf(" 第%d个 字符 %c AS %d",n,ch,ch);
//        if (n==8)printf("\n");
//        n++;
//    }
//    return 0;

//    printf("请输入:\n");
//    char ch;int k=0,h=0,q=0;
//    while ((ch=getchar())!='#'){
//        if (ch==' '){
//            k++;
//            printf("空格%d\n",k);
//        }
//        if (ch=='\n')h++;printf("换行%d\n",h);
//        if (!(isspace(ch)))q++;printf("q=%d\n",q);
//    }
//    printf("空格为%d,换行为%d,字符为%d",k,h,q);
//
//
//
//    return 0;
//    int age = 20;
//    while (age++<=65){
//        if ((age%20)==0)
//            printf("第一个%d\n",age);
//        if (age=65)
//            printf("第二个%d\n",age);break;
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
//        printf("当前第%d周，朋友%d人。\n", zou, Rabnud);
//        Rabnud = 2 * (Rabnud - zou++);
//
//    }
//    printf("%d周后，博士的朋友等于邓巴数\n",--zou);
//    return 0;

//    const float Ben=100;
//    float Dapsum=100,Deisum=100;
//    int n=0;
//    do {
//
//        printf("第%d年\n",++n);
//        Dapsum=Dapsum+Ben*0.1;
//        printf("Dapsum=%.4f\n",Dapsum);
//        Deisum= Deisum+Deisum*0.05;
//        printf("Deisum=%.4f\n",Deisum);
//
//    } while ((Deisum-Dapsum)<0);
//    printf("需要%d年\n",n);
//
//    return 0;

//    char zf[256];
//    printf("请输入一行输入,以回车结尾:\n");
//    int n=0;
//    do {
//        scanf("%c",&zf[n]);//#######巧#####
//    } while (zf[n]!='\n' && ++n);
//
//    for (int j = n; j >=0; --j) {
//        printf("%c",zf[j]);
//    }
//
//    return 0;

//    double ni[8];
//    double mi[8];
//    printf("请输入8个数字:\n");
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
//    printf("第一组数列为:\n");
//    for (int n = 0; n < 8; ++n) {
//        printf("%7.2lf ",ni[n]);
//    }
//    printf("\n第二组数列为:\n");
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
//    printf("请输入8个整数:\n");
//    //scanf("%d",&zheng);
//    for (int n = 0; n < 8; n++) {
//        scanf("%d",&zheng[n]);
//    }
//    for (int n = 7; n >= 0; --n) {//注意越界问题
//        printf(" %d",zheng[n]);
//
//    }
//
//    return 0;

//    int a=0,b=0;
//    printf("请输入两个数,一个为上限整数,一个为下限整数:\n");
//
//    while ((scanf("%d%d",&a,&b) == 2 ) && a != b && a<b){
//        printf("你输入的两个数的平方分别是%d和%d\n",a*a,b*b);
//        printf("这两个数的平方和为%d\n",he(a,b));
//    }printf("输入错误!已退出.");
/*int he(int a,int b){
    int sum=0;
    for (int n = a; n <= b; ++n) {
            ########函数定义#########
        sum+= n*n;
    }
    return sum;
}*/
//    return 0;


//    float a,b;
//    printf("请输入两个浮点数:\n");
//    while (scanf("%f%f",&a,&b)==2){
//
//        printf("计算结果为%f", fu(a,b));
//    }
//   /* float fu(float a,float b){####函数定义
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
//    printf("请输入单词:\n");
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
//    printf("请输入两个数,分别为上限和下限:\n");
//    scanf("%d%d",&a,&b);
//    printf("数字      平方        立方\n");
//    for (int n = a; n < b; ++n) {
//
//
//        printf("%d%10d%10d\n",n,n*n,n*n*n);
//
//    }
//
//    return 0;

    //######################逆序已经解决#########################
//
//    char lets[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//    char n_lets[27]="ZYXWVUTSRQPONMLKJIHGFEDCBA";
//    char f='A';
//
//    char string[8];
//    char n;
//    int j=0,y;
//    printf("请输入一个大写英文字母：\n");
//    scanf("%s",string);
//    n=string[0];
//    int h=n-f;//获取输入字母所代表的数字A=0
//    int g= string[0];//获取输入字母所代表的数字A=65
//
//    //              ######(明天按输入字母寻找数组里对应的字母位数)
//    printf("输入的大写代表%d\n",h);
//    int n=g+(g-1);//最低端有多少
//    int o,p=h;
//    int s=0;
//    int u=26-h;
//    for ( j = 0,o=h; j <= h; ++j,o--,u--) {//处理行
//
//        for (int k = 0; k < o; k++) {//处理空格#######################################
//            printf("%c",32);//解决,待会换回空格
//        }
//                                             // ##########已解决########################
//        for (int d=0;d<j+1;d++) {//顺序
//            printf("%c",lets[d]);
//        }                                // ############################################
//
//                                    //###########逆序未解决################
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
//        printf("试验while次数%d\n",a);
//    {   //b++;
//    }
//
////    printf("请输入一个double的数：\n");
//    double n = 0;
//    scanf("%lf",&n);
//    double b;
//     b=LF(n);
//
//    printf("你所输入的数的立方为%.2lf",b);









//    int z = 0;
//    printf("请输入一个整数：\n");
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
//        printf("请输入天数：\n");
//        //int f;
//        scanf("%d",&f);
//
//        int h;
//        h = f/s;
//        int F=0;
//        F = (int)f%(int)s;
//        printf("你所输入的天数为%d\n经转换为%d周%d天\n\n",f,h,F);
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
//    printf("int字节=%zd",sizeof (char));
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
//        printf("%d的%d次方=%lld\n\n", n,n,h);
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
//    printf("字符串%s",string);
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
//    printf("我叫shimianyou@163.com，%d,%f,%lf",s);
    //printf("%hd",s);



//    char a;
//    printf("请输入数字：\n");
//    int n=-1;
//
//
//
//        scanf("%d",&a);
//
//        printf("你所输入的数字%d所对应的字符为%c\n",a,a);






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
//    printf("int toes=%d\ntoes的两倍为%d\ntoes的立方为%d\n",toes,2*toes,toes*toes*toes);
//    printf("starting now:\n");
//    one_three();
//    printf("done!");

    //return 0;

}

float fm(){
    double r;int i=0;
    while (i==0){
        if (((scanf("%lf",&r))==1&&r!=0)){
            //i++;
            break;
        } else printf("请重新输入（分母不为0）:\n");
    }
    return r;
}

void cdl(){
        printf("********计算器小菜单********\n"
               "a. 加法             b. 减法\n"
               "c. 乘法             d. 除法\n"
               "e. 退出\n"
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