#VAR1 ""
char FUN1(char VAR2)
{
    VAR2 = (char)FUN2();
    return VAR2;
}
void FUN3()
{
    char VAR2;
    VAR2 = '';
    VAR2 = FUN1(VAR2);
    {
        ++VAR2;
        char VAR3 = VAR2;
        FUN4(VAR3);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}