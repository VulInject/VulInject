#VAR1 ""
void FUN1()
{
    void * VAR2;
    VAR2 = NULL;
    if(1)
    {
        {
            short VAR3 = 8;
            VAR2 = &VAR3;
        }
    }
    FUN2(*((int*)VAR2));
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}