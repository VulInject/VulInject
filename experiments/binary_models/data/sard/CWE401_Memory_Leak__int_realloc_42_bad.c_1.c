#VAR1 ""
#VAR1 <VAR2.VAR3>
int * FUN1(int * VAR4)
{
    VAR4 = (int *)realloc(VAR4, 100*sizeof(int));
    if (VAR4 == NULL) {FUN2(-1);}
    VAR4[0] = 5;
    FUN3(VAR4[0]);
    return VAR4;
}
void FUN4()
{
    int * VAR4;
    VAR4 = NULL;
    VAR4 = FUN1(VAR4);
    ; 
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN4();
    return 0;
}