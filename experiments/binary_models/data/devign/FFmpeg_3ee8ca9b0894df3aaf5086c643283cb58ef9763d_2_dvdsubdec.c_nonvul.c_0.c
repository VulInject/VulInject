static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    int VAR16, VAR17, VAR18 = 0;
    const VAR3 *VAR19 = 0;
    uint8_t VAR20[4], VAR21[256];
    int VAR22;
    int VAR23;
    int VAR24 = 0;
    if (VAR5 < 10)
        return -1;
    if (FUN2(VAR4) == 0)
    {
        VAR16 = 1;
        VAR17 = 4;
        VAR6 = 6;
    }
    else
    {
        VAR16 = 0;
        VAR17 = 2;
        VAR6 = 2;
    }
    VAR6 = FUN3(VAR4 + VAR6);
    while (VAR6 > 0 && VAR6 < VAR5 - 2 - VAR17)
    {
        VAR22 = FUN2(VAR4 + VAR6);
        VAR15 = FUN3(VAR4 + VAR6 + 2);
        FUN4(NULL, "", VAR6, VAR15, VAR22);
        VAR7 = VAR6 + 2 + VAR17;
        VAR13 = -1;
        VAR14 = -1;
        VAR9 = VAR10 = VAR11 = VAR12 = 0;
        while (VAR7 < VAR5)
        {
            VAR8 = VAR4[VAR7++];
            FUN4(NULL, "", VAR8);
            switch (VAR8)
            {
            case 0x00:
                VAR24 = 1;
                break;
            case 0x01:
                VAR2->VAR25 = (VAR22 << 10) / 90;
                break;
            case 0x02:
                VAR2->VAR26 = (VAR22 << 10) / 90;
                break;
            case 0x03:
                if ((VAR5 - VAR7) < 2)
                    goto VAR27;
                VAR20[3] = VAR4[VAR7] >> 4;
                VAR20[2] = VAR4[VAR7] & 0x0f;
                VAR20[1] = VAR4[VAR7 + 1] >> 4;
                VAR20[0] = VAR4[VAR7 + 1] & 0x0f;
                VAR7 += 2;
                break;
            case 0x04:
                if ((VAR5 - VAR7) < 2)
                    goto VAR27;
                VAR21[3] = VAR4[VAR7] >> 4;
                VAR21[2] = VAR4[VAR7] & 0x0f;
                VAR21[1] = VAR4[VAR7 + 1] >> 4;
                VAR21[0] = VAR4[VAR7 + 1] & 0x0f;
                VAR7 += 2;
                FUN4(NULL, "", VAR21[0], VAR21[1], VAR21[2], VAR21[3]);
                break;
            case 0x05:
            case 0x85:
                if ((VAR5 - VAR7) < 6)
                    goto VAR27;
                VAR9 = (VAR4[VAR7] << 4) | (VAR4[VAR7 + 1] >> 4);
                VAR11 = ((VAR4[VAR7 + 1] & 0x0f) << 8) | VAR4[VAR7 + 2];
                VAR10 = (VAR4[VAR7 + 3] << 4) | (VAR4[VAR7 + 4] >> 4);
                VAR12 = ((VAR4[VAR7 + 4] & 0x0f) << 8) | VAR4[VAR7 + 5];
                if (VAR8 & 0x80)
                    VAR18 = 1;
                FUN4(NULL, "", VAR9, VAR11, VAR10, VAR12);
                VAR7 += 6;
                break;
            case 0x06:
                if ((VAR5 - VAR7) < 4)
                    goto VAR27;
                VAR13 = FUN2(VAR4 + VAR7);
                VAR14 = FUN2(VAR4 + VAR7 + 2);
                FUN4(NULL, "", VAR13, VAR14);
                VAR7 += 4;
                break;
            case 0x86:
                if ((VAR5 - VAR7) < 8)
                    goto VAR27;
                VAR13 = FUN5(VAR4 + VAR7);
                VAR14 = FUN5(VAR4 + VAR7 + 4);
                FUN4(NULL, "", VAR13, VAR14);
                VAR7 += 8;
                break;
            case 0x83:
                if ((VAR5 - VAR7) < 768)
                    goto VAR27;
                VAR19 = VAR4 + VAR7;
                VAR7 += 768;
                break;
            case 0x84:
                if ((VAR5 - VAR7) < 256)
                    goto VAR27;
                for (VAR23 = 0; VAR23 < 256; VAR23++)
                    VAR21[VAR23] = 0xFF - VAR4[VAR7 + VAR23];
                VAR7 += 256;
                break;
            case 0xff:
                goto VAR28;
            default:
                FUN4(NULL, "", VAR8);
                goto VAR28;
            }
        }
    VAR28:
        if (VAR13 >= 0)
        {
            int VAR29, VAR30;
            VAR3 *VAR31;
            VAR29 = VAR11 - VAR9 + 1;
            if (VAR29 < 0)
                VAR29 = 0;
            VAR30 = VAR12 - VAR10;
            if (VAR30 < 0)
                VAR30 = 0;
            if (VAR29 > 0 && VAR30 > 0)
            {
                if (VAR2->VAR32 != NULL)
                {
                    for (VAR23 = 0; VAR23 < VAR2->VAR33; VAR23++)
                    {
                        FUN6(&VAR2->VAR32[VAR23]->VAR34.VAR35[0]);
                        FUN6(&VAR2->VAR32[VAR23]->VAR34.VAR35[1]);
                        FUN6(&VAR2->VAR32[VAR23]);
                    }
                    FUN6(&VAR2->VAR32);
                    VAR2->VAR33 = 0;
                }
                VAR31 = FUN7(VAR29 * VAR30);
                VAR2->VAR32 = FUN8(sizeof(*VAR2->VAR32));
                VAR2->VAR32[0] = FUN8(sizeof(VAR36));
                VAR2->VAR33 = 1;
                VAR2->VAR32[0]->VAR34.VAR35[0] = VAR31;
                FUN9(VAR31, VAR29 * 2, VAR29, (VAR30 + 1) / 2, VAR4, VAR13, VAR5, VAR18);
                FUN9(VAR31 + VAR29, VAR29 * 2, VAR29, VAR30 / 2, VAR4, VAR14, VAR5, VAR18);
                VAR2->VAR32[0]->VAR34.VAR35[1] = FUN8(VAR37);
                if (VAR18)
                {
                    if (VAR19 == 0)
                        goto VAR27;
                    VAR2->VAR32[0]->VAR38 = 256;
                    FUN10(VAR19, VAR21, (VAR39 *)VAR2->VAR32[0]->VAR34.VAR35[1], 256);
                }
                else
                {
                    VAR2->VAR32[0]->VAR38 = 4;
                    FUN11((VAR39 *)VAR2->VAR32[0]->VAR34.VAR35[1], VAR20, VAR21, 0xffff00);
                }
                VAR2->VAR32[0]->VAR40 = VAR9;
                VAR2->VAR32[0]->VAR41 = VAR10;
                VAR2->VAR32[0]->VAR29 = VAR29;
                VAR2->VAR32[0]->VAR30 = VAR30;
                VAR2->VAR32[0]->VAR42 = VAR43;
                VAR2->VAR32[0]->VAR34.VAR44[0] = VAR29;
            }
        }
        if (VAR15 == VAR6)
            break;
        VAR6 = VAR15;
    }
    if (VAR2->VAR33 > 0)
        return VAR24;
VAR27:
    if (VAR2->VAR32 != NULL)
    {
        for (VAR23 = 0; VAR23 < VAR2->VAR33; VAR23++)
        {
            FUN6(&VAR2->VAR32[VAR23]->VAR34.VAR35[0]);
            FUN6(&VAR2->VAR32[VAR23]->VAR34.VAR35[1]);
            FUN6(&VAR2->VAR32[VAR23]);
        }
        FUN6(&VAR2->VAR32);
        VAR2->VAR33 = 0;
    }
    return -1;
}