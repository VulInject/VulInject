static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    int VAR18, VAR19, VAR20 = 0;
    const VAR5 *VAR21 = NULL;
    VAR5 *VAR22 = VAR2->VAR22, *VAR23 = VAR2->VAR23;
    int VAR24;
    int VAR25;
    int VAR26 = 0;
    if (VAR7 < 10)
        return -1;
    if (FUN2(VAR6) == 0)
    {
        VAR18 = 1;
        VAR19 = 4;
        VAR8 = 6;
    }
    else
    {
        VAR18 = 0;
        VAR19 = 2;
        VAR8 = 2;
    }
    VAR8 = FUN3(VAR6 + VAR8);
    if (VAR8 < 0 || VAR8 > VAR7 - 2 - VAR19)
        return FUN4(VAR27);
    while (VAR8 > 0 && VAR8 < VAR7 - 2 - VAR19)
    {
        VAR24 = FUN2(VAR6 + VAR8);
        VAR17 = FUN3(VAR6 + VAR8 + 2);
        FUN5(NULL, "", VAR8, VAR17, VAR24);
        VAR9 = VAR8 + 2 + VAR19;
        VAR15 = -1;
        VAR16 = -1;
        VAR11 = VAR12 = VAR13 = VAR14 = 0;
        while (VAR9 < VAR7)
        {
            VAR10 = VAR6[VAR9++];
            FUN5(NULL, "", VAR10);
            switch (VAR10)
            {
            case 0x00:
                VAR26 = 1;
                break;
            case 0x01:
                VAR4->VAR28 = (VAR24 << 10) / 90;
                break;
            case 0x02:
                VAR4->VAR29 = (VAR24 << 10) / 90;
                break;
            case 0x03:
                if ((VAR7 - VAR9) < 2)
                    goto VAR30;
                VAR22[3] = VAR6[VAR9] >> 4;
                VAR22[2] = VAR6[VAR9] & 0x0f;
                VAR22[1] = VAR6[VAR9 + 1] >> 4;
                VAR22[0] = VAR6[VAR9 + 1] & 0x0f;
                VAR9 += 2;
                break;
            case 0x04:
                if ((VAR7 - VAR9) < 2)
                    goto VAR30;
                VAR23[3] = VAR6[VAR9] >> 4;
                VAR23[2] = VAR6[VAR9] & 0x0f;
                VAR23[1] = VAR6[VAR9 + 1] >> 4;
                VAR23[0] = VAR6[VAR9 + 1] & 0x0f;
                VAR9 += 2;
                FUN5(NULL, "", VAR23[0], VAR23[1], VAR23[2], VAR23[3]);
                break;
            case 0x05:
            case 0x85:
                if ((VAR7 - VAR9) < 6)
                    goto VAR30;
                VAR11 = (VAR6[VAR9] << 4) | (VAR6[VAR9 + 1] >> 4);
                VAR13 = ((VAR6[VAR9 + 1] & 0x0f) << 8) | VAR6[VAR9 + 2];
                VAR12 = (VAR6[VAR9 + 3] << 4) | (VAR6[VAR9 + 4] >> 4);
                VAR14 = ((VAR6[VAR9 + 4] & 0x0f) << 8) | VAR6[VAR9 + 5];
                if (VAR10 & 0x80)
                    VAR20 = 1;
                FUN5(NULL, "", VAR11, VAR13, VAR12, VAR14);
                VAR9 += 6;
                break;
            case 0x06:
                if ((VAR7 - VAR9) < 4)
                    goto VAR30;
                VAR15 = FUN2(VAR6 + VAR9);
                VAR16 = FUN2(VAR6 + VAR9 + 2);
                FUN5(NULL, "", VAR15, VAR16);
                VAR9 += 4;
                break;
            case 0x86:
                if ((VAR7 - VAR9) < 8)
                    goto VAR30;
                VAR15 = FUN6(VAR6 + VAR9);
                VAR16 = FUN6(VAR6 + VAR9 + 4);
                FUN5(NULL, "", VAR15, VAR16);
                VAR9 += 8;
                break;
            case 0x83:
                if ((VAR7 - VAR9) < 768)
                    goto VAR30;
                VAR21 = VAR6 + VAR9;
                VAR9 += 768;
                break;
            case 0x84:
                if ((VAR7 - VAR9) < 256)
                    goto VAR30;
                for (VAR25 = 0; VAR25 < 256; VAR25++)
                    VAR23[VAR25] = 0xFF - VAR6[VAR9 + VAR25];
                VAR9 += 256;
                break;
            case 0xff:
                goto VAR31;
            default:
                FUN5(NULL, "", VAR10);
                goto VAR31;
            }
        }
    VAR31:
        if (VAR15 >= 0)
        {
            int VAR32, VAR33;
            VAR5 *VAR34;
            VAR32 = VAR13 - VAR11 + 1;
            if (VAR32 < 0)
                VAR32 = 0;
            VAR33 = VAR14 - VAR12 + 1;
            if (VAR33 < 0)
                VAR33 = 0;
            if (VAR32 > 0 && VAR33 > 0)
            {
                FUN7(VAR4);
                VAR34 = FUN8(VAR32 * VAR33);
                VAR4->VAR35 = FUN9(sizeof(*VAR4->VAR35));
                VAR4->VAR35[0] = FUN9(sizeof(VAR36));
                VAR4->VAR37 = 1;
                VAR4->VAR35[0]->VAR38.VAR39[0] = VAR34;
                FUN10(VAR34, VAR32 * 2, VAR32, (VAR33 + 1) / 2, VAR6, VAR15, VAR7, VAR20);
                FUN10(VAR34 + VAR32, VAR32 * 2, VAR32, VAR33 / 2, VAR6, VAR16, VAR7, VAR20);
                VAR4->VAR35[0]->VAR38.VAR39[1] = FUN9(VAR40);
                if (VAR20)
                {
                    if (!VAR21)
                        goto VAR30;
                    VAR4->VAR35[0]->VAR41 = 256;
                    FUN11(VAR21, VAR23, (VAR42 *)VAR4->VAR35[0]->VAR38.VAR39[1], 256);
                }
                else
                {
                    VAR4->VAR35[0]->VAR41 = 4;
                    FUN12(VAR2, (VAR42 *)VAR4->VAR35[0]->VAR38.VAR39[1], 0xffff00);
                }
                VAR4->VAR35[0]->VAR43 = VAR11;
                VAR4->VAR35[0]->VAR44 = VAR12;
                VAR4->VAR35[0]->VAR32 = VAR32;
                VAR4->VAR35[0]->VAR33 = VAR33;
                VAR4->VAR35[0]->VAR45 = VAR46;
                VAR4->VAR35[0]->VAR38.VAR47[0] = VAR32;
                VAR4->VAR35[0]->VAR48 = VAR26 ? VAR49 : 0;
            }
        }
        if (VAR17 < VAR8)
        {
            FUN13(NULL, VAR50, "");
            break;
        }
        if (VAR17 == VAR8)
            break;
        VAR8 = VAR17;
    }
    if (VAR4->VAR37 > 0)
        return VAR26;
VAR30:
    FUN7(VAR4);
    return -1;
}