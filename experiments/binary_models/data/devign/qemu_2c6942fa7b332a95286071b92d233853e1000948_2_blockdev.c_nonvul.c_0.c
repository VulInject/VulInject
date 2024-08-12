static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    if (!FUN2(VAR4))
    {
        FUN3(VAR6, FUN4(VAR4));
        return -1;
    }
    if (!VAR5 && FUN5(VAR4))
    {
        FUN3(VAR7, FUN4(VAR4));
        return -1;
    }
    FUN6(VAR4);
    return 0;
}