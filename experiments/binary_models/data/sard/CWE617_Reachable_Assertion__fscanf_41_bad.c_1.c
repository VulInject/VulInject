#VAR1 ""
#VAR1 <assert.VAR2>
#define ASSERT_VALUE 5
void FUN1(int VAR3)
{
    assert(VAR3 > VAR4);
}
void FUN2()
{
    int VAR3;
    VAR3 = -1;
    fscanf(stdin, "", &VAR3);
    FUN1(VAR3);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN2();
    return 0;
}