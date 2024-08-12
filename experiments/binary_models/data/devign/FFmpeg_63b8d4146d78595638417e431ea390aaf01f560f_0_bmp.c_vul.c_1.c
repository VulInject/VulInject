static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR3;
    unsigned int VAR13, VAR14;
    int VAR15, VAR16;
    unsigned int VAR17;
    BiCompression VAR18;
    unsigned int VAR19;
    int VAR20, VAR21, VAR22, VAR23, VAR24;
    uint32_t VAR25[3] = {0};
    uint32_t VAR26 = 0;
    VAR7 *VAR27;
    int VAR28;
    const VAR7 *VAR29 = VAR8;
    GetByteContext VAR30;
    if (VAR9 < 14)
    {
        FUN2(VAR2, VAR31, "", VAR9);
        return VAR32;
    }
    if (FUN3(&VAR8) != '' || FUN3(&VAR8) != '')
    {
        FUN2(VAR2, VAR31, "");
        return VAR32;
    }
    VAR13 = FUN4(&VAR8);
    if (VAR9 < VAR13)
    {
        FUN2(VAR2, VAR31, "", VAR9, VAR13);
        VAR13 = VAR9;
    }
    VAR8 += 2;
    VAR8 += 2;
    VAR14 = FUN4(&VAR8);
    VAR19 = FUN4(&VAR8);
    if (VAR19 + 14LL > VAR14)
    {
        FUN2(VAR2, VAR31, "", VAR14);
        return VAR32;
    }
    if (VAR13 == 14 || VAR13 == VAR19 + 14)
        VAR13 = VAR9 - 2;
    if (VAR13 <= VAR14)
    {
        FUN2(VAR2, VAR31, "", VAR13, VAR14);
        return VAR32;
    }
    switch (VAR19)
    {
    case 40:
    case 56:
    case 64:
    case 108:
    case 124:
        VAR15 = FUN4(&VAR8);
        VAR16 = FUN4(&VAR8);
        break;
    case 12:
        VAR15 = FUN5(&VAR8);
        VAR16 = FUN5(&VAR8);
        break;
    default:
        FUN6(VAR2, "", VAR19);
        return VAR33;
    }
    if (FUN5(&VAR8) != 1)
    {
        FUN2(VAR2, VAR31, "");
        return VAR32;
    }
    VAR17 = FUN5(&VAR8);
    if (VAR19 >= 40)
        VAR18 = FUN4(&VAR8);
    else
        VAR18 = VAR34;
    if (VAR18 != VAR34 && VAR18 != VAR35 && VAR18 != VAR36 && VAR18 != VAR37)
    {
        FUN2(VAR2, VAR31, "", VAR18);
        return VAR32;
    }
    if (VAR18 == VAR35)
    {
        VAR8 += 20;
        VAR25[0] = FUN4(&VAR8);
        VAR25[1] = FUN4(&VAR8);
        VAR25[2] = FUN4(&VAR8);
        if (VAR19 > 40)
            VAR26 = FUN4(&VAR8);
    }
    VAR2->VAR15 = VAR15;
    VAR2->VAR16 = VAR16 > 0 ? VAR16 : -(unsigned)VAR16;
    VAR2->VAR38 = VAR39;
    switch (VAR17)
    {
    case 32:
        if (VAR18 == VAR35)
        {
            if (VAR25[0] == 0xFF000000 && VAR25[1] == 0x00FF0000 && VAR25[2] == 0x0000FF00)
                VAR2->VAR38 = VAR26 ? VAR40 : VAR41;
            else if (VAR25[0] == 0x00FF0000 && VAR25[1] == 0x0000FF00 && VAR25[2] == 0x000000FF)
                VAR2->VAR38 = VAR26 ? VAR42 : VAR43;
            else if (VAR25[0] == 0x0000FF00 && VAR25[1] == 0x00FF0000 && VAR25[2] == 0xFF000000)
                VAR2->VAR38 = VAR26 ? VAR44 : VAR45;
            else if (VAR25[0] == 0x000000FF && VAR25[1] == 0x0000FF00 && VAR25[2] == 0x00FF0000)
                VAR2->VAR38 = VAR26 ? VAR46 : VAR47;
            else
            {
                FUN2(VAR2, VAR31, ""
                                            "" VAR48 "" VAR48 "" VAR48 "",
                       VAR25[0], VAR25[1], VAR25[2]);
                return FUN7(VAR49);
            }
        }
        else
        {
            VAR2->VAR38 = VAR42;
        }
        break;
    case 24:
        VAR2->VAR38 = VAR50;
        break;
    case 16:
        if (VAR18 == VAR34)
            VAR2->VAR38 = VAR51;
        else if (VAR18 == VAR35)
        {
            if (VAR25[0] == 0xF800 && VAR25[1] == 0x07E0 && VAR25[2] == 0x001F)
                VAR2->VAR38 = VAR52;
            else if (VAR25[0] == 0x7C00 && VAR25[1] == 0x03E0 && VAR25[2] == 0x001F)
                VAR2->VAR38 = VAR51;
            else if (VAR25[0] == 0x0F00 && VAR25[1] == 0x00F0 && VAR25[2] == 0x000F)
                VAR2->VAR38 = VAR53;
            else
            {
                FUN2(VAR2, VAR31, "" VAR48 "" VAR48 "" VAR48 "", VAR25[0], VAR25[1], VAR25[2]);
                return FUN7(VAR49);
            }
        }
        break;
    case 8:
        if (VAR14 - VAR19 - 14 > 0)
            VAR2->VAR38 = VAR54;
        else
            VAR2->VAR38 = VAR55;
        break;
    case 1:
    case 4:
        if (VAR14 - VAR19 - 14 > 0)
        {
            VAR2->VAR38 = VAR54;
        }
        else
        {
            FUN2(VAR2, VAR31, "", 1 << VAR17);
            return VAR32;
        }
        break;
    default:
        FUN2(VAR2, VAR31, "", VAR17);
        return VAR32;
    }
    if (VAR2->VAR38 == VAR39)
    {
        FUN2(VAR2, VAR31, "");
        return VAR32;
    }
    if ((VAR24 = FUN8(VAR2, VAR12, 0)) < 0)
        return VAR24;
    VAR12->VAR56 = VAR57;
    VAR12->VAR58 = 1;
    VAR8 = VAR29 + VAR14;
    VAR28 = VAR9 - VAR14;
    VAR22 = ((VAR2->VAR15 * VAR17 + 31) / 8) & ~3;
    if (VAR22 * VAR2->VAR16 > VAR28 && VAR18 != VAR36 && VAR18 != VAR37)
    {
        VAR22 = (VAR2->VAR15 * VAR17 + 7) / 8;
        if (VAR22 * VAR2->VAR16 > VAR28)
        {
            FUN2(VAR2, VAR31, "", VAR28, VAR22 * VAR2->VAR16);
            return VAR32;
        }
        FUN2(VAR2, VAR31, "");
    }
    if (VAR18 == VAR36 || VAR18 == VAR37)
        memset(VAR12->VAR3[0], 0, VAR2->VAR16 * VAR12->VAR23[0]);
    if (VAR16 > 0)
    {
        VAR27 = VAR12->VAR3[0] + (VAR2->VAR16 - 1) * VAR12->VAR23[0];
        VAR23 = -VAR12->VAR23[0];
    }
    else
    {
        VAR27 = VAR12->VAR3[0];
        VAR23 = VAR12->VAR23[0];
    }
    if (VAR2->VAR38 == VAR54)
    {
        int VAR59 = 1 << VAR17;
        memset(VAR12->VAR3[1], 0, 1024);
        if (VAR19 >= 36)
        {
            int VAR60;
            VAR8 = VAR29 + 46;
            VAR60 = FUN4(&VAR8);
            if (VAR60 < 0 || VAR60 > (1 << VAR17))
            {
                FUN2(VAR2, VAR31, "", VAR60, VAR17);
            }
            else if (VAR60)
            {
                VAR59 = VAR60;
            }
        }
        else
        {
            VAR59 = FUN9(256, (VAR14 - VAR19 - 14) / 3);
        }
        VAR8 = VAR29 + 14 + VAR19;
        if ((VAR14 - VAR19 - 14) < (VAR59 << 2))
        {
            if ((VAR14 - VAR19 - 14) < VAR59 * 3)
            {
                FUN2(VAR2, VAR31, "");
                return VAR32;
            }
            for (VAR20 = 0; VAR20 < VAR59; VAR20++)
                ((VAR61 *)VAR12->VAR3[1])[VAR20] = (0xFFU << 24) | FUN10(&VAR8);
        }
        else
        {
            for (VAR20 = 0; VAR20 < VAR59; VAR20++)
                ((VAR61 *)VAR12->VAR3[1])[VAR20] = 0xFFU << 24 | FUN4(&VAR8);
        }
        VAR8 = VAR29 + VAR14;
    }
    if (VAR18 == VAR36 || VAR18 == VAR37)
    {
        if (VAR18 == VAR37 && VAR16 < 0)
        {
            VAR12->VAR3[0] += VAR12->VAR23[0] * (VAR2->VAR16 - 1);
            VAR12->VAR23[0] = -VAR12->VAR23[0];
        }
        FUN11(&VAR30, VAR8, VAR28);
        FUN12(VAR2, VAR12, VAR17, &VAR30);
        if (VAR16 < 0)
        {
            VAR12->VAR3[0] += VAR12->VAR23[0] * (VAR2->VAR16 - 1);
            VAR12->VAR23[0] = -VAR12->VAR23[0];
        }
    }
    else
    {
        switch (VAR17)
        {
        case 1:
            for (VAR20 = 0; VAR20 < VAR2->VAR16; VAR20++)
            {
                int VAR21;
                for (VAR21 = 0; VAR21 < VAR22; VAR21++)
                {
                    VAR27[VAR21 * 8 + 0] = VAR8[VAR21] >> 7;
                    VAR27[VAR21 * 8 + 1] = (VAR8[VAR21] >> 6) & 1;
                    VAR27[VAR21 * 8 + 2] = (VAR8[VAR21] >> 5) & 1;
                    VAR27[VAR21 * 8 + 3] = (VAR8[VAR21] >> 4) & 1;
                    VAR27[VAR21 * 8 + 4] = (VAR8[VAR21] >> 3) & 1;
                    VAR27[VAR21 * 8 + 5] = (VAR8[VAR21] >> 2) & 1;
                    VAR27[VAR21 * 8 + 6] = (VAR8[VAR21] >> 1) & 1;
                    VAR27[VAR21 * 8 + 7] = VAR8[VAR21] & 1;
                }
                VAR8 += VAR22;
                VAR27 += VAR23;
            }
            break;
        case 8:
        case 24:
        case 32:
            for (VAR20 = 0; VAR20 < VAR2->VAR16; VAR20++)
            {
                memcpy(VAR27, VAR8, VAR22);
                VAR8 += VAR22;
                VAR27 += VAR23;
            }
            break;
        case 4:
            for (VAR20 = 0; VAR20 < VAR2->VAR16; VAR20++)
            {
                int VAR21;
                for (VAR21 = 0; VAR21 < VAR22; VAR21++)
                {
                    VAR27[VAR21 * 2 + 0] = (VAR8[VAR21] >> 4) & 0xF;
                    VAR27[VAR21 * 2 + 1] = VAR8[VAR21] & 0xF;
                }
                VAR8 += VAR22;
                VAR27 += VAR23;
            }
            break;
        case 16:
            for (VAR20 = 0; VAR20 < VAR2->VAR16; VAR20++)
            {
                const VAR62 *VAR63 = (const VAR62 *)VAR8;
                VAR62 *VAR64 = (VAR62 *)VAR27;
                for (VAR21 = 0; VAR21 < VAR2->VAR15; VAR21++)
                    *VAR64++ = FUN13(*VAR63++);
                VAR8 += VAR22;
                VAR27 += VAR23;
            }
            break;
        default:
            FUN2(VAR2, VAR31, "");
            return VAR32;
        }
    }
    if (VAR2->VAR38 == VAR42)
    {
        for (VAR20 = 0; VAR20 < VAR2->VAR16; VAR20++)
        {
            int VAR21;
            VAR7 *VAR27 = VAR12->VAR3[0] + VAR12->VAR23[0] * VAR20 + 3;
            for (VAR21 = 0; VAR21 < VAR2->VAR15; VAR21++)
            {
                if (VAR27[4 * VAR21])
                    break;
            }
            if (VAR21 < VAR2->VAR15)
                break;
        }
        if (VAR20 == VAR2->VAR16)
            VAR2->VAR38 = VAR12->VAR65 = VAR43;
    }
    *VAR4 = 1;
    return VAR9;
}