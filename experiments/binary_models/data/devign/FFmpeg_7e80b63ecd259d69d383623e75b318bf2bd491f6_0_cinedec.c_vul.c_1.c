static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6;
    unsigned int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    int VAR15;
    char *VAR16;
    uint64_t VAR17;
    VAR6 = FUN2(VAR2, NULL);
    if (!VAR6)
        return FUN3(VAR18);
    VAR6->VAR19->VAR20 = VAR21;
    VAR6->VAR19->VAR22 = VAR23;
    VAR6->VAR19->VAR24 = 0;
    FUN4(VAR4, 4);
    VAR8 = FUN5(VAR4);
    VAR7 = FUN5(VAR4);
    if (VAR7 != 1)
    {
        FUN6(VAR2, "", VAR7);
        return VAR25;
    }
    FUN4(VAR4, 12);
    VAR6->VAR26 = FUN7(VAR4);
    VAR9 = FUN7(VAR4);
    VAR10 = FUN7(VAR4);
    VAR11 = FUN7(VAR4);
    FUN4(VAR4, 8);
    FUN8(VAR4, VAR9, VAR27);
    FUN4(VAR4, 4);
    VAR6->VAR19->VAR28 = FUN7(VAR4);
    VAR6->VAR19->VAR29 = FUN7(VAR4);
    if (FUN5(VAR4) != 1)
        return VAR25;
    VAR12 = FUN5(VAR4);
    if (VAR12 != 8 && VAR12 != 16 && VAR12 != 24 && VAR12 != 48)
    {
        FUN6(VAR2, "", VAR12);
        return VAR25;
    }
    switch (FUN7(VAR4))
    {
    case VAR30:
        VAR15 = 0;
        break;
    case 0x100:
        VAR6->VAR19->VAR24 = FUN9('', '', '', 0);
        VAR15 = 1;
        break;
    default:
        FUN6(VAR2, "");
        return VAR25;
    }
    FUN4(VAR4, 4);
    FUN8(VAR4, VAR10, VAR27);
    FUN4(VAR4, 140);
    if (FUN5(VAR4) != 0x5453)
        return VAR25;
    VAR13 = FUN5(VAR4);
    if (VAR13 < 0x163C)
    {
        FUN6(VAR2, "");
        return VAR25;
    }
    FUN4(VAR4, 616);
    if (!FUN7(VAR4) ^ VAR15)
    {
        VAR6->VAR19->VAR31 = FUN10("");
        VAR6->VAR19->VAR32 = 9;
    }
    FUN4(VAR4, 4);
    FUN11(VAR6, 64, 1, FUN7(VAR4));
    FUN4(VAR4, 20);
    FUN12(&VAR6->VAR33, "", FUN7(VAR4), 0);
    FUN12(&VAR6->VAR33, "", FUN7(VAR4), 0);
    FUN12(&VAR6->VAR33, "", FUN7(VAR4), 0);
    FUN12(&VAR6->VAR33, "", FUN7(VAR4), 0);
    VAR14 = FUN7(VAR4);
    FUN12(&VAR6->VAR33, "", FUN7(VAR4), 1);
    FUN12(&VAR6->VAR33, "", FUN7(VAR4), 1);
    FUN12(&VAR6->VAR33, "", FUN7(VAR4), 1);
    FUN4(VAR4, 12 + 16);
    FUN13(&VAR6->VAR33, "", FUN14(FUN7(VAR4)), 1);
    FUN13(&VAR6->VAR33, "", FUN14(FUN7(VAR4)), 1);
    FUN4(VAR4, 36);
    VAR6->VAR19->VAR34 = FUN7(VAR4);
    if (VAR8 == VAR35)
    {
        if (VAR12 == 8)
        {
            VAR6->VAR19->VAR36 = VAR37;
        }
        else if (VAR12 == 16)
        {
            VAR6->VAR19->VAR36 = VAR38;
        }
        else if (VAR12 == 24)
        {
            VAR6->VAR19->VAR36 = VAR39;
        }
        else if (VAR12 == 48)
        {
            VAR6->VAR19->VAR36 = VAR40;
        }
        else
        {
            FUN6(VAR2, "", VAR12);
            return VAR25;
        }
    }
    else if (VAR8 == VAR41)
    {
        switch (VAR14 & 0xFFFFFF)
        {
        case VAR42:
            if (VAR12 == 8)
            {
                VAR6->VAR19->VAR36 = VAR43;
            }
            else if (VAR12 == 16)
            {
                VAR6->VAR19->VAR36 = VAR44;
            }
            else
            {
                FUN6(VAR2, "", VAR12);
                return VAR25;
            }
            break;
        case VAR45:
            if (VAR12 == 8)
            {
                VAR6->VAR19->VAR36 = VAR46;
            }
            else if (VAR12 == 16)
            {
                VAR6->VAR19->VAR36 = VAR47;
            }
            else
            {
                FUN6(VAR2, "", VAR12);
                return VAR25;
            }
            break;
        default:
            FUN6(VAR2, "", VAR14 & 0xFFFFFF);
            return VAR25;
        }
    }
    else
    {
        FUN6(VAR2, "", VAR8);
        return VAR25;
    }
    FUN4(VAR4, 668);
    FUN12(&VAR6->VAR33, "", FUN7(VAR4), 0);
    FUN4(VAR4, 24);
    VAR16 = FUN15(VAR48 + 1);
    if (!VAR16)
        return FUN3(VAR18);
    VAR17 = FUN16(VAR4, VAR48, VAR16, VAR48 + 1);
    if (VAR17 < VAR48)
        FUN4(VAR4, VAR48 - VAR17);
    if (VAR16[0])
        FUN17(&VAR6->VAR33, "", VAR16, VAR49);
    else
        FUN18(VAR16);
    FUN4(VAR4, 1176);
    FUN12(&VAR6->VAR33, "", FUN7(VAR4), 1);
    FUN12(&VAR6->VAR33, "", FUN7(VAR4), 1);
    FUN12(&VAR6->VAR33, "", FUN7(VAR4), 1);
    FUN12(&VAR6->VAR33, "", FUN7(VAR4), 1);
    FUN12(&VAR6->VAR33, "", FUN7(VAR4), 1);
    FUN8(VAR4, VAR11, VAR27);
    for (VAR17 = 0; VAR17 < VAR6->VAR26; VAR17++)
        FUN19(VAR6, FUN20(VAR4), VAR17, 0, 0, VAR50);
    return 0;
}