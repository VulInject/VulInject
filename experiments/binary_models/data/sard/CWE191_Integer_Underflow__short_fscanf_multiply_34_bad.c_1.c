#VAR1 ""
typedef union
{
    short VAR2;
    short VAR3;
} VAR4;
void FUN1()
{
    short VAR5;
    CWE191_Integer_Underflow__short_fscanf_multiply_34_unionType VAR6;
    VAR5 = 0;
    fscanf (stdin, "", &VAR5);
    VAR6.VAR2 = VAR5;
    {
        short VAR5 = VAR6.VAR3;
        if(VAR5 < 0) 
        {
            short VAR7 = VAR5 * 2;
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