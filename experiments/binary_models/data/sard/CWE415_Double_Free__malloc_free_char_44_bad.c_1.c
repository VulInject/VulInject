#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(char * VAR4)
{
    free(VAR4);
}
void FUN2()
{
    char * VAR4;
    void (*VAR5) (char *) = VAR6;
    VAR4 = NULL;
    VAR4 = (char *)malloc(100*sizeof(char));
    if (VAR4 == NULL) {FUN3(-1);}
    free(VAR4);
    FUN4(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}