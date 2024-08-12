#VAR1 ""
void FUN1()
{
    void * VAR2;
    VAR2 = NULL;
    if(VAR3==5)
    {
        {
            short VAR4 = 8;
            VAR2 = &VAR4;
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