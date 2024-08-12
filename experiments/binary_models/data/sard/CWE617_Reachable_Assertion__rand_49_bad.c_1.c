#VAR1 ""
#VAR1 <assert.VAR2>
#define ASSERT_VALUE 5
void FUN1()
{
    int VAR3;
    VAR3 = -1;
    if(VAR4==5)
    {
        VAR3 = FUN2();
    }
    assert(VAR3 > VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}