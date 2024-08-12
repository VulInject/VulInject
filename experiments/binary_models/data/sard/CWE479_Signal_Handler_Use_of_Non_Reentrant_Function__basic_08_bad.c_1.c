#VAR1 ""
#VAR1 <signal.VAR2>
void FUN1(int VAR3)
{
    void *VAR4 = malloc(10);
    if (VAR4 == NULL) {FUN2(-1);}
    free(VAR4);
}
static volatile sig_atomic_t VAR5 = 0;
void FUN3(int VAR3)
{
    VAR5 = VAR3;
}
int FUN4()
{
    return 1;
}
int FUN5()
{
    return 0;
}
void FUN6()
{
    if(FUN4())
    {
        signal(VAR6, VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN6();
    return 0;
}