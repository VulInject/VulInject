static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11;
    unsigned char *VAR12;
    unsigned char VAR13[VAR14];
    unsigned int VAR15;
    unsigned int VAR16;
    VAR11 = FUN2(VAR2, 0);
    if (!VAR11)
        return FUN3(VAR17);
    FUN4(VAR11, 33, 1, VAR18);
    VAR6->VAR19 = VAR11->VAR20;
    VAR11->VAR21->VAR22 = VAR23;
    VAR11->VAR21->VAR24 = VAR25;
    VAR11->VAR21->VAR26 = 0;
    FUN5(VAR9, 20, VAR27);
    VAR11->VAR21->VAR28 = VAR29;
    VAR11->VAR21->VAR30 = FUN6(VAR29 + VAR31);
    VAR12 = (unsigned char *)VAR11->VAR21->VAR30;
    if (FUN7(VAR9, VAR11->VAR21->VAR30, VAR29) != VAR29)
    {
        FUN8(VAR11->VAR21->VAR30);
        return FUN3(VAR32);
    }
    VAR11->VAR21->VAR33 = FUN9(&VAR12[6]);
    VAR11->VAR21->VAR34 = FUN9(&VAR12[8]);
    if (FUN9(&VAR12[24]) || (FUN9(&VAR12[0]) == 1 && FUN9(&VAR12[2]) == 1))
    {
        VAR11 = FUN2(VAR2, 0);
        if (!VAR11)
            return FUN3(VAR17);
        FUN4(VAR11, 33, 1, VAR18);
        VAR11->VAR21->VAR22 = VAR35;
        if (FUN9(&VAR12[0]) == 1)
            VAR11->VAR21->VAR24 = VAR36;
        else
            VAR11->VAR21->VAR24 = VAR37;
        VAR11->VAR21->VAR26 = 0;
        VAR11->VAR21->VAR38 = FUN9(&VAR12[24]);
        if (!VAR11->VAR21->VAR38)
            VAR11->VAR21->VAR38 = 22050;
        VAR11->VAR21->VAR39 = VAR12[26];
        if (!VAR11->VAR21->VAR39)
            VAR11->VAR21->VAR39 = 1;
        VAR11->VAR21->VAR40 = 16;
        VAR11->VAR21->VAR41 = VAR11->VAR21->VAR39 * VAR11->VAR21->VAR38 * VAR11->VAR21->VAR40 / 4;
        VAR11->VAR21->VAR42 = VAR11->VAR21->VAR39 * VAR11->VAR21->VAR40;
        VAR6->VAR43 = VAR11->VAR20;
        VAR6->VAR44 = VAR11->VAR21->VAR38;
        VAR6->VAR45 = VAR11->VAR21->VAR39;
        VAR6->VAR46 = 0;
    }
    do
    {
        if (FUN7(VAR9, VAR13, VAR14) != VAR14)
        {
            FUN8(VAR11->VAR21->VAR30);
            return FUN3(VAR32);
        }
        VAR15 = FUN10(&VAR13[0]);
        VAR16 = FUN10(&VAR13[4]);
        switch (VAR15)
        {
        case VAR47:
        case VAR48:
        case VAR49:
        case VAR50:
        case VAR51:
        case VAR52:
        case VAR53:
        case VAR54:
            break;
        default:
            FUN11(VAR2, VAR55, "", VAR13[0], VAR13[1], VAR13[2], VAR13[3]);
            break;
        }
        FUN12(VAR9, VAR16);
    } while (VAR15 != VAR53);
    return 0;
}