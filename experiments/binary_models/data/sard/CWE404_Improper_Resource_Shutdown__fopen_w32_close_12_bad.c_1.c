#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    VAR3 = NULL;
    VAR3 = fopen("", "");
    if(FUN2())
    {
        if (VAR3 != NULL)
        {
            FUN3((int)VAR3);
        }
    }
    else
    {
        if (VAR3 != NULL)
        {
            fclose(VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}