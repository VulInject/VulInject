#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    VAR2 * *VAR4 = &VAR3;
    VAR2 * *VAR5 = &VAR3;
    VAR3 = NULL;
    {
        VAR2 * VAR3 = *VAR4;
        VAR3 = fopen("", "");
        *VAR4 = VAR3;
    }
    {
        VAR2 * VAR3 = *VAR5;
        if (VAR3 != NULL)
        {
            FUN2((int)VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}