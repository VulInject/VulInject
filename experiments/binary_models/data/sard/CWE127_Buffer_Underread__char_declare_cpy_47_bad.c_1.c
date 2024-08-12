#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char VAR5[100];
    memset(VAR5, '', 100-1);
    VAR5[100-1] = '';
    if(FUN2())
    {
        VAR4 = VAR5 - 8;
    }
    else
    {
        VAR4 = VAR5;
    }
    {
        char VAR6[100*2];
        memset(VAR6, '', 100*2-1); 
        VAR6[100*2-1] = ''; 
        strcpy(VAR6, VAR4);
        FUN3(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}