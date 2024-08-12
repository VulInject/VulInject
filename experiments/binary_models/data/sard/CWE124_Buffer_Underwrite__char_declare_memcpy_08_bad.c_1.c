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
    char VAR5[100];
    memset(VAR5, '', 100-1);
    VAR5[100-1] = '';
    if(FUN1())
    {
        VAR4 = VAR5 - 8;
    }
    {
        char VAR6[100];
        memset(VAR6, '', 100-1); 
        VAR6[100-1] = ''; 
        memcpy(VAR4, VAR6, 100*sizeof(char));
        VAR4[100-1] = '';
        FUN4(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}