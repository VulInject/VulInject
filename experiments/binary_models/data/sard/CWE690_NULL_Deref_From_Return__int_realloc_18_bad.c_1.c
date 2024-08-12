#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    int * VAR4;
    VAR4 = NULL; 
    VAR4 = (int *)realloc(VAR4, 1*sizeof(int));
    goto VAR5;
VAR5:
    VAR4[0] = 5;
    FUN2(VAR4[0]);
    free(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}