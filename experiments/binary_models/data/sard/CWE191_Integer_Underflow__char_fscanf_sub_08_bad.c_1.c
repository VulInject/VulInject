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
        fscanf (stdin, "", &VAR2);
    }
    if(FUN1())
    {
        {
            char VAR3 = VAR2 - 1;
            FUN4(VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}