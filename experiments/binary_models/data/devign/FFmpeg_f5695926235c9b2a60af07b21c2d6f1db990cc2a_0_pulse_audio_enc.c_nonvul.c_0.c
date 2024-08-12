static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8 = VAR4->VAR8;
    VAR9 *VAR10 = VAR4->VAR11;
    int VAR12;
    if (VAR6->VAR13 != VAR4->VAR13)
        return 0;
    if (FUN2(VAR6->VAR14, VAR10, VAR8, &VAR12) < 0)
    {
        FUN3(VAR6, VAR15, "", FUN4(VAR12));
        return FUN5(VAR16);
    }
    return 0;
}