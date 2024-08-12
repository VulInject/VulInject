#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(long * VAR4)
{
    VAR4[0] = 5L;
    FUN2(VAR4[0]);
    free(VAR4);
}
void FUN3()
{
    long * VAR4;
    void (*VAR5) (long *) = VAR6;
    VAR4 = NULL; 
    VAR4 = (long *)malloc(1*sizeof(long));
    FUN4(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}