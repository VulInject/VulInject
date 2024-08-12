#VAR1 ""
#VAR1 <assert.VAR2>
#define ASSERT_VALUE 5
typedef union
{
    int VAR3;
    int VAR4;
} VAR5;
void FUN1()
{
    int VAR6;
    CWE617_Reachable_Assertion__rand_34_unionType VAR7;
    VAR6 = -1;
    VAR6 = FUN2();
    VAR7.VAR3 = VAR6;
    {
        int VAR6 = VAR7.VAR4;
        assert(VAR6 > VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}