#VAR1 ""
#VAR1 <assert.VAR2>
#define ASSERT_VALUE 5
#define FUN1 (3 * sizeof(VAR3) + 2)
void FUN2()
{
    int VAR3;
    VAR3 = -1;
    {
        char VAR4[VAR5] = "";
        if (fgets(VAR4, VAR5, stdin) != NULL)
        {
            VAR3 = FUN3(VAR4);
        }
        else
        {
        }
    }
    {
        int VAR6 = VAR3;
        int VAR3 = VAR6;
        assert(VAR3 > VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}