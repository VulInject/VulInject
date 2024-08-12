#VAR1 ""
#VAR1 <assert.VAR2>
#define ASSERT_VALUE 5
static const int VAR3 = 1; 
static const int VAR4 = 0; 
void FUN1()
{
    int VAR5;
    VAR5 = -1;
    if(VAR3)
    {
        VAR5 = FUN2();
    }
    assert(VAR5 > VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}