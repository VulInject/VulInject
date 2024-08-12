#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
void FUN1(char * VAR4)
{
    {
        char VAR5[100];
        memset(VAR5, '', 100-1); 
        VAR5[100-1] = ''; 
        FUN2(VAR4, 100, "", VAR5);
        FUN3(VAR4);
    }
}
void FUN4()
{
    char * VAR4;
    void (*VAR6) (char *) = VAR7;
    char * VAR8 = (char *)FUN5(50*sizeof(char));
    char * VAR9 = (char *)FUN5(100*sizeof(char));
    VAR4 = VAR8;
    VAR4[0] = ''; 
    FUN6(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN4();
    return 0;
}