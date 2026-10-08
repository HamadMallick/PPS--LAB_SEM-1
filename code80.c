#include<stdio.h>
int main()
{
    int name,pass;
    const int userName = 123;
    const int password = 123;
    int userName_ip, password_ip;
    printf("enter username and password \n");
    scanf("%d%d", &userName_ip , &password_ip);
    if(userName == userName_ip && password == password_ip)
    {
        printf("user is authorized");
    }
    else
    {
        printf("user is not authorized");
    }
    return 0;

}
