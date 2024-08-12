#VAR1 ""
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    void * VAR2;
    VAR2 = NULL;
    if(FUN1())
    {
        {
            char VAR3 = '';
            VAR2 = &VAR3;
        }
    }
    FUN4(*((int*)VAR2));
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}