#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char VAR5[100];
    VAR4 = VAR5;
    if(FUN2())
    {
        ; 
    }
    {
        size_t VAR6;
        char VAR7[100];
        memset(VAR7, '', 100-1); 
        VAR7[100-1] = ''; 
        VAR6 = strlen(VAR7);
        strncat(VAR4, VAR7, VAR6);
        FUN3(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}