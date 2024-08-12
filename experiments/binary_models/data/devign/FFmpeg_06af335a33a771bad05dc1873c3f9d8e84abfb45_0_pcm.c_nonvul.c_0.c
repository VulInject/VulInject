static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    int VAR6, VAR7, VAR8;
    const short *VAR9;
    unsigned char *VAR10;
    const VAR11 *VAR12;
    const VAR13 *VAR14;
    const VAR15 *VAR16;
    const VAR17 *VAR18;
    const VAR19 *VAR20;
    const VAR21 *VAR22;
    VAR7 = FUN2(VAR2->VAR23->VAR24) / 8;
    VAR6 = VAR4 / VAR7;
    VAR9 = VAR5;
    VAR10 = VAR3;
    switch (VAR2->VAR23->VAR24)
    {
    case VAR25:
        FUN3(VAR21, VAR26, VAR9, VAR10, VAR6, 0, 0x80000000)
        break;
    case VAR27:
        FUN3(VAR21, VAR28, VAR9, VAR10, VAR6, 0, 0x80000000)
        break;
    case VAR29:
        FUN3(VAR15, VAR30, VAR9, VAR10, VAR6, 8, 0)
        break;
    case VAR31:
        FUN3(VAR15, VAR32, VAR9, VAR10, VAR6, 8, 0)
        break;
    case VAR33:
        FUN3(VAR21, VAR30, VAR9, VAR10, VAR6, 8, 0x800000)
        break;
    case VAR34:
        FUN3(VAR21, VAR32, VAR9, VAR10, VAR6, 8, 0x800000)
        break;
    case VAR35:
        for (; VAR6 > 0; VAR6--)
        {
            uint32_t VAR36 = VAR37[(*VAR9 >> 8) & 0xff] + (VAR37[*VAR9 & 0xff] << 8);
            VAR36 <<= 4;
            FUN4(&VAR10, VAR36);
            VAR9++;
        }
        break;
    case VAR38:
        FUN3(VAR19, VAR39, VAR9, VAR10, VAR6, 0, 0x8000)
        break;
    case VAR40:
        FUN3(VAR19, VAR41, VAR9, VAR10, VAR6, 0, 0x8000)
        break;
    case VAR42:
        VAR12 = VAR5;
        for (; VAR6 > 0; VAR6--)
        {
            VAR8 = *VAR12++;
            *VAR10++ = VAR8 - 128;
        }
        break;
    case VAR43:
        FUN3(VAR17, VAR44, VAR9, VAR10, VAR6, 0, 0)
        break;
    case VAR45:
    case VAR46:
        FUN3(VAR15, VAR26, VAR9, VAR10, VAR6, 0, 0)
        break;
    case VAR47:
        FUN3(VAR13, VAR39, VAR9, VAR10, VAR6, 0, 0)
        break;
    case VAR48:
    case VAR49:
    case VAR50:
    case VAR51:
    case VAR48:
        FUN3(VAR17, VAR52, VAR9, VAR10, VAR6, 0, 0)
        break;
    case VAR49:
    case VAR50:
        FUN3(VAR15, VAR28, VAR9, VAR10, VAR6, 0, 0)
        break;
    case VAR51:
        FUN3(VAR13, VAR41, VAR9, VAR10, VAR6, 0, 0)
        break;
    case VAR43:
    case VAR46:
    case VAR45:
    case VAR47:
    case VAR53:
        memcpy(VAR10, VAR9, VAR6 * VAR7);
        VAR10 += VAR6 * VAR7;
        break;
    case VAR54:
        for (; VAR6 > 0; VAR6--)
        {
            VAR8 = *VAR9++ >> 8;
            if (VAR8 < 0)
                VAR8 = -VAR8;
            else
                VAR8 += 128;
            *VAR10++ = VAR8;
        }
        break;
    case VAR55:
        for (; VAR6 > 0; VAR6--)
        {
            VAR8 = *VAR9++;
            *VAR10++ = VAR56[(VAR8 + 32768) >> 2];
        }
        break;
    case VAR57:
        for (; VAR6 > 0; VAR6--)
        {
            VAR8 = *VAR9++;
            *VAR10++ = VAR58[(VAR8 + 32768) >> 2];
        }
        break;
    default:
        return -1;
    }
    return VAR10 - VAR3;
}