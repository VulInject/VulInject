#VAR1 ""
#VAR1 <VAR2.VAR3>
typedef union
{
    unsigned int VAR4;
    unsigned int VAR5;
} VAR6;
void FUN1()
{
    unsigned int VAR7;
    CWE190_Integer_Overflow__unsigned_int_fscanf_square_34_unionType VAR8;
    VAR7 = 0;
    fscanf (stdin, "", &VAR7);
    VAR8.VAR4 = VAR7;
    {
        unsigned int VAR7 = VAR8.VAR5;
        {
            unsigned int VAR9 = VAR7 * VAR7;
            FUN2(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}