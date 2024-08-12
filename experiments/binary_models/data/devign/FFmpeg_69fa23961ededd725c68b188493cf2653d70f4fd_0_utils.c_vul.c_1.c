int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    int VAR6;
    VAR7 *VAR8;
    FUN2(VAR2);
    if (VAR5 & VAR9)
        return FUN3(VAR2, VAR3, VAR4, VAR5);
    if (VAR3 < 0)
    {
        VAR3 = FUN4(VAR2);
        if (VAR3 < 0)
            return -1;
        VAR8 = VAR2->VAR10[VAR3];
        VAR4 = FUN5(VAR4, VAR8->VAR11.VAR12, VAR13 * (VAR14)VAR8->VAR11.VAR15);
    }
    if (VAR2->VAR16->VAR17)
        VAR6 = VAR2->VAR16->FUN6(VAR2, VAR3, VAR4, VAR5);
    else
        VAR6 = -1;
    if (VAR6 >= 0)
    {
        return 0;
    }
    if (VAR2->VAR16->VAR18)
        return FUN7(VAR2, VAR3, VAR4, VAR5);
    else
        return FUN8(VAR2, VAR3, VAR4, VAR5);
}