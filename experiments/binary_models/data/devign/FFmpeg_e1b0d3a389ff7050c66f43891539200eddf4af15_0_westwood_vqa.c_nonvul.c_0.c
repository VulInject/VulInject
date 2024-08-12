static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    VAR8 *VAR9;
    unsigned char *VAR10;
    unsigned char VAR11[VAR12];
    unsigned int VAR13;
    unsigned int VAR14;
    int VAR15;
    VAR9 = FUN2(VAR2, NULL);
    if (!VAR9)
        return FUN3(VAR16);
    VAR9->VAR17 = 0;
    VAR4->VAR18 = VAR9->VAR19;
    VAR9->VAR20->VAR21 = VAR22;
    VAR9->VAR20->VAR23 = VAR24;
    VAR9->VAR20->VAR25 = 0;
    FUN4(VAR7, 20, VAR26);
    VAR9->VAR20->VAR27 = FUN5(VAR28 + VAR29);
    if (!VAR9->VAR20->VAR27)
        return FUN3(VAR16);
    VAR9->VAR20->VAR30 = VAR28;
    VAR10 = (unsigned char *)VAR9->VAR20->VAR27;
    if (FUN6(VAR7, VAR9->VAR20->VAR27, VAR28) != VAR28)
    {
        FUN7(VAR9->VAR20->VAR27);
        return FUN3(VAR31);
    }
    VAR9->VAR20->VAR32 = FUN8(&VAR10[6]);
    VAR9->VAR20->VAR33 = FUN8(&VAR10[8]);
    VAR15 = VAR10[12];
    VAR9->VAR34 = VAR9->VAR35 = FUN8(&VAR10[4]);
    if (VAR15 < 1 || VAR15 > 30)
    {
        FUN9(VAR2, VAR36, "", VAR15);
        return VAR37;
    }
    FUN10(VAR9, 64, 1, VAR15);
    VAR4->VAR38 = FUN8(&VAR10[0]);
    VAR4->VAR39 = FUN8(&VAR10[24]);
    VAR4->VAR40 = VAR10[26];
    VAR4->VAR41 = VAR10[27];
    VAR4->VAR42 = -1;
    VAR2->VAR43 |= VAR44;
    do
    {
        if (FUN6(VAR7, VAR11, VAR12) != VAR12)
            return FUN3(VAR31);
        VAR13 = FUN11(&VAR11[0]);
        VAR14 = FUN11(&VAR11[4]);
        switch (VAR13)
        {
        case VAR45:
        case VAR46:
        case VAR47:
        case VAR48:
        case VAR49:
        case VAR50:
        case VAR51:
        case VAR52:
            break;
        default:
            FUN9(VAR2, VAR36, "", VAR11[0], VAR11[1], VAR11[2], VAR11[3]);
            break;
        }
        FUN12(VAR7, VAR14);
    } while (VAR13 != VAR51);
    return 0;
}