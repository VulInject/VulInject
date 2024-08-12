static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12;
    short *VAR13;
    VAR5 *VAR14, *VAR15[VAR16];
    VAR13 = VAR3;
    VAR14 = VAR6;
    VAR12 = FUN2(VAR2->VAR17) / 8;
    if ((VAR12 && VAR7 % VAR12) || VAR2->VAR18 > VAR16)
    {
        FUN3(VAR2, VAR19, "");
        return -1;
    }
    VAR7 = FUN4(VAR7, *VAR4 / 2);
    *VAR4 = 0;
    VAR12 = VAR7 / VAR2->VAR18;
    for (VAR11 = 0; VAR11 < VAR2->VAR18; VAR11++)
        VAR15[VAR11] = &VAR14[VAR11 * VAR12];
    switch (VAR2->VAR20->VAR21)
    {
    case VAR22:
        FUN5(4, 1, 0, &VAR14, &VAR13, VAR7);
        break;
    case VAR23:
        FUN5(4, 0, 0, &VAR14, &VAR13, VAR7);
        break;
    case VAR24:
        FUN5(4, 1, 1, &VAR14, &VAR13, VAR7);
        break;
    case VAR25:
        FUN5(4, 0, 1, &VAR14, &VAR13, VAR7);
        break;
    case VAR26:
        FUN5(3, 1, 0, &VAR14, &VAR13, VAR7);
        break;
    case VAR27:
        FUN5(3, 0, 0, &VAR14, &VAR13, VAR7);
        break;
    case VAR28:
        FUN5(3, 1, 1, &VAR14, &VAR13, VAR7);
        break;
    case VAR29:
        FUN5(3, 0, 1, &VAR14, &VAR13, VAR7);
        break;
    case VAR30:
        VAR12 = VAR7 / 3;
        for (; VAR12 > 0; VAR12--)
        {
            uint32_t VAR31 = FUN6(&VAR14);
            VAR31 >>= 4;
            *VAR13++ = VAR32[(VAR31 >> 8) & 0xff] + (VAR32[VAR31 & 0xff] << 8);
        }
        break;
    case VAR33:
        VAR12 = VAR7 >> 1;
        for (; VAR12 > 0; VAR12--)
        {
            *VAR13++ = FUN7(&VAR14);
        }
        break;
    case VAR34:
        for (VAR12 >>= 1; VAR12 > 0; VAR12--)
            for (VAR11 = 0; VAR11 < VAR2->VAR18; VAR11++)
                *VAR13++ = FUN7(&VAR15[VAR11]);
        VAR14 = VAR15[VAR2->VAR18 - 1];
        break;
    case VAR35:
        VAR12 = VAR7 >> 1;
        for (; VAR12 > 0; VAR12--)
        {
            *VAR13++ = FUN8(&VAR14);
        }
        break;
    case VAR36:
        VAR12 = VAR7 >> 1;
        for (; VAR12 > 0; VAR12--)
        {
            *VAR13++ = FUN7(&VAR14) - 0x8000;
        }
        break;
    case VAR37:
        VAR12 = VAR7 >> 1;
        for (; VAR12 > 0; VAR12--)
        {
            *VAR13++ = FUN8(&VAR14) - 0x8000;
        }
        break;
    case VAR38:
        VAR12 = VAR7;
        for (; VAR12 > 0; VAR12--)
        {
            *VAR13++ = *VAR14++ << 8;
        }
        break;
    case VAR39:
        VAR12 = VAR7;
        for (; VAR12 > 0; VAR12--)
        {
            *VAR13++ = ((int)*VAR14++ - 128) << 8;
        }
        break;
    case VAR40:
        VAR12 = VAR7;
        for (; VAR12 > 0; VAR12--)
        {
            int VAR41 = *VAR14++;
            if (VAR41 & 128)
                VAR41 -= 128;
            else
                VAR41 = -VAR41;
            *VAR13++ = VAR41 << 8;
        }
        break;
    case VAR42:
    case VAR43:
        VAR12 = VAR7;
        for (; VAR12 > 0; VAR12--)
        {
            *VAR13++ = VAR9->VAR44[*VAR14++];
        }
        break;
    default:
        return -1;
    }
    *VAR4 = (VAR5 *)VAR13 - (VAR5 *)VAR3;
    return VAR14 - VAR6;
}