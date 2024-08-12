#VAR1 ""
void FUN1()
{
    char VAR2;
    VAR2 = '';
    goto VAR3;
VAR3:
    {
        char VAR4[2];
        VAR4[0] = (char)getc(stdin);
        VAR4[1] = '';
        VAR2 = (char)FUN2(VAR4);
    }
    {
        char VAR5[4];
        VAR5[0] = '';
        VAR5[1] = VAR2;
        VAR5[2] = '';
        VAR5[3] = '';
        FUN3(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}