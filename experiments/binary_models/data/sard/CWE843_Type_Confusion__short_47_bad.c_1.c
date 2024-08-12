#VAR1 ""
void FUN1()
{
    void * VAR2;
    VAR2 = NULL;
    if(FUN2())
    {
        {
            short VAR3 = 8;
            VAR2 = &VAR3;
        }
    }
    else
    {
        {
            int VAR4 = 8;
            VAR2 = &VAR4;
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