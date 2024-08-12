#VAR1 ""
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
    VAR2 * VAR3;
    VAR3 = NULL; 
    if(FUN1())
    {
        VAR3 = fopen("", "");
        fclose(VAR3);
    }
    if(FUN1())
    {
        fclose(VAR3);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}