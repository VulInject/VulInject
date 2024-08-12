#VAR1 ""
typedef union
{
    short VAR2;
    short VAR3;
} VAR4;
void FUN1()
{
    short VAR5;
    CWE190_Integer_Overflow__short_rand_postinc_34_unionType VAR6;
    VAR5 = 0;
    VAR5 = (short)FUN2();
    VAR6.VAR2 = VAR5;
    {
        short VAR5 = VAR6.VAR3;
        {
            VAR5++;
            short VAR7 = VAR5;
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