#VAR1 ""
typedef union
{
    int VAR2;
    int VAR3;
} VAR4;
void FUN1()
{
    int VAR5;
    CWE197_Numeric_Truncation_Error__int_fscanf_to_char_34_unionType VAR6;
    VAR5 = -1;
    fscanf(stdin, "", &VAR5);
    VAR6.VAR2 = VAR5;
    {
        int VAR5 = VAR6.VAR3;
        {
            char VAR7 = (char)VAR5;
            FUN2(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}