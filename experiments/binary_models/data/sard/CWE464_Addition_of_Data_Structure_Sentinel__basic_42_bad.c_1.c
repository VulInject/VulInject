#VAR1 ""
char FUN1(char VAR2)
{
    {
        char VAR3[2];
        VAR3[0] = (char)getc(stdin);
        VAR3[1] = '';
        VAR2 = (char)FUN2(VAR3);
    }
    return VAR2;
}
void FUN3()
{
    char VAR2;
    VAR2 = '';
    VAR2 = FUN1(VAR2);
    {
        char VAR4[4];
        VAR4[0] = '';
        VAR4[1] = VAR2;
        VAR4[2] = '';
        VAR4[3] = '';
        FUN4(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}