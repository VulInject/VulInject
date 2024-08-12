#VAR1 ""
typedef union
{
    char VAR2;
    char VAR3;
} VAR4;
void FUN1()
{
    char VAR5;
    CWE464_Addition_of_Data_Structure_Sentinel__basic_34_unionType VAR6;
    VAR5 = '';
    {
        char VAR7[2];
        VAR7[0] = (char)getc(stdin);
        VAR7[1] = '';
        VAR5 = (char)FUN2(VAR7);
    }
    VAR6.VAR2 = VAR5;
    {
        char VAR5 = VAR6.VAR3;
        {
            char VAR8[4];
            VAR8[0] = '';
            VAR8[1] = VAR5;
            VAR8[2] = '';
            VAR8[3] = '';
            FUN3(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}