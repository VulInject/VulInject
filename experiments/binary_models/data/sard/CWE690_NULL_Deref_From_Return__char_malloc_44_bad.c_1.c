#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(char * VAR4)
{
    strcpy(VAR4, "");
    FUN2(VAR4);
    free(VAR4);
}
void FUN3()
{
    char * VAR4;
    void (*VAR5) (char *) = VAR6;
    VAR4 = NULL; 
    VAR4 = (char *)malloc(20*sizeof(char));
    FUN4(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}