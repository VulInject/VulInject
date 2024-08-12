static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3(*VAR4), VAR2);
    int VAR5, VAR6;
    int VAR7 = 0;
    static const MemReg VAR8[] = {{"", &VAR9, VAR10, VAR11}, {"", &VAR12, VAR13, VAR14}, {"", &VAR15, VAR16, VAR17}, {"", &VAR18, VAR19, VAR20}, {NULL}};
    static const MemReg VAR21[] = {{"", &VAR22, VAR10, VAR11}, {"", &VAR23, VAR13, VAR14}, {"", &VAR24, VAR16, VAR17}, {"", &VAR25, VAR19, VAR20}, {NULL}};
    static const MemReg VAR26[] = {{"", &VAR27, VAR28, VAR29}, {"", &VAR30, VAR31, VAR32}, {NULL}};
    FUN4(&VAR4->VAR33, "", 0x40000);
    switch (VAR4->VAR34)
    {
    case VAR35:
    default:
        VAR4->VAR36 = &VAR37;
        VAR4->VAR38 = 0x00400200;
        VAR4->VAR39 |= VAR40;
        VAR4->VAR41 = 80;
        VAR4->VAR42 = VAR43;
        FUN5(VAR4);
        FUN6(VAR4, VAR21, &VAR7);
        FUN6(VAR4, VAR26, &VAR7);
        break;
    case VAR44:
        VAR4->VAR36 = &VAR45;
        VAR4->VAR38 = 0x00400402;
        VAR4->VAR39 |= VAR46;
        VAR4->VAR41 = 196;
        VAR4->VAR42 = VAR47;
        FUN5(VAR4);
        FUN6(VAR4, VAR21, &VAR7);
        FUN6(VAR4, VAR26, &VAR7);
        break;
    case VAR48:
        VAR4->VAR41 = VAR49;
        VAR4->VAR50 = VAR51;
        VAR4->VAR52 = VAR53;
        VAR4->VAR54 = 0xFF;
        VAR4->VAR55 = 4160000;
        VAR4->VAR56 = VAR57 | VAR58;
        VAR4->VAR59 = 0;
        VAR4->VAR60 = VAR61;
        VAR4->VAR62 = VAR63;
        VAR4->VAR64 = VAR65;
        VAR4->VAR38 = -1;
        VAR4->VAR42 = VAR43;
        if (VAR4->VAR66 != 1)
        {
            return -VAR67;
        }
        FUN6(VAR4, VAR8, &VAR7);
        break;
    }
    for (VAR5 = 0; VAR5 < VAR4->VAR66; VAR5++)
    {
        VAR4->VAR68[VAR5].VAR69 = FUN7(VAR70, VAR71);
        for (VAR6 = 0; VAR6 < VAR71; VAR6++)
        {
            FUN8(VAR2, &VAR4->VAR68[VAR5].VAR69[VAR6]);
        }
    }
    FUN9(&VAR4->VAR72.VAR73, "", 0, 2, VAR74, VAR75, VAR4);
    FUN10(VAR2, &VAR4->VAR33);
    FUN11(&VAR2->VAR73, VAR76, VAR4->VAR60);
    return 0;
}