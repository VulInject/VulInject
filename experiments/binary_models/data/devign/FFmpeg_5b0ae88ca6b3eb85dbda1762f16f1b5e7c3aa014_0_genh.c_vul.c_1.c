static int FUN1(VAR1 *VAR2)
{
    unsigned VAR3, VAR4, VAR5, VAR6, VAR7[2];
    VAR8 *VAR9 = VAR2->VAR10;
    av_unused unsigned VAR11[2];
    int VAR12, VAR13, VAR14;
    VAR15 *VAR16;
    FUN2(VAR2->VAR17, 4);
    VAR16 = FUN3(VAR2, NULL);
    if (!VAR16)
        return FUN4(VAR18);
    VAR16->VAR19->VAR20 = VAR21;
    VAR16->VAR19->VAR22 = FUN5(VAR2->VAR17);
    if (VAR16->VAR19->VAR22 <= 0)
        return VAR23;
    if (VAR16->VAR19->VAR22 == 1)
        VAR16->VAR19->VAR24 = VAR25;
    else if (VAR16->VAR19->VAR22 == 2)
        VAR16->VAR19->VAR24 = VAR26;
    VAR12 = VAR9->VAR27 = FUN5(VAR2->VAR17);
    if (VAR12 < 0 || VAR12 > VAR28 / VAR16->VAR19->VAR22)
        return VAR23;
    VAR16->VAR19->VAR29 = VAR12 * VAR16->VAR19->VAR22;
    VAR16->VAR19->VAR30 = FUN5(VAR2->VAR17);
    FUN2(VAR2->VAR17, 4);
    VAR16->VAR31 = FUN5(VAR2->VAR17);
    VAR5 = FUN5(VAR2->VAR17);
    switch (VAR5)
    {
    case 0:
        VAR16->VAR19->VAR32 = VAR33;
        break;
    case 1:
    case 11:
        VAR16->VAR19->VAR34 = 4;
        VAR16->VAR19->VAR29 = 36 * VAR16->VAR19->VAR22;
        VAR16->VAR19->VAR32 = VAR35;
        break;
    case 2:
        VAR16->VAR19->VAR32 = VAR36;
        break;
    case 3:
        VAR16->VAR19->VAR32 = VAR16->VAR19->VAR29 > 0 ? VAR37 : VAR38;
        break;
    case 4:
        VAR16->VAR19->VAR32 = VAR16->VAR19->VAR29 > 0 ? VAR39 : VAR40;
        break;
    case 5:
        VAR16->VAR19->VAR32 = VAR16->VAR19->VAR29 > 0 ? VAR41 : VAR42;
        break;
    case 6:
        VAR16->VAR19->VAR32 = VAR43;
        break;
    case 7:
        VAR14 = FUN6(VAR16->VAR19, 2);
        if (VAR14 < 0)
            return VAR14;
        FUN7(VAR16->VAR19->VAR44, 3);
        VAR16->VAR19->VAR32 = VAR45;
        break;
    case 10:
        VAR16->VAR19->VAR32 = VAR46;
        break;
    case 12:
        VAR16->VAR19->VAR32 = VAR47;
        break;
    case 13:
        VAR16->VAR19->VAR32 = VAR48;
        break;
    case 17:
        VAR16->VAR19->VAR32 = VAR49;
        break;
    default:
        FUN8(VAR2, "", VAR5);
        return VAR50;
    }
    VAR3 = FUN5(VAR2->VAR17);
    VAR4 = FUN5(VAR2->VAR17);
    if (VAR4 > VAR3)
        return VAR23;
    if (VAR4 == 0)
        VAR3 = 0x800;
    VAR7[0] = FUN5(VAR2->VAR17);
    VAR7[1] = FUN5(VAR2->VAR17);
    VAR9->VAR51 = FUN5(VAR2->VAR17);
    VAR6 = FUN5(VAR2->VAR17);
    VAR11[0] = FUN5(VAR2->VAR17);
    VAR11[1] = FUN5(VAR2->VAR17);
    if (VAR16->VAR19->VAR32 == VAR47)
    {
        if (VAR16->VAR19->VAR22 > 2)
        {
            FUN8(VAR2, "", VAR16->VAR19->VAR22);
            return VAR50;
        }
        FUN6(VAR16->VAR19, 32 * VAR16->VAR19->VAR22);
        for (VAR13 = 0; VAR13 < VAR16->VAR19->VAR22; VAR13++)
        {
            if (VAR6 & 1)
            {
                FUN8(VAR2, "");
                return VAR50;
            }
            else
            {
                FUN9(VAR2->VAR17, VAR7[VAR13], VAR52);
                FUN10(VAR2->VAR17, VAR16->VAR19->VAR44 + 32 * VAR13, 32);
            }
        }
        if (VAR9->VAR51 == 1)
        {
            VAR16->VAR19->VAR29 = 8 * VAR16->VAR19->VAR22;
            if (VAR9->VAR27 != 1 && VAR9->VAR27 != 2 && VAR9->VAR27 != 4)
                return VAR23;
        }
    }
    FUN2(VAR2->VAR17, VAR3 - FUN11(VAR2->VAR17));
    FUN12(VAR16, 64, 1, VAR16->VAR19->VAR30);
    return 0;
}