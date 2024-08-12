#VAR1 ""
#VAR1 <VAR2.VAR3>
VAR4 * FUN1(VAR4 * VAR5)
{
    VAR5 = (VAR4 *)malloc(100*sizeof(VAR4));
    if (VAR5 == NULL) {FUN2(-1);}
    VAR5[0].VAR6 = 0;
    VAR5[0].VAR7 = 0;
    FUN3(&VAR5[0]);
    return VAR5;
}
void FUN4()
{
    VAR4 * VAR5;
    VAR5 = NULL;
    VAR5 = FUN1(VAR5);
    ; 
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN4();
    return 0;
}