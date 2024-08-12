#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    VAR3 = NULL;
    VAR3 = FUN2("","",stdin);
    {
        VAR2 * VAR4 = VAR3;
        VAR2 * VAR3 = VAR4;
        if (VAR3 != NULL)
        {
            FUN3((int)VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}