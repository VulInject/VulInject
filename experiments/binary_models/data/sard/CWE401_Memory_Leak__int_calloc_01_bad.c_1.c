#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    int * VAR4;
    VAR4 = NULL;
    VAR4 = (int *)calloc(100, sizeof(int));
    if (VAR4 == NULL) {FUN2(-1);}
    VAR4[0] = 5;
    FUN3(VAR4[0]);
    ; 
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}