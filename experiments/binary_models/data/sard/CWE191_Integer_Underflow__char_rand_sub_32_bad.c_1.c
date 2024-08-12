#VAR1 ""
void FUN1()
{
    char VAR2;
    char *VAR3 = &VAR2;
    char *VAR4 = &VAR2;
    VAR2 = '';
    {
        char VAR2 = *VAR3;
        VAR2 = (char)FUN2();
        *VAR3 = VAR2;
    }
    {
        char VAR2 = *VAR4;
        {
            char VAR5 = VAR2 - 1;
            FUN3(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}