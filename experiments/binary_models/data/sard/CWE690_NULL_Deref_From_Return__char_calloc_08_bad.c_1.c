#VAR1 ""
#VAR1 <VAR2.VAR3>
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    char * VAR4;
    VAR4 = NULL; 
    VAR4 = (char *)calloc(20, sizeof(char));
    if(FUN1())
    {
        strcpy(VAR4, "");
        FUN4(VAR4);
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}