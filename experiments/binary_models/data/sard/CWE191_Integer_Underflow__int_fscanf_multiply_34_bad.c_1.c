#VAR1 ""
typedef union
{
    int VAR2;
    int VAR3;
} VAR4;
void FUN1()
{
    int VAR5;
    CWE191_Integer_Underflow__int_fscanf_multiply_34_unionType VAR6;
    VAR5 = 0;
    fscanf(stdin, "", &VAR5);
    VAR6.VAR2 = VAR5;
    {
        int VAR5 = VAR6.VAR3;
        if(VAR5 < 0) 
        {
            int VAR7 = VAR5 * 2;
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