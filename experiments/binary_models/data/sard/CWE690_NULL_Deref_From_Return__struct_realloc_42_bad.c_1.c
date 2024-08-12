#VAR1 ""
#VAR1 <VAR2.VAR3>
VAR4 * FUN1(VAR4 * VAR5)
{
    VAR5 = (VAR4 *)realloc(VAR5, 1*sizeof(VAR4));
    return VAR5;
}
void FUN2()
{
    VAR4 * VAR5;
    VAR5 = NULL; 
    VAR5 = FUN1(VAR5);
    VAR5[0].VAR6 = 1;
    VAR5[0].VAR7 = 1;
    FUN3(&VAR5[0]);
    free(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}