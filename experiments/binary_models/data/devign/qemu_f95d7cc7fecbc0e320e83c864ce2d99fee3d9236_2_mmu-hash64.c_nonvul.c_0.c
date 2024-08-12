static int FUN1(struct VAR1 *VAR2, target_ulong VAR3, target_ulong VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8;
    bool VAR9;
    VAR8 = (VAR4 & VAR10) | ((VAR4 & VAR11) >> 61);
    VAR9 = (VAR4 & VAR12) || (VAR4 & VAR13);
    VAR6 = FUN2(VAR2->VAR14, VAR8, VAR9);
    VAR2->VAR15 = VAR4;
    VAR2->VAR16 = VAR6;
    VAR7 = FUN3(VAR2->VAR16, VAR5);
    if (VAR7 == 0)
    {
        FUN4("");
    }
    else
    {
        FUN4("");
    }
    return VAR7;
}