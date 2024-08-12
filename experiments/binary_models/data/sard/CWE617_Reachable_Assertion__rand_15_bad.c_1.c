#VAR1 ""
#VAR1 <assert.VAR2>
#define ASSERT_VALUE 5
void FUN1()
{
    int VAR3;
    VAR3 = -1;
    switch(6)
    {
    case 6:
        VAR3 = FUN2();
        break;
    default:
        break;
    }
    assert(VAR3 > VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}