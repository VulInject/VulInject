#VAR1 ""
void FUN1(VAR2 * VAR3)
{
    if (VAR3 != NULL)
    {
        FUN2((int)VAR3);
    }
}
void FUN3()
{
    VAR2 * VAR3;
    VAR3 = NULL;
    VAR3 = FUN4("","",stdin);
    FUN1(VAR3);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}