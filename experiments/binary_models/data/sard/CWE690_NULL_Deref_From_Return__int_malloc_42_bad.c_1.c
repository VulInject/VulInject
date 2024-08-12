#VAR1 ""
#VAR1 <VAR2.VAR3>
int * FUN1(int * VAR4)
{
    VAR4 = (int *)malloc(1*sizeof(int));
    return VAR4;
}
void FUN2()
{
    int * VAR4;
    VAR4 = NULL; 
    VAR4 = FUN1(VAR4);
    VAR4[0] = 5;
    FUN3(VAR4[0]);
    free(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}