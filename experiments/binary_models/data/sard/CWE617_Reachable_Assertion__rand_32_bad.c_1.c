#VAR1 ""
#VAR1 <assert.VAR2>
#define ASSERT_VALUE 5
void FUN1()
{
    int VAR3;
    int *VAR4 = &VAR3;
    int *VAR5 = &VAR3;
    VAR3 = -1;
    {
        int VAR3 = *VAR4;
        VAR3 = FUN2();
        *VAR4 = VAR3;
    }
    {
        int VAR3 = *VAR5;
        assert(VAR3 > VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}