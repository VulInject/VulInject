#VAR1 ""
#VAR1 <assert.VAR2>
#define ASSERT_VALUE 5
int VAR3 = 5;
void FUN1()
{
    int VAR4;
    VAR4 = -1;
    if(VAR3==5)
    {
        VAR4 = FUN2();
    }
    assert(VAR4 > VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}