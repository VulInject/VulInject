#VAR1 ""
#VAR1 <assert.VAR2>
#define ASSERT_VALUE 5
#define FUN1 (3 * sizeof(VAR3) + 2)
int FUN2(int VAR3)
{
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
    return VAR3;
}
void FUN4()
{
    int VAR3;
    VAR3 = -1;
    VAR3 = FUN2(VAR3);
    assert(VAR3 > VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN4();
    return 0;
}