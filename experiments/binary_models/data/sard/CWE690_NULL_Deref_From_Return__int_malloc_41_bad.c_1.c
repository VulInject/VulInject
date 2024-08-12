#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(int * VAR4)
{
    VAR4[0] = 5;
    FUN2(VAR4[0]);
    free(VAR4);
}
void FUN3()
{
    int * VAR4;
    VAR4 = NULL; 
    VAR4 = (int *)malloc(1*sizeof(int));
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}