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
        VAR2 = VAR3;
    }
    if(FUN1())
    {
        {
            VAR2++;
            char VAR4 = VAR2;
            FUN4(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}