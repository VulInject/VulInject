#VAR1 ""
void FUN1()
{
    void * VAR2;
    VAR2 = NULL;
    if(FUN2())
    {
        {
            char VAR3 = '';
            VAR2 = &VAR3;
        }
    }
    FUN3(*((int*)VAR2));
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}