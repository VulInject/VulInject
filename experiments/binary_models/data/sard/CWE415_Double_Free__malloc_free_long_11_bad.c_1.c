#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    long * VAR4;
    VAR4 = NULL;
    if(FUN2())
    {
        VAR4 = (long *)malloc(100*sizeof(long));
        if (VAR4 == NULL) {FUN3(-1);}
        free(VAR4);
    }
    if(FUN2())
    {
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}