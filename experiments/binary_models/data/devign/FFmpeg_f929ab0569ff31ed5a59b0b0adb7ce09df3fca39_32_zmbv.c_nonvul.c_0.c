static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10 = VAR6->VAR3;
    int VAR11 = VAR6->VAR12;
    VAR13 *const VAR14 = VAR2->VAR15;
    int VAR16 = VAR17;
    int VAR18 = VAR11;
    int VAR19, VAR20, VAR21;
    VAR9 *VAR22;
    if ((VAR21 = FUN2(VAR2, VAR8, 0)) < 0)
    {
        FUN3(VAR2, VAR23, "");
        return VAR21;
    }
    VAR14->VAR24 = VAR10[0];
    VAR10++;
    VAR18--;
    if (VAR14->VAR24 & VAR25)
    {
        VAR19 = VAR10[0];
        VAR20 = VAR10[1];
        VAR14->VAR26 = VAR10[2];
        VAR14->VAR27 = VAR10[3];
        VAR14->VAR28 = VAR10[4];
        VAR14->VAR29 = VAR10[5];
        VAR14->VAR30 = NULL;
        VAR14->VAR31 = NULL;
        VAR10 += 6;
        VAR18 -= 6;
        FUN3(VAR2, VAR32, "", VAR14->VAR24, VAR19, VAR20, VAR14->VAR26, VAR14->VAR27, VAR14->VAR28, VAR14->VAR29);
        if (VAR19 != 0 || VAR20 != 1)
        {
            FUN4(VAR2, "", VAR19, VAR20);
            return VAR33;
        }
        if (VAR14->VAR28 == 0 || VAR14->VAR29 == 0)
        {
            FUN4(VAR2, "", VAR14->VAR28, VAR14->VAR29);
            return VAR33;
        }
        if (VAR14->VAR26 != 0 && VAR14->VAR26 != 1)
        {
            FUN4(VAR2, "", VAR14->VAR26);
            return VAR33;
        }
        switch (VAR14->VAR27)
        {
        case VAR34:
            VAR14->VAR35 = 8;
            VAR14->VAR30 = VAR36;
            VAR14->VAR31 = VAR37;
            break;
        case VAR38:
        case VAR39:
            VAR14->VAR35 = 16;
            VAR14->VAR30 = VAR36;
            VAR14->VAR31 = VAR40;
            break;
        case VAR41:
            VAR14->VAR35 = 24;
            VAR14->VAR30 = VAR36;
            VAR14->VAR31 = VAR42;
            break;
        case VAR43:
            VAR14->VAR35 = 32;
            VAR14->VAR30 = VAR36;
            VAR14->VAR31 = VAR44;
            break;
        default:
            VAR14->VAR30 = NULL;
            VAR14->VAR31 = NULL;
            FUN4(VAR2, "", VAR14->VAR27);
            return VAR33;
        }
        VAR16 = FUN5(&VAR14->VAR45);
        if (VAR16 != VAR17)
        {
            FUN3(VAR2, VAR23, "", VAR16);
            return VAR46;
        }
        VAR22 = FUN6(VAR14->VAR47, VAR2->VAR48 * VAR2->VAR49 * (VAR14->VAR35 / 8));
        if (!VAR22)
            return FUN7(VAR50);
        VAR14->VAR47 = VAR22;
        VAR22 = FUN6(VAR14->VAR51, VAR2->VAR48 * VAR2->VAR49 * (VAR14->VAR35 / 8));
        if (!VAR22)
            return FUN7(VAR50);
        VAR14->VAR51 = VAR22;
        VAR14->VAR52 = (VAR14->VAR48 + VAR14->VAR28 - 1) / VAR14->VAR28;
        VAR14->VAR53 = (VAR14->VAR49 + VAR14->VAR29 - 1) / VAR14->VAR29;
    }
    if (!VAR14->VAR30)
    {
        FUN3(VAR2, VAR23, "");
        return VAR54;
    }
    if (VAR14->VAR26 == 0)
    {
        if (VAR14->VAR55 < VAR18)
        {
            FUN3(VAR2, VAR23, "");
            return VAR54;
        }
        memcpy(VAR14->VAR56, VAR10, VAR18);
    }
    else
    {
        VAR14->VAR45.VAR57 = VAR14->VAR45.VAR58 = 0;
        VAR14->VAR45.VAR59 = VAR10;
        VAR14->VAR45.VAR60 = VAR18;
        VAR14->VAR45.VAR61 = VAR14->VAR56;
        VAR14->VAR45.VAR62 = VAR14->VAR55;
        VAR16 = FUN8(&VAR14->VAR45, VAR63);
        if (VAR16 != VAR17 && VAR16 != VAR64)
        {
            FUN3(VAR2, VAR23, "", VAR16);
            return VAR54;
        }
        VAR14->VAR65 = VAR14->VAR45.VAR58;
    }
    if (VAR14->VAR24 & VAR25)
    {
        VAR8->VAR66 = 1;
        VAR8->VAR67 = VAR68;
        VAR14->FUN9(VAR14);
    }
    else
    {
        VAR8->VAR66 = 0;
        VAR8->VAR67 = VAR69;
        if (VAR14->VAR65)
            VAR14->FUN10(VAR14);
    }
    {
        VAR9 *VAR70, *VAR71;
        int VAR72, VAR73;
        VAR70 = VAR8->VAR3[0];
        VAR71 = VAR14->VAR47;
        switch (VAR14->VAR27)
        {
        case VAR34:
            for (VAR73 = 0; VAR73 < VAR14->VAR49; VAR73++)
            {
                for (VAR72 = 0; VAR72 < VAR14->VAR48; VAR72++)
                {
                    VAR70[VAR72 * 3 + 0] = VAR14->VAR74[(*VAR71) * 3 + 0];
                    VAR70[VAR72 * 3 + 1] = VAR14->VAR74[(*VAR71) * 3 + 1];
                    VAR70[VAR72 * 3 + 2] = VAR14->VAR74[(*VAR71) * 3 + 2];
                    VAR71++;
                }
                VAR70 += VAR8->VAR75[0];
            }
            break;
        case VAR38:
            for (VAR73 = 0; VAR73 < VAR14->VAR49; VAR73++)
            {
                for (VAR72 = 0; VAR72 < VAR14->VAR48; VAR72++)
                {
                    uint16_t VAR22 = FUN11(VAR71);
                    VAR71 += 2;
                    VAR70[VAR72 * 3 + 0] = (VAR22 & 0x7C00) >> 7;
                    VAR70[VAR72 * 3 + 1] = (VAR22 & 0x03E0) >> 2;
                    VAR70[VAR72 * 3 + 2] = (VAR22 & 0x001F) << 3;
                }
                VAR70 += VAR8->VAR75[0];
            }
            break;
        case VAR39:
            for (VAR73 = 0; VAR73 < VAR14->VAR49; VAR73++)
            {
                for (VAR72 = 0; VAR72 < VAR14->VAR48; VAR72++)
                {
                    uint16_t VAR22 = FUN11(VAR71);
                    VAR71 += 2;
                    VAR70[VAR72 * 3 + 0] = (VAR22 & 0xF800) >> 8;
                    VAR70[VAR72 * 3 + 1] = (VAR22 & 0x07E0) >> 3;
                    VAR70[VAR72 * 3 + 2] = (VAR22 & 0x001F) << 3;
                }
                VAR70 += VAR8->VAR75[0];
            }
            break;
        case VAR41:
            for (VAR73 = 0; VAR73 < VAR14->VAR49; VAR73++)
            {
                memcpy(VAR70, VAR71, VAR14->VAR48 * 3);
                VAR71 += VAR14->VAR48 * 3;
                VAR70 += VAR8->VAR75[0];
            }
            break;
        case VAR43:
            for (VAR73 = 0; VAR73 < VAR14->VAR49; VAR73++)
            {
                for (VAR72 = 0; VAR72 < VAR14->VAR48; VAR72++)
                {
                    uint32_t VAR22 = FUN12(VAR71);
                    VAR71 += 4;
                    FUN13(VAR70 + (VAR72 * 3), VAR22);
                }
                VAR70 += VAR8->VAR75[0];
            }
            break;
        default:
            FUN3(VAR2, VAR23, "", VAR14->VAR27);
        }
        FUN14(VAR9 *, VAR14->VAR47, VAR14->VAR51);
    }
    *VAR4 = 1;
    return VAR11;
}