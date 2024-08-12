#VAR1 ""
#VAR1 <VAR2.VAR3>
char * FUN1(char * VAR4)
{
    {
        char VAR5[] = "";
        VAR4 = strdup(VAR5);
        FUN2(VAR4);
    }
    return VAR4;
}
void FUN3()
{
    char * VAR4;
    VAR4 = NULL;
    VAR4 = FUN1(VAR4);
    ; 
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}