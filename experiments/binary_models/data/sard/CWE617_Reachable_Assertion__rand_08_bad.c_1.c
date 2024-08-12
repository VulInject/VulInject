#VAR1 ""
#VAR1 <assert.VAR2>
#define ASSERT_VALUE 5
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    int VAR3;
    VAR3 = -1;
    if(FUN1())
    {
        VAR3 = FUN4();
    }
    assert(VAR3 > VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}