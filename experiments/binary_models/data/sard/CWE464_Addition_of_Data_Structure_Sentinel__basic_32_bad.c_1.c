#VAR1 ""
void FUN1()
{
    char VAR2;
    char *VAR3 = &VAR2;
    char *VAR4 = &VAR2;
    VAR2 = '';
    {
        char VAR2 = *VAR3;
        {
            char VAR5[2];
            VAR5[0] = (char)getc(stdin);
            VAR5[1] = '';
            VAR2 = (char)FUN2(VAR5);
        }
        *VAR3 = VAR2;
    }
    {
        char VAR2 = *VAR4;
        {
            char VAR6[4];
            VAR6[0] = '';
            VAR6[1] = VAR2;
            VAR6[2] = '';
            VAR6[3] = '';
            FUN3(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}