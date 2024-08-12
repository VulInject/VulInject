#VAR1 ""
#VAR1 <VAR2.VAR3>
long * FUN1(long * VAR4)
{
    VAR4 = (long *)realloc(VAR4, 1*sizeof(long));
    return VAR4;
}
void FUN2()
{
    long * VAR4;
    VAR4 = NULL; 
    VAR4 = FUN1(VAR4);
    VAR4[0] = 5L;
    FUN3(VAR4[0]);
    free(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}