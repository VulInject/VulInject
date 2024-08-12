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
    VAR3 = -1;
    {
        char VAR5[VAR6] = "";
        if (fgets(VAR5, VAR6, stdin) != NULL)
        {
            VAR3 = FUN4(VAR5);
        }
        else
        {
        }
    }
    FUN2(VAR3);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}