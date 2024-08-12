#VAR1 ""
#VAR1 <assert.VAR2>
#define ASSERT_VALUE 5
#define FUN1 (3 * sizeof(VAR3) + 2)
static const int VAR4 = 5;
void FUN2()
{
    int VAR3;
    VAR3 = -1;
    if(VAR4==5)
    {
        {
            char VAR5[VAR6] = "";
            if (fgets(VAR5, VAR6, stdin) != NULL)
            {
                VAR3 = FUN3(VAR5);
            }
            else
            {
            }
        }
    }
    assert(VAR3 > VAR7);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}