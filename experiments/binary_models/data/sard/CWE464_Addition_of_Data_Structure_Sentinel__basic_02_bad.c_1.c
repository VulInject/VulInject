#VAR1 ""
void FUN1()
{
    char VAR2;
    VAR2 = '';
    if(1)
    {
        {
            char VAR3[2];
            VAR3[0] = (char)getc(stdin);
            VAR3[1] = '';
            VAR2 = (char)FUN2(VAR3);
        }
    }
    {
        char VAR4[4];
        VAR4[0] = '';
        VAR4[1] = VAR2;
        VAR4[2] = '';
        VAR4[3] = '';
        FUN3(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}