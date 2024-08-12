static int FUN1(struct VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR4, VAR2);
    uint8_t VAR5;
    int VAR6;
    VAR7 *VAR8 = NULL;
    if (!FUN3())
    {
        FUN4("");
        return -1;
    }
    if (!VAR4->VAR9.VAR10 && !VAR4->VAR9.VAR11 && !VAR4->VAR9.VAR12 && !VAR4->VAR9.VAR13)
    {
        FUN4("");
        return -1;
    }
    FUN5(VAR4, 0, VAR14);
    FUN6(VAR4, VAR15, 2);
    FUN6(VAR4, VAR16, 1);
    FUN6(VAR4, VAR17, 3);
    FUN6(VAR4, VAR18, 1);
    FUN6(VAR4, VAR19, 1);
    FUN6(VAR4, VAR20, 1);
    FUN6(VAR4, VAR21, 4);
    FUN6(VAR4, VAR22, 2);
    FUN6(VAR4, VAR23, 2);
    FUN6(VAR4, VAR24 + 1, 7);
    FUN6(VAR4, VAR25, 1);
    FUN6(VAR4, VAR26, 1);
    memcpy(VAR4->VAR27, VAR4->VAR28, sizeof(VAR4->VAR28));
    FUN7(VAR4, &VAR8);
    if (VAR8)
    {
        FUN8(VAR8);
        FUN9(VAR8);
        goto VAR29;
    }
    if (FUN10(VAR2, &VAR8) < 0)
    {
        FUN8(VAR8);
        FUN9(VAR8);
        goto VAR29;
    }
    if (VAR4->VAR30.VAR31 & VAR32)
    {
        FUN11(VAR4, &VAR8);
        if (VAR8)
        {
            FUN8(VAR8);
            FUN9(VAR8);
            goto VAR29;
        }
    }
    FUN12(VAR4->VAR33.VAR34, VAR4->VAR33.VAR35, VAR4, &VAR8);
    if (VAR8)
    {
        FUN8(VAR8);
        FUN9(VAR8);
        goto VAR29;
    }
    VAR5 = VAR4->VAR4.VAR36[VAR37] - 1;
    VAR4->VAR38 = VAR5;
    VAR4->VAR39.VAR40 = VAR41;
    VAR4->VAR39.VAR42 = -1;
    FUN13(VAR4, &VAR8);
    if (VAR8)
    {
        FUN8(VAR8);
        FUN9(VAR8);
        goto VAR29;
    }
    VAR6 = FUN14(VAR4);
    if (VAR6 < 0)
    {
        goto VAR43;
    }
    FUN15(VAR4);
    FUN16(VAR4->VAR44, &VAR2->VAR45, NULL);
    return 0;
VAR43:
    FUN17(VAR4);
VAR29:
    FUN18(VAR4);
    return -1;
}