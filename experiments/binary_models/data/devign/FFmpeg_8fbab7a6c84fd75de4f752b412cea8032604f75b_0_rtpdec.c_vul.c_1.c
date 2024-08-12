int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9;
    VAR5 *VAR10;
    VAR11 *VAR12;
    int64_t VAR13;
    uint16_t VAR14, VAR15;
    if (!VAR4 && !VAR6)
        return -1;
    VAR8 = VAR2->VAR16 && VAR2->VAR16->VAR8 && VAR2->VAR16->FUN2(VAR2->VAR17);
    VAR9 = FUN3(VAR2, &VAR14, &VAR15);
    if (!VAR8 && !VAR9)
        return 0;
    VAR13 = FUN4();
    if (VAR2->VAR18 && (VAR13 - VAR2->VAR18) < VAR19)
        return 0;
    VAR2->VAR18 = VAR13;
    if (!VAR4)
        VAR10 = VAR6;
    else if (FUN5(&VAR10) < 0)
        return -1;
    if (VAR8)
    {
        FUN6(VAR10, (VAR20 << 6) | 1);
        FUN6(VAR10, VAR21);
        FUN7(VAR10, 2);
        FUN8(VAR10, VAR2->VAR22 + 1);
        FUN8(VAR10, VAR2->VAR22);
    }
    if (VAR9)
    {
        FUN6(VAR10, (VAR20 << 6) | 1);
        FUN6(VAR10, VAR23);
        FUN7(VAR10, 3);
        FUN8(VAR10, VAR2->VAR22 + 1);
        FUN8(VAR10, VAR2->VAR22);
        FUN7(VAR10, VAR14);
        FUN7(VAR10, VAR15);
    }
    FUN9(VAR10);
    if (!VAR4)
        return 0;
    VAR7 = FUN10(VAR10, &VAR12);
    if (VAR7 > 0 && VAR12)
    {
        FUN11(VAR4, VAR12, VAR7);
        FUN12(VAR12);
    }
    return 0;
}