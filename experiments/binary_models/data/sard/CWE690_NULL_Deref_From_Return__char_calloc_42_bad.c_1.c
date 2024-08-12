#VAR1 ""
#VAR1 <VAR2.VAR3>
char * FUN1(char * VAR4)
{
    VAR4 = (char *)calloc(20, sizeof(char));
    return VAR4;
}
void FUN2()
{
    char * VAR4;
    VAR4 = NULL; 
    VAR4 = FUN1(VAR4);
    strcpy(VAR4, "");
    FUN3(VAR4);
    free(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}