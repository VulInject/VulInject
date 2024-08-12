#VAR1 ""
static const int VAR2 = 5;
void FUN1()
{
    void * VAR3;
    VAR3 = NULL;
    if(VAR2==5)
    {
        {
            char VAR4 = '';
            VAR3 = &VAR4;
        }
    }
    FUN2(*((int*)VAR3));
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}