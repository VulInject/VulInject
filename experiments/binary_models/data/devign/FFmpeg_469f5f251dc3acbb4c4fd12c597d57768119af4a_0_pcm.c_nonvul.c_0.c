static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13;
    short *VAR14;
    const VAR5 *VAR15, *VAR16, *VAR17[VAR18];
    VAR5 *VAR19;
    VAR20 *VAR21;
    VAR22 *VAR23;
    VAR24 *VAR25;
    VAR26 *VAR27;
    VAR28 *VAR29;
    VAR14 = VAR3;
    VAR15 = VAR6;
    if (VAR2->VAR30 != VAR2->VAR31->VAR32[0])
    {
        FUN2(VAR2, VAR33, "");
        return -1;
    }
    if (VAR2->VAR34 <= 0 || VAR2->VAR34 > VAR18)
    {
        FUN2(VAR2, VAR33, "");
        return -1;
    }
    VAR11 = FUN3(VAR2->VAR35) / 8;
    if (VAR36 == VAR2->VAR35)
        VAR11 = VAR2->VAR37 * 2 / 8;
    VAR13 = VAR2->VAR34 * VAR11;
    if (VAR13 && VAR7 % VAR13)
    {
        FUN2(VAR2, VAR33, "");
        return -1;
    }
    VAR7 = FUN4(VAR7, *VAR4 / 2);
    *VAR4 = 0;
    VAR13 = VAR7 / VAR11;
    switch (VAR2->VAR31->VAR38)
    {
    case VAR39:
        FUN5(VAR28, VAR40, VAR15, VAR14, VAR13, 0, 0x80000000)
        break;
    case VAR41:
        FUN5(VAR28, VAR42, VAR15, VAR14, VAR13, 0, 0x80000000)
        break;
    case VAR43:
        FUN5(VAR22, VAR44, VAR15, VAR14, VAR13, 8, 0)
        break;
    case VAR45:
        FUN5(VAR22, VAR46, VAR15, VAR14, VAR13, 8, 0)
        break;
    case VAR47:
        FUN5(VAR28, VAR44, VAR15, VAR14, VAR13, 8, 0x800000)
        break;
    case VAR48:
        FUN5(VAR28, VAR46, VAR15, VAR14, VAR13, 8, 0x800000)
        break;
    case VAR49:
        for (; VAR13 > 0; VAR13--)
        {
            uint32_t VAR50 = FUN6(&VAR15);
            VAR50 >>= 4;
            *VAR14++ = VAR51[(VAR50 >> 8) & 0xff] + (VAR51[VAR50 & 0xff] << 8);
        }
        break;
    case VAR52:
        VAR13 /= VAR2->VAR34;
        for (VAR12 = 0; VAR12 < VAR2->VAR34; VAR12++)
            VAR17[VAR12] = &VAR15[VAR12 * VAR13 * 2];
        for (; VAR13 > 0; VAR13--)
            for (VAR12 = 0; VAR12 < VAR2->VAR34; VAR12++)
                *VAR14++ = FUN7(&VAR17[VAR12]);
        VAR15 = VAR17[VAR2->VAR34 - 1];
        break;
    case VAR53:
        FUN5(VAR26, VAR54, VAR15, VAR14, VAR13, 0, 0x8000)
        break;
    case VAR55:
        FUN5(VAR26, VAR56, VAR15, VAR14, VAR13, 0, 0x8000)
        break;
    case VAR57:
        VAR19 = (VAR5 *)VAR14;
        for (; VAR13 > 0; VAR13--)
        {
            *VAR19++ = *VAR15++ + 128;
        }
        VAR14 = (short *)VAR19;
        break;
    case VAR58:
        FUN5(VAR24, VAR59, VAR15, VAR14, VAR13, 0, 0)
        break;
    case VAR60:
    case VAR61:
        FUN5(VAR22, VAR40, VAR15, VAR14, VAR13, 0, 0)
        break;
    case VAR62:
        FUN5(VAR20, VAR54, VAR15, VAR14, VAR13, 0, 0)
        break;
    case VAR63:
    case VAR64:
    case VAR65:
    case VAR66:
    case VAR63:
        FUN5(VAR24, VAR67, VAR15, VAR14, VAR13, 0, 0)
        break;
    case VAR64:
    case VAR65:
        FUN5(VAR22, VAR42, VAR15, VAR14, VAR13, 0, 0)
        break;
    case VAR66:
        FUN5(VAR20, VAR56, VAR15, VAR14, VAR13, 0, 0)
        break;
    case VAR58:
    case VAR61:
    case VAR60:
    case VAR62:
    case VAR68:
        memcpy(VAR14, VAR15, VAR13 * VAR11);
        VAR15 += VAR13 * VAR11;
        VAR14 = (short *)((VAR5 *)VAR3 + VAR13 * VAR11);
        break;
    case VAR69:
        for (; VAR13 > 0; VAR13--)
        {
            int VAR70 = *VAR15++;
            if (VAR70 & 128)
                VAR70 -= 128;
            else
                VAR70 = -VAR70;
            *VAR14++ = VAR70 << 8;
        }
        break;
    case VAR71:
    case VAR72:
        for (; VAR13 > 0; VAR13--)
        {
            *VAR14++ = VAR9->VAR73[*VAR15++];
        }
        break;
    case VAR36:
        VAR23 = VAR3;
        VAR13 /= VAR2->VAR34;
        switch (VAR2->VAR37)
        {
        case 20:
            while (VAR13--)
            {
                VAR12 = VAR2->VAR34;
                VAR16 = VAR15 + 4 * VAR12;
                while (VAR12--)
                {
                    *VAR23++ = (FUN8(&VAR15) << 16) + ((*VAR16 & 0xf0) << 8);
                    *VAR23++ = (FUN8(&VAR15) << 16) + ((*VAR16++ & 0x0f) << 12);
                }
                VAR15 = VAR16;
            }
            break;
        case 24:
            while (VAR13--)
            {
                VAR12 = VAR2->VAR34;
                VAR16 = VAR15 + 4 * VAR12;
                while (VAR12--)
                {
                    *VAR23++ = (FUN8(&VAR15) << 16) + ((*VAR16++) << 8);
                    *VAR23++ = (FUN8(&VAR15) << 16) + ((*VAR16++) << 8);
                }
                VAR15 = VAR16;
            }
            break;
        default:
            FUN2(VAR2, VAR33, "");
            return -1;
            break;
        }
        VAR14 = (short *)VAR23;
        break;
    default:
        return -1;
    }
    *VAR4 = (VAR5 *)VAR14 - (VAR5 *)VAR3;
    return VAR15 - VAR6;
}