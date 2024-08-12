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
    VAR4 = NULL; 
    VAR4 = (long *)calloc(1, sizeof(long));
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}