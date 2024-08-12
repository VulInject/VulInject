#VAR1 ""
typedef union
{
    short VAR2;
    short VAR3;
} VAR4;
void FUN1()
{
    short VAR5;
    CWE197_Numeric_Truncation_Error__short_rand_34_unionType VAR6;
    VAR5 = -1;
    VAR5 = (short)FUN2();
    VAR6.VAR2 = VAR5;
    {
        short VAR5 = VAR6.VAR3;
        {
            char VAR7 = (char)VAR5;
            FUN3(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}