#VAR1 ""
#VAR1 <assert.VAR2>
#define ASSERT_VALUE 5
#define FUN1 (3 * sizeof(VAR3) + 2)
int FUN2()
{
    return 1;
}
int FUN3()
{
    return 0;
}
void FUN4()
{
    int VAR3;
    VAR3 = -1;
    if(FUN2())
    {
        {
            char VAR4[VAR5] = "";
            if (fgets(VAR4, VAR5, stdin) != NULL)
            {
                VAR3 = FUN5(VAR4);
            }
            else
            {
            }
        }
    }
    assert(VAR3 > VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN4();
    return 0;
}