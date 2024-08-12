static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    VAR14 *VAR16 = &VAR12->VAR15;
    unsigned int VAR17, VAR18;
    int VAR19, VAR20;
    unsigned int VAR21;
    BiCompression VAR22;
    unsigned int VAR23;
    int VAR24, VAR25, VAR26, VAR27;
    uint32_t VAR28[3];
    VAR7 *VAR29;
    int VAR30;
    const VAR7 *VAR31 = VAR8;
    if (VAR9 < 14)
    {
        FUN2(VAR2, VAR32, "", VAR9);
        return -1;
    }
    if (FUN3(&VAR8) != '' || FUN3(&VAR8) != '')
    {
        FUN2(VAR2, VAR32, "");
        return -1;
    }
    VAR17 = FUN4(&VAR8);
    if (VAR9 < VAR17)
    {
        FUN2(VAR2, VAR32, "", VAR9, VAR17);
        VAR17 = VAR9;
    }
    VAR8 += 2;
    VAR8 += 2;
    VAR18 = FUN4(&VAR8);
    VAR23 = FUN4(&VAR8);
    if (VAR23 + 14 > VAR18)
    {
        FUN2(VAR2, VAR32, "", VAR18);
        return -1;
    }
    if (VAR17 == 14 || VAR17 == VAR23 + 14)
        VAR17 = VAR9 - 2;
    if (VAR17 <= VAR18)
    {
        FUN2(VAR2, VAR32, "", VAR17, VAR18);
        return -1;
    }
    switch (VAR23)
    {
    case 40:
    case 64:
    case 108:
    case 124:
        VAR19 = FUN4(&VAR8);
        VAR20 = FUN4(&VAR8);
        break;
    case 12:
        VAR19 = FUN5(&VAR8);
        VAR20 = FUN5(&VAR8);
        break;
    default:
        FUN2(VAR2, VAR32, "");
        return -1;
    }
    if (FUN5(&VAR8) != 1)
    {
        FUN2(VAR2, VAR32, "");
        return -1;
    }
    VAR21 = FUN5(&VAR8);
    if (VAR23 == 40)
        VAR22 = FUN4(&VAR8);
    else
        VAR22 = VAR33;
    if (VAR22 != VAR33 && VAR22 != VAR34 && VAR22 != VAR35 && VAR22 != VAR36)
    {
        FUN2(VAR2, VAR32, "", VAR22);
        return -1;
    }
    if (VAR22 == VAR34)
    {
        VAR8 += 20;
        VAR28[0] = FUN4(&VAR8);
        VAR28[1] = FUN4(&VAR8);
        VAR28[2] = FUN4(&VAR8);
    }
    VAR2->VAR19 = VAR19;
    VAR2->VAR20 = VAR20 > 0 ? VAR20 : -VAR20;
    VAR2->VAR37 = VAR38;
    switch (VAR21)
    {
    case 32:
        if (VAR22 == VAR34)
        {
            VAR28[0] = (VAR28[0] >> 15) & 3;
            VAR28[1] = (VAR28[1] >> 15) & 3;
            VAR28[2] = (VAR28[2] >> 15) & 3;
            if (VAR28[0] + VAR28[1] + VAR28[2] != 3 || VAR28[0] == VAR28[1] || VAR28[0] == VAR28[2] || VAR28[1] == VAR28[2])
            {
                break;
            }
        }
        else
        {
            VAR28[0] = 2;
            VAR28[1] = 1;
            VAR28[2] = 0;
        }
        VAR2->VAR37 = VAR39;
        break;
    case 24:
        VAR2->VAR37 = VAR39;
        break;
    case 16:
        if (VAR22 == VAR33)
            VAR2->VAR37 = VAR40;
        else if (VAR22 == VAR34)
        {
            if (VAR28[0] == 0xF800 && VAR28[1] == 0x07E0 && VAR28[2] == 0x001F)
                VAR2->VAR37 = VAR41;
            else if (VAR28[0] == 0x7C00 && VAR28[1] == 0x03E0 && VAR28[2] == 0x001F)
                VAR2->VAR37 = VAR40;
            else if (VAR28[0] == 0x0F00 && VAR28[1] == 0x00F0 && VAR28[2] == 0x000F)
                VAR2->VAR37 = VAR42;
            else
            {
                FUN2(VAR2, VAR32, "", VAR28[0], VAR28[1], VAR28[2]);
                return FUN6(VAR43);
            }
        }
        break;
    case 8:
        if (VAR18 - VAR23 - 14 > 0)
            VAR2->VAR37 = VAR44;
        else
            VAR2->VAR37 = VAR45;
        break;
    case 1:
    case 4:
        if (VAR18 - VAR23 - 14 > 0)
        {
            VAR2->VAR37 = VAR44;
        }
        else
        {
            FUN2(VAR2, VAR32, "", 1 << VAR21);
            return -1;
        }
        break;
    default:
        FUN2(VAR2, VAR32, "", VAR21);
        return -1;
    }
    if (VAR2->VAR37 == VAR38)
    {
        FUN2(VAR2, VAR32, "");
        return -1;
    }
    if (VAR16->VAR3[0])
        VAR2->FUN7(VAR2, VAR16);
    VAR16->VAR46 = 0;
    if (VAR2->FUN8(VAR2, VAR16) < 0)
    {
        FUN2(VAR2, VAR32, "");
        return -1;
    }
    VAR16->VAR47 = VAR48;
    VAR16->VAR49 = 1;
    VAR8 = VAR31 + VAR18;
    VAR30 = VAR9 - VAR18;
    VAR26 = ((VAR2->VAR19 * VAR21) / 8 + 3) & ~3;
    if (VAR26 * VAR2->VAR20 > VAR30 && VAR22 != VAR35 && VAR22 != VAR36)
    {
        FUN2(VAR2, VAR32, "", VAR30, VAR26 * VAR2->VAR20);
        return -1;
    }
    if (VAR22 == VAR35 || VAR22 == VAR36)
        memset(VAR16->VAR3[0], 0, VAR2->VAR20 * VAR16->VAR27[0]);
    if (VAR21 == 4 || VAR21 == 8)
        memset(VAR16->VAR3[1], 0, 1024);
    if (VAR20 > 0)
    {
        VAR29 = VAR16->VAR3[0] + (VAR2->VAR20 - 1) * VAR16->VAR27[0];
        VAR27 = -VAR16->VAR27[0];
    }
    else
    {
        VAR29 = VAR16->VAR3[0];
        VAR27 = VAR16->VAR27[0];
    }
    if (VAR2->VAR37 == VAR44)
    {
        int VAR50 = 1 << VAR21;
        if (VAR23 >= 36)
        {
            int VAR51;
            VAR8 = VAR31 + 46;
            VAR51 = FUN4(&VAR8);
            if (VAR51 < 0 || VAR51 > (1 << VAR21))
            {
                FUN2(VAR2, VAR32, "", VAR51, VAR21);
            }
            else if (VAR51)
            {
                VAR50 = VAR51;
            }
        }
        VAR8 = VAR31 + 14 + VAR23;
        if ((VAR18 - VAR23 - 14) < (VAR50 << 2))
        {
            for (VAR24 = 0; VAR24 < VAR50; VAR24++)
                ((VAR52 *)VAR16->VAR3[1])[VAR24] = FUN9(&VAR8);
        }
        else
        {
            for (VAR24 = 0; VAR24 < VAR50; VAR24++)
                ((VAR52 *)VAR16->VAR3[1])[VAR24] = FUN4(&VAR8);
        }
        VAR8 = VAR31 + VAR18;
    }
    if (VAR22 == VAR35 || VAR22 == VAR36)
    {
        if (VAR20 < 0)
        {
            VAR16->VAR3[0] += VAR16->VAR27[0] * (VAR2->VAR20 - 1);
            VAR16->VAR27[0] = -VAR16->VAR27[0];
        }
        FUN10(VAR2, (VAR53 *)VAR16, VAR21, VAR8, VAR30);
        if (VAR20 < 0)
        {
            VAR16->VAR3[0] += VAR16->VAR27[0] * (VAR2->VAR20 - 1);
            VAR16->VAR27[0] = -VAR16->VAR27[0];
        }
    }
    else
    {
        switch (VAR21)
        {
        case 1:
            for (VAR24 = 0; VAR24 < VAR2->VAR20; VAR24++)
            {
                int VAR25;
                for (VAR25 = 0; VAR25 < VAR26; VAR25++)
                {
                    VAR29[VAR25 * 8 + 0] = VAR8[VAR25] >> 7;
                    VAR29[VAR25 * 8 + 1] = (VAR8[VAR25] >> 6) & 1;
                    VAR29[VAR25 * 8 + 2] = (VAR8[VAR25] >> 5) & 1;
                    VAR29[VAR25 * 8 + 3] = (VAR8[VAR25] >> 4) & 1;
                    VAR29[VAR25 * 8 + 4] = (VAR8[VAR25] >> 3) & 1;
                    VAR29[VAR25 * 8 + 5] = (VAR8[VAR25] >> 2) & 1;
                    VAR29[VAR25 * 8 + 6] = (VAR8[VAR25] >> 1) & 1;
                    VAR29[VAR25 * 8 + 7] = VAR8[VAR25] & 1;
                }
                VAR8 += VAR26;
                VAR29 += VAR27;
            }
            break;
        case 8:
        case 24:
            for (VAR24 = 0; VAR24 < VAR2->VAR20; VAR24++)
            {
                memcpy(VAR29, VAR8, VAR26);
                VAR8 += VAR26;
                VAR29 += VAR27;
            }
            break;
        case 4:
            for (VAR24 = 0; VAR24 < VAR2->VAR20; VAR24++)
            {
                int VAR25;
                for (VAR25 = 0; VAR25 < VAR26; VAR25++)
                {
                    VAR29[VAR25 * 2 + 0] = (VAR8[VAR25] >> 4) & 0xF;
                    VAR29[VAR25 * 2 + 1] = VAR8[VAR25] & 0xF;
                }
                VAR8 += VAR26;
                VAR29 += VAR27;
            }
            break;
        case 16:
            for (VAR24 = 0; VAR24 < VAR2->VAR20; VAR24++)
            {
                const VAR54 *VAR55 = (const VAR54 *)VAR8;
                VAR54 *VAR56 = (VAR54 *)VAR29;
                for (VAR25 = 0; VAR25 < VAR2->VAR19; VAR25++)
                    *VAR56++ = FUN11(*VAR55++);
                VAR8 += VAR26;
                VAR29 += VAR27;
            }
            break;
        case 32:
            for (VAR24 = 0; VAR24 < VAR2->VAR20; VAR24++)
            {
                const VAR7 *VAR55 = VAR8;
                VAR7 *VAR56 = VAR29;
                for (VAR25 = 0; VAR25 < VAR2->VAR19; VAR25++)
                {
                    VAR56[0] = VAR55[VAR28[2]];
                    VAR56[1] = VAR55[VAR28[1]];
                    VAR56[2] = VAR55[VAR28[0]];
                    VAR56 += 3;
                    VAR55 += 4;
                }
                VAR8 += VAR26;
                VAR29 += VAR27;
            }
            break;
        default:
            FUN2(VAR2, VAR32, "");
            return -1;
        }
    }
    *VAR15 = VAR12->VAR15;
    *VAR4 = sizeof(VAR53);
    return VAR9;
}