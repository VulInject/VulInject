#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    VAR4 * VAR5;
    VAR5 = NULL;
    goto VAR6;
VAR6:
    VAR5 = (VAR4 *)malloc(100*sizeof(VAR4));
    if (VAR5 == NULL) {FUN2(-1);}
    free(VAR5);
    goto VAR7;
VAR7:
    free(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}