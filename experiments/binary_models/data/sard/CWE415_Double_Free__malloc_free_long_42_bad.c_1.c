#VAR1 ""
#VAR1 <VAR2.VAR3>
long * FUN1(long * VAR4)
{
    VAR4 = (long *)malloc(100*sizeof(long));
    if (VAR4 == NULL) {FUN2(-1);}
    free(VAR4);
    return VAR4;
}
void FUN3()
{
    long * VAR4;
    VAR4 = NULL;
    VAR4 = FUN1(VAR4);
    free(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}