#VAR1 ""
void FUN1()
{
    if(FUN2())
    {
        {
            VAR2 * VAR3 = NULL;
            VAR3 = fopen("", "");
            if (VAR3 == NULL)
            {
            }
            fclose(VAR3);
        }
    }
    else
    {
        {
            VAR2 * VAR3 = NULL;
            VAR3 = fopen("", "");
            if (VAR3 == NULL)
            {
                FUN3(1);
            }
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