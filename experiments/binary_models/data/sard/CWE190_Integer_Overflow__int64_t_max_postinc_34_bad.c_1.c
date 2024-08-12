#VAR1 ""
typedef union
{
    int64_t VAR2;
    int64_t VAR3;
} VAR4;
void FUN1()
{
    int64_t VAR5;
    CWE190_Integer_Overflow__int64_t_max_postinc_34_unionType VAR6;
    VAR5 = 0LL;
    VAR5 = VAR7;
    VAR6.VAR2 = VAR5;
    {
        int64_t VAR5 = VAR6.VAR3;
        {
            VAR5++;
            int64_t VAR8 = VAR5;
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