#VAR1 ""
#VAR1 <VAR2.VAR3>
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    char * VAR4;
    char * VAR5 = (char *)FUN4(50*sizeof(char));
    char * VAR6 = (char *)FUN4(100*sizeof(char));
    memset(VAR5, '', 50-1); 
    VAR5[50-1] = ''; 
    memset(VAR6, '', 100-1); 
    VAR6[100-1] = ''; 
    if(FUN1())
    {
        VAR4 = VAR5;
    }
    {
        char VAR7[100];
        memset(VAR7, '', 100-1);
        VAR7[100-1] = ''; 
        memmove(VAR7, VAR4, strlen(VAR7)*sizeof(char));
        VAR7[100-1] = '';
        FUN5(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}