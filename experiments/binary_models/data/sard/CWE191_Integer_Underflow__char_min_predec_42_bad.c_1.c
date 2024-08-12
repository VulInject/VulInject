#VAR1 ""
char FUN1(char VAR2)
{
    VAR2 = VAR3;
    return VAR2;
}
void FUN2()
{
    char VAR2;
    VAR2 = '';
    VAR2 = FUN1(VAR2);
    {
        --VAR2;
        char VAR4 = VAR2;
        FUN3(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}