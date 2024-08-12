#VAR1 ""
static VAR2 * FUN1(VAR2 * VAR3)
{
    VAR3 = FUN2("","",stdin);
    return VAR3;
}
void FUN3()
{
    VAR2 * VAR3;
    VAR3 = NULL;
    VAR3 = FUN1(VAR3);
    if (VAR3 != NULL)
    {
        FUN4((int)VAR3);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}