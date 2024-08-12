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
    char VAR2;
    VAR2 = '';
    if(FUN1())
    {
        {
            char VAR3[2];
            VAR3[0] = (char)getc(stdin);
            VAR3[1] = '';
            VAR2 = (char)FUN4(VAR3);
        }
    }
    {
        char VAR4[4];
        VAR4[0] = '';
        VAR4[1] = VAR2;
        VAR4[2] = '';
        VAR4[3] = '';
        FUN5(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}