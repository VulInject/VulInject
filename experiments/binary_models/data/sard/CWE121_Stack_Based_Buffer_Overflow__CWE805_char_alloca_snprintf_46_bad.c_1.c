#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
void FUN1()
{
    char * VAR4;
    char * VAR5 = (char *)FUN2(50*sizeof(char));
    char * VAR6 = (char *)FUN2(100*sizeof(char));
    if(FUN3())
    {
        VAR4 = VAR5;
        VAR4[0] = ''; 
    }
    {
        char VAR7[100];
        memset(VAR7, '', 100-1); 
        VAR7[100-1] = ''; 
        FUN4(VAR4, 100, "", VAR7);
        FUN5(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN1();
    return 0;
}