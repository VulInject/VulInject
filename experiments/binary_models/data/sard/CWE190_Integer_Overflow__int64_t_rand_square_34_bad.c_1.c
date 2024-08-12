#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
typedef union
{
    int64_t VAR5;
    int64_t VAR6;
} VAR7;
void FUN1()
{
    int64_t VAR8;
    CWE190_Integer_Overflow__int64_t_rand_square_34_unionType VAR9;
    VAR8 = 0LL;
    VAR8 = (VAR10)FUN2();
    VAR9.VAR5 = VAR8;
    {
        int64_t VAR8 = VAR9.VAR6;
        {
            int64_t VAR11 = VAR8 * VAR8;
            FUN3(VAR11);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}