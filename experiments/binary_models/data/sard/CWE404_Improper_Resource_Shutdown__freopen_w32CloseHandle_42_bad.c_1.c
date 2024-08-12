#VAR1 ""
#VAR1 <VAR2.VAR3>
static VAR4 * FUN1(VAR4 * VAR5)
{
    VAR5 = FUN2("","",stdin);
    return VAR5;
}
void FUN3()
{
    VAR4 * VAR5;
    VAR5 = NULL;
    VAR5 = FUN1(VAR5);
    if (VAR5 != NULL)
    {
        FUN4((VAR6)VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}