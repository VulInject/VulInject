int FUN1(VAR1 **VAR2, VAR3 *VAR4, const char *VAR5)
{
    VAR1 *VAR6;
    *VAR2 = NULL;
    if (!VAR4)
        return FUN2(VAR7);
    VAR6 = FUN3(sizeof(VAR1));
    if (!VAR6)
        return FUN2(VAR8);
    VAR6->VAR9 = &VAR10;
    VAR6->VAR4 = VAR4;
    VAR6->VAR11 = VAR5 ? FUN4(VAR5) : NULL;
    if (VAR4->VAR12)
    {
        VAR6->VAR13 = FUN3(VAR4->VAR12);
        if (!VAR6->VAR13)
            goto VAR14;
    }
    VAR6->VAR15 = FUN5(VAR4->VAR16);
    if (VAR6->VAR15)
    {
        VAR6->VAR17 = FUN6(sizeof(VAR18) * VAR6->VAR15);
        if (!VAR6->VAR17)
            goto VAR14;
        memcpy(VAR6->VAR17, VAR4->VAR16, sizeof(VAR18) * VAR6->VAR15);
        VAR6->VAR16 = FUN3(sizeof(VAR19 *) * VAR6->VAR15);
        if (!VAR6->VAR16)
            goto VAR14;
    }
    VAR6->VAR20 = FUN5(VAR4->VAR21);
    if (VAR6->VAR20)
    {
        VAR6->VAR22 = FUN6(sizeof(VAR18) * VAR6->VAR20);
        if (!VAR6->VAR22)
            goto VAR14;
        memcpy(VAR6->VAR22, VAR4->VAR21, sizeof(VAR18) * VAR6->VAR20);
        VAR6->VAR21 = FUN3(sizeof(VAR19 *) * VAR6->VAR20);
        if (!VAR6->VAR21)
            goto VAR14;
    }
    *VAR2 = VAR6;
    return 0;
VAR14:
    FUN7(&VAR6->VAR16);
    FUN7(&VAR6->VAR17);
    VAR6->VAR15 = 0;
    FUN7(&VAR6->VAR21);
    FUN7(&VAR6->VAR22);
    VAR6->VAR20 = 0;
    FUN7(&VAR6->VAR13);
    FUN8(VAR6);
    return FUN2(VAR8);
}