#VAR1 ""
#VAR1 <VAR2.VAR3>
typedef union
{
    short VAR4;
    short VAR5;
} VAR6;
void FUN1()
{
    short VAR7;
    CWE190_Integer_Overflow__short_max_square_34_unionType VAR8;
    VAR7 = 0;
    VAR7 = VAR9;
    VAR8.VAR4 = VAR7;
    {
        short VAR7 = VAR8.VAR5;
        {
            short VAR10 = VAR7 * VAR7;
            FUN2(VAR10);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}