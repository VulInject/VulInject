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
    VAR3 = fopen("", "");
    if(FUN1())
    {
        VAR3 = fopen("", "");
        if (VAR3 != NULL)
        {
            fclose(VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}