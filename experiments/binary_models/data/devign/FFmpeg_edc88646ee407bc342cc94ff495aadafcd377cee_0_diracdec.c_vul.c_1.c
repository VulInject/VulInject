static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12;
    int VAR13, VAR14;
    uint8_t VAR15;
    unsigned VAR16;
    if (VAR5 < VAR17)
        return VAR18;
    VAR15 = VAR4[4];
    FUN2(&VAR7->VAR19, &VAR4[13], 8 * (VAR5 - VAR17));
    if (VAR15 == VAR20)
    {
        if (VAR7->VAR21)
            return 0;
        VAR13 = FUN3(&VAR12, VAR4 + VAR17, VAR5 - VAR17, VAR2);
        if (VAR13 < 0)
        {
            FUN4(VAR2, VAR22, "");
            return VAR13;
        }
        VAR13 = FUN5(VAR2, VAR12->VAR23, VAR12->VAR24);
        if (VAR13 < 0)
        {
            FUN6(&VAR12);
            return VAR13;
        }
        FUN7(VAR2, VAR12->VAR25);
        VAR2->VAR26 = VAR12->VAR26;
        VAR2->VAR27 = VAR12->VAR27;
        VAR2->VAR28 = VAR12->VAR28;
        VAR2->VAR29 = VAR12->VAR29;
        VAR2->VAR30 = VAR12->VAR30;
        VAR2->VAR31 = VAR12->VAR31;
        VAR2->VAR32 = VAR12->VAR32;
        VAR2->VAR33 = VAR12->VAR33;
        VAR7->VAR34 = VAR12->VAR34;
        VAR7->VAR35.VAR36 = VAR12->VAR35.VAR36;
        VAR7->VAR35.VAR37 = VAR12->VAR35.VAR37;
        VAR7->VAR38 = *VAR12;
        FUN6(&VAR12);
        VAR7->VAR39 = VAR7->VAR34 > 8;
        FUN8(VAR2->VAR26, &VAR7->VAR40, &VAR7->VAR41);
        VAR13 = FUN9(VAR7);
        if (VAR13 < 0)
            return VAR13;
        VAR7->VAR21 = 1;
    }
    else if (VAR15 == VAR42)
    {
        FUN10(VAR7);
        VAR7->VAR21 = 0;
    }
    else if (VAR15 == VAR43)
    {
        if (VAR4[13] == 1)
        {
            int VAR44[3];
            if (sscanf(VAR4 + 14, "", VAR44, VAR44 + 1, VAR44 + 2) == 3)
                if (VAR44[0] == 1 && VAR44[1] == 0 && VAR44[2] <= 7)
                    VAR7->VAR45 = 1;
        }
    }
    else if (VAR15 & 0x8)
    {
        if (!VAR7->VAR21)
        {
            FUN4(VAR2, VAR46, "");
            return VAR18;
        }
        for (VAR14 = 0; VAR14 < VAR47; VAR14++)
            if (VAR7->VAR48[VAR14].VAR49->VAR50[0] == NULL)
                VAR10 = &VAR7->VAR48[VAR14];
        if (!VAR10)
        {
            FUN4(VAR2, VAR22, "");
            return VAR18;
        }
        FUN11(VAR10->VAR49);
        VAR16 = VAR15 & 0x03;
        if (VAR16 > 2)
        {
            FUN4(VAR2, VAR22, "");
            return VAR18;
        }
        VAR7->VAR51 = VAR16;
        VAR7->VAR52 = (VAR15 & 0x48) == 0x08;
        VAR7->VAR53 = (VAR15 & 0x88) == 0x88;
        VAR7->VAR54 = (VAR15 & 0x88) == 0x08;
        VAR7->VAR55 = (VAR15 & 0xF8) == 0xC8;
        VAR7->VAR56 = (VAR15 & 0xF8) == 0xE8;
        VAR7->VAR57 = (VAR15 & 0x28) == 0x08;
        VAR10->VAR58 = (VAR15 & 0x0C) == 0x0C;
        VAR10->VAR49->VAR59 = VAR7->VAR51 == 0;
        VAR10->VAR49->VAR60 = VAR7->VAR51 + 1;
        if (VAR7->VAR35.VAR37 == 2 && VAR15 == 0x88)
            VAR7->VAR55 = 1;
        if (VAR7->VAR53 && !(VAR7->VAR55 || VAR7->VAR56))
        {
            FUN4(VAR2, VAR22, "");
            return VAR18;
        }
        if ((VAR13 = FUN12(VAR2, VAR10->VAR49, (VAR15 & 0x0C) == 0x0C ? VAR61 : 0)) < 0)
            return VAR13;
        VAR7->VAR62 = VAR10;
        VAR7->VAR63[0].VAR64 = VAR10->VAR49->VAR65[0];
        VAR7->VAR63[1].VAR64 = VAR10->VAR49->VAR65[1];
        VAR7->VAR63[2].VAR64 = VAR10->VAR49->VAR65[2];
        if (FUN13(VAR7, FUN14(FUN15(VAR7->VAR63[0].VAR64), FUN15(VAR7->VAR63[1].VAR64), FUN15(VAR7->VAR63[2].VAR64))) < 0)
            return FUN16(VAR66);
        VAR13 = FUN17(VAR7);
        if (VAR13 < 0)
            return VAR13;
        VAR13 = FUN18(VAR7);
        if (VAR13 < 0)
            return VAR13;
    }
    return 0;
}