#VAR1 ""
#VAR1 <VAR2.VAR3>
typedef union
{
    char VAR4;
    char VAR5;
} VAR6;
void FUN1()
{
    char VAR7;
    CWE190_Integer_Overflow__char_fscanf_square_34_unionType VAR8;
    VAR7 = '';
    fscanf (stdin, "", &VAR7);
    VAR8.VAR4 = VAR7;
    {
        char VAR7 = VAR8.VAR5;
        {
            char VAR9 = VAR7 * VAR7;
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