#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(VAR4 * VAR5)
{
    VAR5[0].VAR6 = 1;
    VAR5[0].VAR7 = 1;
    FUN2(&VAR5[0]);
    free(VAR5);
}
void FUN3()
{
    VAR4 * VAR5;
    void (*VAR8) (VAR4 *) = VAR9;
    VAR5 = NULL; 
    VAR5 = (VAR4 *)realloc(VAR5, 1*sizeof(VAR4));
    FUN4(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}