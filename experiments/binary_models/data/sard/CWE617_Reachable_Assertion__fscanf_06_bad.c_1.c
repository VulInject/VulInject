#VAR1 ""
#VAR1 <assert.VAR2>
#define ASSERT_VALUE 5
static const int VAR3 = 5;
void FUN1()
{
    int VAR4;
    VAR4 = -1;
    if(VAR3==5)
    {
        fscanf(stdin, "", &VAR4);
    }
    assert(VAR4 > VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN2(NULL) );
    FUN1();
    return 0;
}