#VAR1 ""
#VAR1 <assert.VAR2>
#define ASSERT_VALUE 5
#define FUN1 (3 * sizeof(VAR3) + 2)
void FUN2()
{
    int VAR3;
    VAR3 = -1;
    if(FUN3())
    {
        {
            char VAR4[VAR5] = "";
            if (fgets(VAR4, VAR5, stdin) != NULL)
            {
                VAR3 = FUN4(VAR4);
            }
            else
            {
            }
        }
    }
    else
    {
        VAR3 = VAR6+1;
    }
    assert(VAR3 > VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}