static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    char *VAR7;
    int VAR8 = -1;
    char *VAR9 = VAR4->VAR10;
    if ((VAR6->VAR11 == -1 && VAR6->VAR12 == -1) || (VAR2->VAR13 & VAR14) || (VAR2->VAR13 & VAR15))
    {
        VAR7 = FUN2(VAR2, VAR9);
        VAR8 = FUN3(VAR7, VAR6->VAR11, VAR6->VAR12);
        FUN4(VAR7);
    }
    else if (VAR2->VAR13 & VAR16)
    {
        VAR7 = FUN2(VAR2, VAR9);
        VAR8 = FUN5(VAR7, VAR6);
        FUN4(VAR7);
    }
    else if (VAR2->VAR13 & VAR17)
    {
        return FUN6(VAR2, VAR9, VAR6);
    }
    return VAR8;
}