static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    int VAR5, VAR6, VAR7, VAR8 = 0x800;
    VAR9 *VAR10;
    VAR11 *VAR12 = FUN2(VAR2, NULL);
    if (!VAR12)
        return FUN3(VAR13);
    FUN4(VAR4, 3);
    VAR7 = FUN5(VAR4) - '';
    VAR10 = VAR12->VAR14;
    VAR10->VAR15 = VAR16;
    VAR10->VAR17 = FUN6(VAR4);
    VAR10->VAR18 = FUN7(VAR19, VAR10->VAR17);
    if (!VAR10->VAR18)
    {
        char VAR20[32];
        FUN8(VAR20, sizeof(VAR20), VAR10->VAR17);
        for (VAR5 = 0; VAR5 < FUN9(VAR21); VAR5++)
        {
            if (VAR10->VAR17 == VAR21[VAR5])
            {
                FUN10(VAR2, "", VAR20);
                return VAR22;
            }
        }
        FUN11(VAR2, VAR23, "", VAR20);
        return VAR24;
    }
    VAR10->VAR25 = FUN6(VAR4);
    if (!VAR10->VAR25)
        return VAR24;
    FUN4(VAR4, 4);
    VAR10->VAR26 = FUN6(VAR4);
    if (!VAR10->VAR26)
        return VAR24;
    FUN4(VAR4, 4);
    switch (VAR10->VAR18)
    {
    case VAR27:
        VAR10->VAR28 = 2048;
        FUN12(VAR10, 34);
        if (!VAR10->VAR29)
            return FUN3(VAR13);
        memset(VAR10->VAR29, 0, 34);
        break;
    case VAR30:
        VAR10->VAR28 = 16 * VAR10->VAR25;
        if (VAR4->VAR31)
            VAR12->VAR32 = FUN13(VAR10, FUN14(VAR4) - VAR8);
        break;
    case VAR33:
        VAR10->VAR28 = 20 * VAR10->VAR25;
        if (VAR4->VAR31)
            VAR12->VAR32 = FUN13(VAR10, FUN14(VAR4) - VAR8);
        break;
    case VAR34:
        if (VAR7 == 2)
            VAR8 = FUN6(VAR4);
        VAR10->VAR35 = 4;
        VAR10->VAR28 = 36 * VAR10->VAR25;
        if (VAR4->VAR31)
            VAR12->VAR32 = FUN13(VAR10, FUN14(VAR4) - VAR8);
        break;
    case VAR36:
        VAR8 = FUN6(VAR4);
        if ((VAR6 = FUN15(VAR2, VAR10, VAR2->VAR4, 32)) < 0)
            return VAR6;
        if (VAR4->VAR31)
            VAR12->VAR32 = FUN13(VAR10, FUN14(VAR4) - VAR8);
        break;
    case VAR37:
        VAR10->VAR28 = 8 * VAR10->VAR25;
        FUN4(VAR2->VAR4, 0x1A4 - FUN16(VAR2->VAR4));
        if ((VAR6 = FUN12(VAR12->VAR14, 32 * VAR10->VAR25)) < 0)
            return VAR6;
        for (VAR5 = 0; VAR5 < VAR10->VAR25; VAR5++)
        {
            FUN17(VAR2->VAR4, VAR12->VAR14->VAR29 + 32 * VAR5, 32);
            FUN4(VAR2->VAR4, 8);
        }
        if (VAR4->VAR31)
            VAR12->VAR32 = (FUN14(VAR4) - VAR8) / (8 * VAR10->VAR25) * 14;
        break;
    case VAR38:
    case VAR39:
        if (VAR7 != 4)
            VAR8 = FUN6(VAR4);
        if (VAR4->VAR31)
            VAR12->VAR32 = (FUN14(VAR4) - VAR8) / 2 / VAR10->VAR25;
        break;
    }
    FUN4(VAR4, VAR8 - FUN16(VAR4));
    if (VAR10->VAR18 == VAR27)
    {
        FUN4(VAR4, FUN18(VAR4) + FUN18(VAR4));
        VAR12->VAR32 = FUN18(VAR4);
    }
    FUN19(VAR12, 64, 1, VAR10->VAR26);
    return 0;
}