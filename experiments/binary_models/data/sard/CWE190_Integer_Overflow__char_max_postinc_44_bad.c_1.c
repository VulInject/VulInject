#VAR1 ""
void FUN1(char VAR2)
{
    {
        VAR2++;
        char VAR3 = VAR2;
        FUN2(VAR3);
    }
}
void FUN3()
{
    char VAR2;
    void (*VAR4) (char) = VAR5;
    VAR2 = '';
    VAR2 = VAR6;
    FUN4(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}