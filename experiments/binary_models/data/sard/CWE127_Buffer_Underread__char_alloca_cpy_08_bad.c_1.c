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
    char * VAR5 = (char *)FUN4(100*sizeof(char));
    memset(VAR5, '', 100-1);
    VAR5[100-1] = '';
    if(FUN1())
    {
        VAR4 = VAR5 - 8;
    }
    {
        char VAR6[100*2];
        memset(VAR6, '', 100*2-1); 
        VAR6[100*2-1] = ''; 
        strcpy(VAR6, VAR4);
        FUN5(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}