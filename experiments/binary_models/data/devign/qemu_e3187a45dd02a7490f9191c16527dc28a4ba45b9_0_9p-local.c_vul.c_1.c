static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    char *VAR7;
    int VAR8 = -1;
    char *VAR9 = VAR4->VAR10;
    if (VAR2->VAR11 & VAR12)
    {
        VAR7 = FUN2(VAR2, VAR9);
        VAR8 = FUN3(VAR7, VAR6);
        FUN4(VAR7);
    }
    else if (VAR2->VAR11 & VAR13)
    {
        return FUN5(VAR2, VAR9, VAR6);
    }
    else if ((VAR2->VAR11 & VAR14) || (VAR2->VAR11 & VAR15))
    {
        VAR7 = FUN2(VAR2, VAR9);
        VAR8 = chmod(VAR7, VAR6->VAR16);
        FUN4(VAR7);
    }
    return VAR8;
}