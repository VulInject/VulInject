#VAR1 ""
#VAR1 <assert.VAR2>
#define ASSERT_VALUE 5
#define FUN1 (3 * sizeof(VAR3) + 2)
void FUN2()
{
    int VAR3;
    int *VAR4 = &VAR3;
    int *VAR5 = &VAR3;
    VAR3 = -1;
    {
        int VAR3 = *VAR4;
        {
            char VAR6[VAR7] = "";
            if (fgets(VAR6, VAR7, stdin) != NULL)
            {
                VAR3 = FUN3(VAR6);
            }
            else
            {
            }
        }
        *VAR4 = VAR3;
    }
    {
        int VAR3 = *VAR5;
        assert(VAR3 > VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}