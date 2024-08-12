#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    char * VAR6;
    char VAR7[50];
    char VAR8[100];
    if(VAR4)
    {
        VAR6 = VAR7;
        VAR6[0] = ''; 
    }
    {
        char VAR9[100];
        memset(VAR9, '', 100-1); 
        VAR9[100-1] = ''; 
        FUN2(VAR6, 100, "", VAR9);
        FUN3(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}