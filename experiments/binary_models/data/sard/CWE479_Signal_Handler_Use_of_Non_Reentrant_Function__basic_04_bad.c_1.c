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
static const int VAR6 = 1; 
static const int VAR7 = 0; 
void FUN4()
{
    if(VAR6)
    {
        signal(VAR8, VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN4();
    return 0;
}