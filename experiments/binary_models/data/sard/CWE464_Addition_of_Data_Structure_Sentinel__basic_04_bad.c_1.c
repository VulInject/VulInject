#VAR1 ""
static const int VAR2 = 1; 
static const int VAR3 = 0; 
void FUN1()
{
    char VAR4;
    VAR4 = '';
    if(VAR2)
    {
        {
            char VAR5[2];
            VAR5[0] = (char)getc(stdin);
            VAR5[1] = '';
            VAR4 = (char)FUN2(VAR5);
        }
    }
    {
        char VAR6[4];
        VAR6[0] = '';
        VAR6[1] = VAR4;
        VAR6[2] = '';
        VAR6[3] = '';
        FUN3(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}