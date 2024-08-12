static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *const VAR12 = VAR2->VAR13;
    int VAR14 = VAR15;
    int VAR16 = VAR9;
    int VAR17, VAR18, VAR19;
    if (VAR12->VAR20.VAR3[0])
        VAR2->FUN2(VAR2, &VAR12->VAR20);
    VAR12->VAR20.VAR21 = 3;
    VAR12->VAR20.VAR22 = VAR23;
    if ((VAR19 = VAR2->FUN3(VAR2, &VAR12->VAR20)) < 0)
    {
        FUN4(VAR2, VAR24, "");
        return VAR19;
    }
    VAR12->VAR25 = VAR8[0];
    VAR8++;
    VAR16--;
    if (VAR12->VAR25 & VAR26)
    {
        void *VAR27 = NULL;
        VAR12->VAR27 = NULL;
        VAR17 = VAR8[0];
        VAR18 = VAR8[1];
        VAR12->VAR28 = VAR8[2];
        VAR12->VAR29 = VAR8[3];
        VAR12->VAR30 = VAR8[4];
        VAR12->VAR31 = VAR8[5];
        VAR8 += 6;
        VAR16 -= 6;
        FUN4(VAR2, VAR32, "", VAR12->VAR25, VAR17, VAR18, VAR12->VAR28, VAR12->VAR29, VAR12->VAR30, VAR12->VAR31);
        if (VAR17 != 0 || VAR18 != 1)
        {
            FUN5(VAR2, "", VAR17, VAR18);
            return VAR33;
        }
        if (VAR12->VAR30 == 0 || VAR12->VAR31 == 0)
        {
            FUN5(VAR2, "", VAR12->VAR30, VAR12->VAR31);
            return VAR33;
        }
        if (VAR12->VAR28 != 0 && VAR12->VAR28 != 1)
        {
            FUN5(VAR2, "", VAR12->VAR28);
            return VAR33;
        }
        switch (VAR12->VAR29)
        {
        case VAR34:
            VAR12->VAR35 = 8;
            VAR27 = VAR36;
            VAR12->VAR37 = VAR38;
            break;
        case VAR39:
        case VAR40:
            VAR12->VAR35 = 16;
            VAR27 = VAR36;
            VAR12->VAR37 = VAR41;
            break;
        case VAR42:
            VAR12->VAR35 = 24;
            VAR27 = VAR36;
            VAR12->VAR37 = VAR43;
            break;
        case VAR44:
            VAR12->VAR35 = 32;
            VAR27 = VAR36;
            VAR12->VAR37 = VAR45;
            break;
        default:
            VAR12->VAR37 = NULL;
            FUN5(VAR2, "", VAR12->VAR29);
            return VAR33;
        }
        VAR14 = FUN6(&VAR12->VAR46);
        if (VAR14 != VAR15)
        {
            FUN4(VAR2, VAR24, "", VAR14);
            return -1;
        }
        VAR12->VAR47 = FUN7(VAR12->VAR47, VAR2->VAR48 * VAR2->VAR49, (VAR12->VAR35 / 8));
        VAR12->VAR50 = FUN7(VAR12->VAR50, VAR2->VAR48 * VAR2->VAR49, (VAR12->VAR35 / 8));
        VAR12->VAR51 = (VAR12->VAR48 + VAR12->VAR30 - 1) / VAR12->VAR30;
        VAR12->VAR52 = (VAR12->VAR49 + VAR12->VAR31 - 1) / VAR12->VAR31;
        if (!VAR12->VAR47 || !VAR12->VAR50)
            return -1;
        VAR12->VAR27 = VAR27;
    }
    if (VAR12->VAR27 == NULL)
    {
        FUN4(VAR2, VAR24, "");
        return VAR53;
    }
    if (VAR12->VAR28 == 0)
    {
        if (VAR12->VAR54 < VAR16)
        {
            FUN4(VAR2, VAR24, "");
            return VAR53;
        }
        memcpy(VAR12->VAR55, VAR8, VAR16);
    }
    else
    {
        VAR12->VAR46.VAR56 = VAR12->VAR46.VAR57 = 0;
        VAR12->VAR46.VAR58 = (VAR7 *)VAR8;
        VAR12->VAR46.VAR59 = VAR16;
        VAR12->VAR46.VAR60 = VAR12->VAR55;
        VAR12->VAR46.VAR61 = VAR12->VAR54;
        VAR14 = FUN8(&VAR12->VAR46, VAR62);
        if (VAR14 != VAR15 && VAR14 != VAR63)
        {
            FUN4(VAR2, VAR24, "", VAR14);
            return VAR53;
        }
        VAR12->VAR64 = VAR12->VAR46.VAR57;
    }
    if (VAR12->VAR25 & VAR26)
    {
        VAR12->VAR20.VAR65 = 1;
        VAR12->VAR20.VAR66 = VAR67;
        VAR12->FUN9(VAR12);
    }
    else
    {
        VAR12->VAR20.VAR65 = 0;
        VAR12->VAR20.VAR66 = VAR68;
        if (VAR12->VAR64)
            VAR12->FUN10(VAR12);
    }
    {
        VAR7 *VAR69, *VAR70;
        int VAR71, VAR72;
        VAR69 = VAR12->VAR20.VAR3[0];
        VAR70 = VAR12->VAR47;
        switch (VAR12->VAR29)
        {
        case VAR34:
            for (VAR72 = 0; VAR72 < VAR12->VAR49; VAR72++)
            {
                for (VAR71 = 0; VAR71 < VAR12->VAR48; VAR71++)
                {
                    VAR69[VAR71 * 3 + 0] = VAR12->VAR73[(*VAR70) * 3 + 0];
                    VAR69[VAR71 * 3 + 1] = VAR12->VAR73[(*VAR70) * 3 + 1];
                    VAR69[VAR71 * 3 + 2] = VAR12->VAR73[(*VAR70) * 3 + 2];
                    VAR70++;
                }
                VAR69 += VAR12->VAR20.VAR74[0];
            }
            break;
        case VAR39:
            for (VAR72 = 0; VAR72 < VAR12->VAR49; VAR72++)
            {
                for (VAR71 = 0; VAR71 < VAR12->VAR48; VAR71++)
                {
                    uint16_t VAR75 = FUN11(VAR70);
                    VAR70 += 2;
                    VAR69[VAR71 * 3 + 0] = (VAR75 & 0x7C00) >> 7;
                    VAR69[VAR71 * 3 + 1] = (VAR75 & 0x03E0) >> 2;
                    VAR69[VAR71 * 3 + 2] = (VAR75 & 0x001F) << 3;
                }
                VAR69 += VAR12->VAR20.VAR74[0];
            }
            break;
        case VAR40:
            for (VAR72 = 0; VAR72 < VAR12->VAR49; VAR72++)
            {
                for (VAR71 = 0; VAR71 < VAR12->VAR48; VAR71++)
                {
                    uint16_t VAR75 = FUN11(VAR70);
                    VAR70 += 2;
                    VAR69[VAR71 * 3 + 0] = (VAR75 & 0xF800) >> 8;
                    VAR69[VAR71 * 3 + 1] = (VAR75 & 0x07E0) >> 3;
                    VAR69[VAR71 * 3 + 2] = (VAR75 & 0x001F) << 3;
                }
                VAR69 += VAR12->VAR20.VAR74[0];
            }
            break;
        case VAR42:
            for (VAR72 = 0; VAR72 < VAR12->VAR49; VAR72++)
            {
                memcpy(VAR69, VAR70, VAR12->VAR48 * 3);
                VAR70 += VAR12->VAR48 * 3;
                VAR69 += VAR12->VAR20.VAR74[0];
            }
            break;
        case VAR44:
            for (VAR72 = 0; VAR72 < VAR12->VAR49; VAR72++)
            {
                for (VAR71 = 0; VAR71 < VAR12->VAR48; VAR71++)
                {
                    uint32_t VAR75 = FUN12(VAR70);
                    VAR70 += 4;
                    FUN13(VAR69 + (VAR71 * 3), VAR75);
                }
                VAR69 += VAR12->VAR20.VAR74[0];
            }
            break;
        default:
            FUN4(VAR2, VAR24, "", VAR12->VAR29);
        }
        FUN14(VAR7 *, VAR12->VAR47, VAR12->VAR50);
    }
    *VAR4 = sizeof(VAR76);
    *(VAR76 *)VAR3 = VAR12->VAR20;
    return VAR9;
}