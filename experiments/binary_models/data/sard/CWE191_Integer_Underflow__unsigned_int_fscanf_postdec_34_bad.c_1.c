#VAR1 ""
typedef union
{
    unsigned int VAR2;
    unsigned int VAR3;
} VAR4;
void FUN1()
{
    unsigned int VAR5;
    CWE191_Integer_Underflow__unsigned_int_fscanf_postdec_34_unionType VAR6;
    VAR5 = 0;
    fscanf (stdin, "", &VAR5);
    VAR6.VAR2 = VAR5;
    {
        unsigned int VAR5 = VAR6.VAR3;
        {
            VAR5--;
            unsigned int VAR7 = VAR5;
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