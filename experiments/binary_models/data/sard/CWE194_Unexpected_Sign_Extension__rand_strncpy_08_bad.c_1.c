#VAR1 ""
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
    short VAR2;
    VAR2 = 0;
    if(FUN1())
    {
        VAR2 = (short)FUN4();
    }
    {
        char VAR3[100];
        char VAR4[100] = "";
        memset(VAR3, '', 100-1);
        VAR3[100-1] = '';
        if (VAR2 < 100)
        {
            strncpy(VAR4, VAR3, VAR2);
            VAR4[VAR2] = ''; 
        }
        FUN5(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}