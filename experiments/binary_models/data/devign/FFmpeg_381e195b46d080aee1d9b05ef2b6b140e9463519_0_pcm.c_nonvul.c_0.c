static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    VAR7 *VAR18;
    const VAR7 *VAR19, *VAR20, *VAR21[VAR22];
    VAR23 *VAR24;
    VAR18 = VAR3;
    VAR19 = VAR8;
    if (VAR2->VAR25 != VAR2->VAR26->VAR27[0])
    {
        FUN2(VAR2, VAR28, "");
        return -1;
    }
    if (VAR2->VAR29 <= 0 || VAR2->VAR29 > VAR22)
    {
        FUN2(VAR2, VAR28, "");
        return -1;
    }
    VAR14 = FUN3(VAR2->VAR30) / 8;
    if (VAR31 == VAR2->VAR30)
    {
        if (VAR2->VAR32 != 20 && VAR2->VAR32 != 24)
        {
            FUN2(VAR2, VAR28, "");
            return FUN4(VAR33);
        }
        VAR14 = VAR2->VAR32 * 2 / 8;
    }
    else if (VAR2->VAR30 == VAR34)
        VAR14 = 5;
    if (VAR14 == 0)
    {
        FUN2(VAR2, VAR28, "");
        return FUN4(VAR33);
    }
    VAR16 = VAR2->VAR29 * VAR14;
    if (VAR16 && VAR9 % VAR16)
    {
        if (VAR9 < VAR16)
        {
            FUN2(VAR2, VAR28, "");
            return -1;
        }
        else
            VAR9 -= VAR9 % VAR16;
    }
    VAR9 = FUN5(VAR9, *VAR4 / 2);
    VAR16 = VAR9 / VAR14;
    switch (VAR2->VAR26->VAR35)
    {
    case VAR36:
        FUN6(32, VAR37, VAR19, VAR18, VAR16, 0, 0x80000000)
        break;
    case VAR38:
        FUN6(32, VAR39, VAR19, VAR18, VAR16, 0, 0x80000000)
        break;
    case VAR40:
        FUN6(32, VAR41, VAR19, VAR18, VAR16, 8, 0)
        break;
    case VAR42:
        FUN6(32, VAR43, VAR19, VAR18, VAR16, 8, 0)
        break;
    case VAR44:
        FUN6(32, VAR41, VAR19, VAR18, VAR16, 8, 0x800000)
        break;
    case VAR45:
        FUN6(32, VAR43, VAR19, VAR18, VAR16, 8, 0x800000)
        break;
    case VAR46:
        for (; VAR16 > 0; VAR16--)
        {
            uint32_t VAR47 = FUN7(&VAR19);
            VAR47 >>= 4;
            FUN8(VAR18, VAR48[(VAR47 >> 8) & 0xff] + (VAR48[VAR47 & 0xff] << 8));
            VAR18 += 2;
        }
        break;
    case VAR49:
        VAR16 /= VAR2->VAR29;
        for (VAR15 = 0; VAR15 < VAR2->VAR29; VAR15++)
            VAR21[VAR15] = &VAR19[VAR15 * VAR16 * 2];
        for (; VAR16 > 0; VAR16--)
            for (VAR15 = 0; VAR15 < VAR2->VAR29; VAR15++)
            {
                FUN8(VAR18, FUN9(&VAR21[VAR15]));
                VAR18 += 2;
            }
        VAR19 = VAR21[VAR2->VAR29 - 1];
        break;
    case VAR50:
        FUN6(16, VAR51, VAR19, VAR18, VAR16, 0, 0x8000)
        break;
    case VAR52:
        FUN6(16, VAR53, VAR19, VAR18, VAR16, 0, 0x8000)
        break;
    case VAR54:
        for (; VAR16 > 0; VAR16--)
        {
            *VAR18++ = *VAR19++ + 128;
        }
        break;
    case VAR55:
        FUN6(64, VAR56, VAR19, VAR18, VAR16, 0, 0)
        break;
    case VAR57:
    case VAR58:
        FUN6(32, VAR37, VAR19, VAR18, VAR16, 0, 0)
        break;
    case VAR59:
        FUN6(16, VAR51, VAR19, VAR18, VAR16, 0, 0)
        break;
    case VAR60:
    case VAR61:
    case VAR62:
    case VAR63:
    case VAR60:
        FUN6(64, VAR64, VAR19, VAR18, VAR16, 0, 0)
        break;
    case VAR61:
    case VAR62:
        FUN6(32, VAR39, VAR19, VAR18, VAR16, 0, 0)
        break;
    case VAR63:
        FUN6(16, VAR53, VAR19, VAR18, VAR16, 0, 0)
        break;
    case VAR55:
    case VAR58:
    case VAR57:
    case VAR59:
    case VAR65:
        memcpy(VAR18, VAR19, VAR16 * VAR14);
        VAR19 += VAR16 * VAR14;
        VAR18 += VAR16 * VAR14;
        break;
    case VAR66:
        for (; VAR16 > 0; VAR16--)
        {
            int VAR67 = *VAR19++;
            if (VAR67 & 128)
                VAR67 -= 128;
            else
                VAR67 = -VAR67;
            FUN8(VAR18, VAR67 << 8);
            VAR18 += 2;
        }
        break;
    case VAR68:
    case VAR69:
        for (; VAR16 > 0; VAR16--)
        {
            FUN8(VAR18, VAR12->VAR70[*VAR19++]);
            VAR18 += 2;
        }
        break;
    case VAR31:
        VAR24 = VAR3;
        VAR16 /= VAR2->VAR29;
        switch (VAR2->VAR32)
        {
        case 20:
            while (VAR16--)
            {
                VAR15 = VAR2->VAR29;
                VAR20 = VAR19 + 4 * VAR15;
                while (VAR15--)
                {
                    *VAR24++ = (FUN10(&VAR19) << 16) + ((*VAR20 & 0xf0) << 8);
                    *VAR24++ = (FUN10(&VAR19) << 16) + ((*VAR20++ & 0x0f) << 12);
                }
                VAR19 = VAR20;
            }
            break;
        case 24:
            while (VAR16--)
            {
                VAR15 = VAR2->VAR29;
                VAR20 = VAR19 + 4 * VAR15;
                while (VAR15--)
                {
                    *VAR24++ = (FUN10(&VAR19) << 16) + ((*VAR20++) << 8);
                    *VAR24++ = (FUN10(&VAR19) << 16) + ((*VAR20++) << 8);
                }
                VAR19 = VAR20;
            }
            break;
        }
        VAR18 = (VAR7 *)VAR24;
        break;
    case VAR34:
        VAR24 = VAR3;
        VAR16 /= VAR2->VAR29;
        for (VAR17 = 0; VAR17 < VAR16; VAR17++)
        {
            for (VAR15 = 0, VAR20 = VAR19 + VAR17 * 5; VAR15 < VAR2->VAR29; VAR15++, VAR20 += VAR16 * 5)
            {
                *VAR24++ = (VAR20[2] << 28) | (VAR20[1] << 20) | (VAR20[0] << 12) | ((VAR20[2] & 0xF) << 8) | VAR20[1];
            }
            for (VAR15 = 0, VAR20 = VAR19 + VAR17 * 5; VAR15 < VAR2->VAR29; VAR15++, VAR20 += VAR16 * 5)
            {
                *VAR24++ = (VAR20[4] << 24) | (VAR20[3] << 16) | ((VAR20[2] & 0xF0) << 8) | (VAR20[4] << 4) | (VAR20[3] >> 4);
            }
        }
        VAR19 += VAR16 * VAR2->VAR29 * 5;
        VAR18 = (VAR7 *)VAR24;
        break;
    default:
        return -1;
    }
    *VAR4 = VAR18 - (VAR7 *)VAR3;
    return VAR19 - VAR8;
}