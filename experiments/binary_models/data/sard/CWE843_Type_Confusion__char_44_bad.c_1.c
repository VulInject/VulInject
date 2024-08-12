#VAR1 ""
void FUN1(void * VAR2)
{
    FUN2(*((int*)VAR2));
}
void FUN3()
{
    void * VAR2;
    void (*VAR3) (void *) = VAR4;
    VAR2 = NULL;
    {
        char VAR5 = '';
        VAR2 = &VAR5;
    }
    FUN4(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}