static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7, VAR8;
    switch (VAR2->VAR9)
    {
    case VAR10:
        VAR8 = 8;
        break;
    case VAR11:
        VAR8 = 10;
        break;
    default:
        FUN2(VAR2, VAR12, "");
        return -1;
    }
    VAR4->VAR13 = FUN3(VAR2, VAR8);
    if (!VAR4->VAR13)
    {
        FUN2(VAR2, VAR12, "");
        FUN4(VAR2, VAR12);
        return -1;
    }
    FUN2(VAR2, VAR14, "", VAR4->VAR13);
    VAR7 = FUN5(VAR4->VAR13);
    FUN6(VAR7 >= 0);
    VAR4->VAR15 = &VAR16[VAR7];
    VAR4->VAR17.VAR2 = VAR2;
    VAR4->VAR17.VAR18 = 1;
    VAR4->VAR17.VAR19 = 1;
    VAR2->VAR20 = VAR4->VAR15->VAR8;
    FUN7(&VAR4->VAR17);
    FUN8(&VAR4->VAR17);
    if (!VAR4->VAR17.VAR21)
        VAR4->VAR17.VAR21 = VAR22;
    if (VAR4->VAR15->VAR8 == 10)
    {
        VAR4->VAR17.VAR21 = VAR23;
        VAR4->VAR24 = VAR25;
        VAR4->VAR26 = 4;
    }
    else
    {
        VAR4->VAR24 = VAR27;
        VAR4->VAR26 = 3;
    }
    if (VAR28)
        FUN9(VAR4);
    VAR4->VAR17.VAR29 = (VAR2->VAR30 + 15) / 16;
    VAR4->VAR17.VAR31 = (VAR2->VAR32 + 15) / 16;
    if (VAR2->VAR33 & VAR34)
    {
        VAR4->VAR35 = 1;
        VAR4->VAR17.VAR29 /= 2;
    }
    VAR4->VAR17.VAR36 = VAR4->VAR17.VAR29 * VAR4->VAR17.VAR31;
    if (VAR2->VAR37 != VAR38)
        VAR4->VAR17.VAR37 = VAR2->VAR37;
    if (FUN10(VAR4, VAR4->VAR17.VAR37, 0) < 0)
        return -1;
    if (VAR4->VAR39)
        VAR4->VAR40 = 1600;
    if (FUN11(VAR4) < 0)
        return -1;
    if (FUN12(VAR4) < 0)
        return -1;
    FUN13(VAR4->VAR17.VAR2, VAR4->VAR41, VAR4->VAR17.VAR29 * sizeof(VAR42), VAR43);
    FUN13(VAR4->VAR17.VAR2, VAR4->VAR44, VAR4->VAR17.VAR29 * sizeof(VAR42), VAR43);
    FUN13(VAR4->VAR17.VAR2, VAR4->VAR45, VAR4->VAR17.VAR36 * sizeof(VAR46), VAR43);
    FUN13(VAR4->VAR17.VAR2, VAR4->VAR47, VAR4->VAR17.VAR36 * sizeof(VAR48), VAR43);
    VAR4->VAR49.VAR50 = 1;
    VAR4->VAR49.VAR51 = VAR52;
    VAR4->VAR17.VAR2->VAR53 = &VAR4->VAR49;
    if (VAR2->VAR54 > VAR55)
    {
        FUN2(VAR2, VAR12, "");
        return -1;
    }
    VAR4->VAR56[0] = VAR4;
    for (VAR6 = 1; VAR6 < VAR2->VAR54; VAR6++)
    {
        VAR4->VAR56[VAR6] = FUN14(sizeof(VAR3));
        memcpy(VAR4->VAR56[VAR6], VAR4, sizeof(VAR3));
    }
    return 0;
VAR43:
    return -1;
}