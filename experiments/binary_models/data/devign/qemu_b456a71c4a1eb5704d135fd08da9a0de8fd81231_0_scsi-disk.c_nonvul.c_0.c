static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR4->VAR8);
    bool VAR9 = VAR4->VAR10.VAR11[4] & 1;
    bool VAR12 = VAR4->VAR10.VAR11[4] & 2;
    if ((VAR6->VAR13 & (1 << VAR14)) && VAR12)
    {
        if (!VAR9 && !VAR6->VAR15 && VAR6->VAR16)
        {
            FUN3(VAR2, FUN4(VAR6->VAR7.VAR17.VAR18) ? FUN5(VAR19) : FUN5(VAR20));
            return -1;
        }
        if (VAR6->VAR15 != !VAR9)
        {
            FUN6(VAR6->VAR7.VAR17.VAR18, !VAR9);
            VAR6->VAR15 = !VAR9;
        }
    }
    return 0;
}