#VAR1 ""
#VAR1 <assert.VAR2>
#define ASSERT_VALUE 5
#define FUN1 (3 * sizeof(VAR3) + 2)
void FUN2(int VAR3)
{
    assert(VAR3 > VAR4);
}
void FUN3()
{
    int VAR3;
    void (*VAR5) (int) = VAR6;
    VAR3 = -1;
    {
        char VAR7[VAR8] = "";
        if (fgets(VAR7, VAR8, stdin) != NULL)
        {
            VAR3 = FUN4(VAR7);
        }
        else
        {
        }
    }
    FUN5(VAR3);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}