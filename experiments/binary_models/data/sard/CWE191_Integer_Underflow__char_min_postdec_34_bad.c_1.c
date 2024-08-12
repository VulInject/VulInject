#VAR1 ""
typedef union
{
    char VAR2;
    char VAR3;
} VAR4;
void FUN1()
{
    char VAR5;
    CWE191_Integer_Underflow__char_min_postdec_34_unionType VAR6;
    VAR5 = '';
    VAR5 = VAR7;
    VAR6.VAR2 = VAR5;
    {
        char VAR5 = VAR6.VAR3;
        {
            VAR5--;
            char VAR8 = VAR5;
            FUN2(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}