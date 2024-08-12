static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12;
    const short *VAR13;
    unsigned char *VAR14;
    const VAR15 *VAR16;
    const VAR17 *VAR18;
    const VAR19 *VAR20;
    const VAR21 *VAR22;
    const VAR23 *VAR24;
    const VAR25 *VAR26;
    VAR10 = FUN2(VAR2->VAR27->VAR28) / 8;
    VAR8 = VAR6->VAR29 * VAR2->VAR30;
    VAR13 = (const short *)VAR6->VAR31[0];
    if ((VAR12 = FUN3(VAR2, VAR4, VAR8 * VAR10)) < 0)
        return VAR12;
    VAR14 = VAR4->VAR31;
    switch (VAR2->VAR27->VAR28)
    {
    case VAR32:
        FUN4(VAR25, VAR33, VAR13, VAR14, VAR8, 0, 0x80000000)
        break;
    case VAR34:
        FUN4(VAR25, VAR35, VAR13, VAR14, VAR8, 0, 0x80000000)
        break;
    case VAR36:
        FUN4(VAR19, VAR37, VAR13, VAR14, VAR8, 8, 0)
        break;
    case VAR38:
        FUN5(VAR19, VAR37, VAR14, VAR8, 8, 0)
        break;
    case VAR39:
        FUN4(VAR19, VAR40, VAR13, VAR14, VAR8, 8, 0)
        break;
    case VAR41:
        FUN4(VAR25, VAR37, VAR13, VAR14, VAR8, 8, 0x800000)
        break;
    case VAR42:
        FUN4(VAR25, VAR40, VAR13, VAR14, VAR8, 8, 0x800000)
        break;
    case VAR43:
        for (; VAR8 > 0; VAR8--)
        {
            uint32_t VAR44 = VAR45[(*VAR13 >> 8) & 0xff] + (VAR45[*VAR13 & 0xff] << 8);
            VAR44 <<= 4;
            FUN6(&VAR14, VAR44);
            VAR13++;
        }
        break;
    case VAR46:
        FUN4(VAR23, VAR47, VAR13, VAR14, VAR8, 0, 0x8000)
        break;
    case VAR48:
        FUN4(VAR23, VAR49, VAR13, VAR14, VAR8, 0, 0x8000)
        break;
    case VAR50:
        FUN4(VAR15, VAR51, VAR13, VAR14, VAR8, 0, -128)
        break;
    case VAR52:
        FUN5(VAR15, VAR51, VAR14, VAR8, 0, -128)
        break;
    case VAR53:
        FUN4(VAR21, VAR54, VAR13, VAR14, VAR8, 0, 0)
        break;
    case VAR55:
    case VAR56:
        FUN4(VAR19, VAR33, VAR13, VAR14, VAR8, 0, 0)
        break;
    case VAR57:
        FUN5(VAR19, VAR33, VAR14, VAR8, 0, 0)
        break;
    case VAR58:
        FUN4(VAR17, VAR47, VAR13, VAR14, VAR8, 0, 0)
        break;
    case VAR59:
        FUN5(VAR17, VAR47, VAR14, VAR8, 0, 0)
        break;
    case VAR60:
    case VAR61:
    case VAR62:
    case VAR63:
    case VAR60:
        FUN4(VAR21, VAR64, VAR13, VAR14, VAR8, 0, 0)
        break;
    case VAR61:
    case VAR62:
        FUN4(VAR19, VAR35, VAR13, VAR14, VAR8, 0, 0)
        break;
    case VAR63:
        FUN4(VAR17, VAR49, VAR13, VAR14, VAR8, 0, 0)
        break;
    case VAR65:
        FUN5(VAR17, VAR49, VAR14, VAR8, 0, 0)
        break;
    case VAR53:
    case VAR56:
    case VAR55:
    case VAR58:
    case VAR66:
        memcpy(VAR14, VAR13, VAR8 * VAR10);
        break;
    case VAR65:
    case VAR59:
    case VAR57:
        VAR8 /= VAR2->VAR30;
        for (VAR9 = 0; VAR9 < VAR2->VAR30; VAR9++)
        {
            const VAR15 *VAR67 = VAR6->VAR68[VAR9];
            FUN7(&VAR14, VAR67, VAR8 * VAR10);
        }
        break;
    case VAR69:
        for (; VAR8 > 0; VAR8--)
        {
            VAR11 = *VAR13++;
            *VAR14++ = VAR70[(VAR11 + 32768) >> 2];
        }
        break;
    case VAR71:
        for (; VAR8 > 0; VAR8--)
        {
            VAR11 = *VAR13++;
            *VAR14++ = VAR72[(VAR11 + 32768) >> 2];
        }
        break;
    default:
        return -1;
    }
    *VAR7 = 1;
    return 0;
}