#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
static const int VAR4 = 5;
void FUN1()
{
    char * VAR5;
    char VAR6[50];
    char VAR7[100];
    if(VAR4==5)
    {
        VAR5 = VAR6;
        VAR5[0] = ''; 
    }
    {
        char VAR8[100];
        memset(VAR8, '', 100-1); 
        VAR8[100-1] = ''; 
        FUN2(VAR5, 100, "", VAR8);
        FUN3(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}