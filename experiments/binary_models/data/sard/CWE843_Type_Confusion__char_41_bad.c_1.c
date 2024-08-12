#VAR1 ""
void FUN1(void * VAR2)
{
    FUN2(*((int*)VAR2));
}
void FUN3()
{
    void * VAR2;
    VAR2 = NULL;
    {
        char VAR3 = '';
        VAR2 = &VAR3;
    }
    FUN1(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}