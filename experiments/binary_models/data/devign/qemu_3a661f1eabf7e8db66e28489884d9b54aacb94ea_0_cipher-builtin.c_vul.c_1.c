static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, size_t VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9;
    if (VAR2->VAR10 != VAR11 && VAR2->VAR10 != VAR12)
    {
        FUN2(VAR7, "", VAR2->VAR10);
        return -1;
    }
    VAR9 = FUN3(VAR8, 1);
    if (FUN4(VAR4, VAR5 * 8, &VAR9->VAR13.VAR14.VAR15) != 0)
    {
        FUN2(VAR7, "");
        goto VAR16;
    }
    if (FUN5(VAR4, VAR5 * 8, &VAR9->VAR13.VAR14.VAR17) != 0)
    {
        FUN2(VAR7, "");
        goto VAR16;
    }
    VAR9->free = VAR18;
    VAR9->VAR19 = VAR20;
    VAR9->VAR21 = VAR22;
    VAR9->VAR23 = VAR24;
    VAR2->VAR25 = VAR9;
    return 0;
VAR16:
    FUN6(VAR9);
    return -1;