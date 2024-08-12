#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(VAR4 * VAR5)
{
    ; 
}
void FUN2()
{
    VAR4 * VAR5;
    void (*VAR6) (VAR4 *) = VAR7;
    VAR5 = NULL;
    VAR5 = (VAR4 *)malloc(100*sizeof(VAR4));
    if (VAR5 == NULL) {FUN3(-1);}
    VAR5[0].VAR8 = 0;
    VAR5[0].VAR9 = 0;
    FUN4(&VAR5[0]);
    FUN5(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}