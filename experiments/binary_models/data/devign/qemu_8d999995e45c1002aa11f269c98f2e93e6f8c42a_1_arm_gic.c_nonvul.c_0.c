void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5 = 1 << VAR3;
    if (FUN2(VAR2, VAR4, VAR5))
    {
        return;
    }
    FUN3("", VAR4, VAR3);
    FUN4(VAR4, VAR5);
    FUN5(VAR2);
}