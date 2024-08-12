static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR3;
    VAR11 *VAR13 = &VAR9->VAR12;
    unsigned int VAR14, VAR15;
    int VAR16, VAR17;
    unsigned int VAR18;
    BiCompression VAR19;
    unsigned int VAR20;
    int VAR21, VAR22, VAR23, VAR24;
    uint32_t VAR25[3];
    VAR5 *VAR26;
    int VAR27;
    const VAR5 *VAR28 = VAR6;
    if (VAR7 < 14)
    {
        FUN2(VAR2, VAR29, "", VAR7);
        return -1;
    }
    if (FUN3(&VAR6) != '' || FUN3(&VAR6) != '')
    {
        FUN2(VAR2, VAR29, "");
        return -1;
    }
    VAR14 = FUN4(&VAR6);
    if (VAR7 < VAR14)
    {
        FUN2(VAR2, VAR29, "", VAR7, VAR14);
        return -1;
    }
    VAR6 += 2;
    VAR6 += 2;
    VAR15 = FUN4(&VAR6);
    VAR20 = FUN4(&VAR6);
    if (VAR20 + 14 > VAR15)
    {
        FUN2(VAR2, VAR29, "", VAR15);
        return -1;
    }
    if (VAR14 == 14 || VAR14 == VAR20 + 14)
        VAR14 = VAR7 - 2;
    if (VAR14 <= VAR15)
    {
        FUN2(VAR2, VAR29, "", VAR14, VAR15);
        return -1;
    }
    switch (VAR20)
    {
    case 40:
    case 64:
    case 108:
    case 124:
        VAR16 = FUN4(&VAR6);
        VAR17 = FUN4(&VAR6);
        break;
    case 12:
        VAR16 = FUN5(&VAR6);
        VAR17 = FUN5(&VAR6);
        break;
    default:
        FUN2(VAR2, VAR29, "");
        return -1;
    }
    if (FUN5(&VAR6) != 1)
    {
        FUN2(VAR2, VAR29, "");
        return -1;
    }
    VAR18 = FUN5(&VAR6);
    if (VAR20 == 40)
        VAR19 = FUN4(&VAR6);
    else
        VAR19 = VAR30;
    if (VAR19 != VAR30 && VAR19 != VAR31 && VAR19 != VAR32 && VAR19 != VAR33)
    {
        FUN2(VAR2, VAR29, "", VAR19);
        return -1;
    }
    if (VAR19 == VAR31)
    {
        VAR6 += 20;
        VAR25[0] = FUN4(&VAR6);
        VAR25[1] = FUN4(&VAR6);
        VAR25[2] = FUN4(&VAR6);
    }
    VAR2->VAR16 = VAR16;
    VAR2->VAR17 = VAR17 > 0 ? VAR17 : -VAR17;
    VAR2->VAR34 = VAR35;
    switch (VAR18)
    {
    case 32:
        if (VAR19 == VAR31)
        {
            VAR25[0] = (VAR25[0] >> 15) & 3;
            VAR25[1] = (VAR25[1] >> 15) & 3;
            VAR25[2] = (VAR25[2] >> 15) & 3;
            if (VAR25[0] + VAR25[1] + VAR25[2] != 3 || VAR25[0] == VAR25[1] || VAR25[0] == VAR25[2] || VAR25[1] == VAR25[2])
            {
                break;
            }
        }
        else
        {
            VAR25[0] = 2;
            VAR25[1] = 1;
            VAR25[2] = 0;
        }
        VAR2->VAR34 = VAR36;
        break;
    case 24:
        VAR2->VAR34 = VAR36;
        break;
    case 16:
        if (VAR19 == VAR30)
            VAR2->VAR34 = VAR37;
        if (VAR19 == VAR31)
            VAR2->VAR34 = VAR25[1] == 0x07E0 ? VAR38 : VAR37;
        break;
    case 8:
        if (VAR15 - VAR20 - 14 > 0)
            VAR2->VAR34 = VAR39;
        else
            VAR2->VAR34 = VAR40;
        break;
    case 4:
        if (VAR15 - VAR20 - 14 > 0)
        {
            VAR2->VAR34 = VAR39;
        }
        else
        {
            FUN2(VAR2, VAR29, "");
            return -1;
        }
        break;
    case 1:
        VAR2->VAR34 = VAR41;
        break;
    default:
        FUN2(VAR2, VAR29, "", VAR18);
        return -1;
    }
    if (VAR2->VAR34 == VAR35)
    {
        FUN2(VAR2, VAR29, "");
        return -1;
    }
    if (VAR13->VAR3[0])
        VAR2->FUN6(VAR2, VAR13);
    VAR13->VAR42 = 0;
    if (VAR2->FUN7(VAR2, VAR13) < 0)
    {
        FUN2(VAR2, VAR29, "");
        return -1;
    }
    VAR13->VAR43 = VAR44;
    VAR13->VAR45 = 1;
    VAR6 = VAR28 + VAR15;
    VAR27 = VAR7 - VAR15;
    VAR23 = ((VAR2->VAR16 * VAR18) / 8 + 3) & ~3;
    if (VAR23 * VAR2->VAR17 > VAR27 && VAR19 != VAR32 && VAR19 != VAR33)
    {
        FUN2(VAR2, VAR29, "", VAR27, VAR23 * VAR2->VAR17);
        return -1;
    }
    if (VAR19 == VAR32 || VAR19 == VAR33)
        memset(VAR13->VAR3[0], 0, VAR2->VAR17 * VAR13->VAR24[0]);
    if (VAR18 == 4 || VAR18 == 8)
        memset(VAR13->VAR3[1], 0, 1024);
    if (VAR17 > 0)
    {
        VAR26 = VAR13->VAR3[0] + (VAR2->VAR17 - 1) * VAR13->VAR24[0];
        VAR24 = -VAR13->VAR24[0];
    }
    else
    {
        VAR26 = VAR13->VAR3[0];
        VAR24 = VAR13->VAR24[0];
    }
    if (VAR2->VAR34 == VAR39)
    {
        VAR6 = VAR28 + 14 + VAR20;
        if ((VAR15 - VAR20 - 14) >> VAR18 < 4)
        {
            for (VAR21 = 0; VAR21 < (1 << VAR18); VAR21++)
                ((VAR46 *)VAR13->VAR3[1])[VAR21] = FUN8(&VAR6);
        }
        else
        {
            for (VAR21 = 0; VAR21 < (1 << VAR18); VAR21++)
                ((VAR46 *)VAR13->VAR3[1])[VAR21] = FUN4(&VAR6);
        }
        VAR6 = VAR28 + VAR15;
    }
    if (VAR19 == VAR32 || VAR19 == VAR33)
    {
        FUN9(VAR2, VAR13, VAR18, VAR6, VAR27);
    }
    else
    {
        switch (VAR18)
        {
        case 1:
            for (VAR21 = 0; VAR21 < VAR2->VAR17; VAR21++)
            {
                memcpy(VAR26, VAR6, VAR23);
                VAR6 += VAR23;
                VAR26 += VAR24;
            }
            break;
        case 4:
            for (VAR21 = 0; VAR21 < VAR2->VAR17; VAR21++)
            {
                int VAR22;
                for (VAR22 = 0; VAR22 < VAR23; VAR22++)
                {
                    VAR26[VAR22 * 2 + 0] = (VAR6[VAR22] >> 4) & 0xF;
                    VAR26[VAR22 * 2 + 1] = VAR6[VAR22] & 0xF;
                }
                VAR6 += VAR23;
                VAR26 += VAR24;
            }
            break;
        case 8:
            for (VAR21 = 0; VAR21 < VAR2->VAR17; VAR21++)
            {
                memcpy(VAR26, VAR6, VAR2->VAR16);
                VAR6 += VAR23;
                VAR26 += VAR24;
            }
            break;
        case 24:
            for (VAR21 = 0; VAR21 < VAR2->VAR17; VAR21++)
            {
                memcpy(VAR26, VAR6, VAR2->VAR16 * (VAR18 >> 3));
                VAR6 += VAR23;
                VAR26 += VAR24;
            }
            break;
        case 16:
            for (VAR21 = 0; VAR21 < VAR2->VAR17; VAR21++)
            {
                const VAR47 *VAR48 = (const VAR47 *)VAR6;
                VAR47 *VAR49 = (VAR47 *)VAR26;
                for (VAR22 = 0; VAR22 < VAR2->VAR16; VAR22++)
                    *VAR49++ = FUN10(*VAR48++);
                VAR6 += VAR23;
                VAR26 += VAR24;
            }
            break;
        case 32:
            for (VAR21 = 0; VAR21 < VAR2->VAR17; VAR21++)
            {
                const VAR5 *VAR48 = VAR6;
                VAR5 *VAR49 = VAR26;
                for (VAR22 = 0; VAR22 < VAR2->VAR16; VAR22++)
                {
                    VAR49[0] = VAR48[VAR25[2]];
                    VAR49[1] = VAR48[VAR25[1]];
                    VAR49[2] = VAR48[VAR25[0]];
                    VAR49 += 3;
                    VAR48 += 4;
                }
                VAR6 += VAR23;
                VAR26 += VAR24;
            }
            break;
        default:
            FUN2(VAR2, VAR29, "");
            return -1;
        }
    }
    *VAR12 = VAR9->VAR12;
    *VAR4 = sizeof(VAR50);
    return VAR7;
}