#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(int * VAR4)
{
    ; 
}
void FUN2()
{
    int * VAR4;
    void (*VAR5) (int *) = VAR6;
    VAR4 = NULL;
    VAR4 = (int *)malloc(100*sizeof(int));
    if (VAR4 == NULL) {FUN3(-1);}
    VAR4[0] = 5;
    FUN4(VAR4[0]);
    FUN5(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}