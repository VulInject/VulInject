#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    VAR4 = NULL; 
    VAR4 = (char *)calloc(20, sizeof(char));
    goto VAR5;
VAR5:
    strcpy(VAR4, "");
    FUN2(VAR4);
    free(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}