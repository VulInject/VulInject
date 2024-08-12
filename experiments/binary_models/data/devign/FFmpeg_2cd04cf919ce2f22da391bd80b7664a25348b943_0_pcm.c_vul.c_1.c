static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13;
    short *VAR14;
    const VAR5 *VAR15, *VAR16[VAR17];
    VAR5 *VAR18;
    VAR19 *VAR20;
    VAR21 *VAR22;
    VAR23 *VAR24;
    VAR25 *VAR26;
    VAR27 *VAR28;
    VAR14 = VAR3;
    VAR15 = VAR6;
    if (VAR2->VAR29 != VAR2->VAR30->VAR31[0])
    {
        FUN2(VAR2, VAR32, "");
        return -1;
    }
    if (VAR2->VAR33 <= 0 || VAR2->VAR33 > VAR17)
    {
        FUN2(VAR2, VAR32, "");
        return -1;
    }
    VAR11 = FUN3(VAR2->VAR34) / 8;
    VAR13 = VAR2->VAR33 * VAR11;
    if (VAR35 == VAR2->VAR34)
        VAR13 = 2 * VAR2->VAR33 * VAR2->VAR36 / 8;
    if (VAR13 && VAR7 % VAR13)
    {
        FUN2(VAR2, VAR32, "");
        return -1;
    }
    VAR7 = FUN4(VAR7, *VAR4 / 2);
    *VAR4 = 0;
    VAR13 = VAR7 / VAR11;
    switch (VAR2->VAR30->VAR37)
    {
    case VAR38:
        FUN5(VAR27, VAR39, VAR15, VAR14, VAR13, 0, 0x80000000)
        break;
    case VAR40:
        FUN5(VAR27, VAR41, VAR15, VAR14, VAR13, 0, 0x80000000)
        break;
    case VAR42:
        FUN5(VAR21, VAR43, VAR15, VAR14, VAR13, 8, 0)
        break;
    case VAR44:
        FUN5(VAR21, VAR45, VAR15, VAR14, VAR13, 8, 0)
        break;
    case VAR46:
        FUN5(VAR27, VAR43, VAR15, VAR14, VAR13, 8, 0x800000)
        break;
    case VAR47:
        FUN5(VAR27, VAR45, VAR15, VAR14, VAR13, 8, 0x800000)
        break;
    case VAR48:
        for (; VAR13 > 0; VAR13--)
        {
            uint32_t VAR49 = FUN6(&VAR15);
            VAR49 >>= 4;
            *VAR14++ = VAR50[(VAR49 >> 8) & 0xff] + (VAR50[VAR49 & 0xff] << 8);
        }
        break;
    case VAR51:
        VAR13 /= VAR2->VAR33;
        for (VAR12 = 0; VAR12 < VAR2->VAR33; VAR12++)
            VAR16[VAR12] = &VAR15[VAR12 * VAR13 * 2];
        for (; VAR13 > 0; VAR13--)
            for (VAR12 = 0; VAR12 < VAR2->VAR33; VAR12++)
                *VAR14++ = FUN7(&VAR16[VAR12]);
        VAR15 = VAR16[VAR2->VAR33 - 1];
        break;
    case VAR52:
        FUN5(VAR25, VAR53, VAR15, VAR14, VAR13, 0, 0x8000)
        break;
    case VAR54:
        FUN5(VAR25, VAR55, VAR15, VAR14, VAR13, 0, 0x8000)
        break;
    case VAR56:
        VAR18 = (VAR5 *)VAR14;
        for (; VAR13 > 0; VAR13--)
        {
            *VAR18++ = *VAR15++ + 128;
        }
        VAR14 = (short *)VAR18;
        break;
    case VAR57:
        FUN5(VAR23, VAR58, VAR15, VAR14, VAR13, 0, 0)
        break;
    case VAR59:
    case VAR60:
        FUN5(VAR21, VAR39, VAR15, VAR14, VAR13, 0, 0)
        break;
    case VAR61:
        FUN5(VAR19, VAR53, VAR15, VAR14, VAR13, 0, 0)
        break;
    case VAR62:
    case VAR63:
    case VAR64:
    case VAR65:
    case VAR62:
        FUN5(VAR23, VAR66, VAR15, VAR14, VAR13, 0, 0)
        break;
    case VAR63:
    case VAR64:
        FUN5(VAR21, VAR41, VAR15, VAR14, VAR13, 0, 0)
        break;
    case VAR65:
        FUN5(VAR19, VAR55, VAR15, VAR14, VAR13, 0, 0)
        break;
    case VAR57:
    case VAR60:
    case VAR59:
    case VAR61:
    case VAR67:
        memcpy(VAR14, VAR15, VAR13 * VAR11);
        VAR15 += VAR13 * VAR11;
        VAR14 = (short *)((VAR5 *)VAR3 + VAR13 * VAR11);
        break;
    case VAR68:
        for (; VAR13 > 0; VAR13--)
        {
            int VAR69 = *VAR15++;
            if (VAR69 & 128)
                VAR69 -= 128;
            else
                VAR69 = -VAR69;
            *VAR14++ = VAR69 << 8;
        }
        break;
    case VAR70:
    case VAR71:
        for (; VAR13 > 0; VAR13--)
        {
            *VAR14++ = VAR9->VAR72[*VAR15++];
        }
        break;
    case VAR35:
        if (VAR2->VAR36 != 20 && VAR2->VAR36 != 24)
        {
            FUN2(VAR2, VAR32, "");
            return -1;
        }
        else
        {
            int VAR73 = VAR2->VAR33 * (VAR2->VAR36 - 16) / 4;
            VAR13 = VAR7 / (VAR2->VAR33 * 2 * VAR2->VAR36 / 8);
            while (VAR13--)
            {
                for (VAR12 = 0; VAR12 < 2 * VAR2->VAR33; VAR12++)
                    *VAR14++ = FUN8(&VAR15);
                VAR15 += VAR73;
            }
        }
        break;
    default:
        return -1;
    }
    *VAR4 = (VAR5 *)VAR14 - (VAR5 *)VAR3;
    return VAR15 - VAR6;
}