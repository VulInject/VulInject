static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    short *VAR12;
    VAR5 *VAR13;
    VAR12 = VAR3;
    VAR13 = VAR6;
    VAR7 = FUN2(VAR7, *VAR4 / 2);
    *VAR4 = 0;
    switch (VAR2->VAR14->VAR15)
    {
    case VAR16:
        FUN3(4, 1, 0, &VAR13, &VAR12, VAR7);
        break;
    case VAR17:
        FUN3(4, 0, 0, &VAR13, &VAR12, VAR7);
        break;
    case VAR18:
        FUN3(4, 1, 1, &VAR13, &VAR12, VAR7);
        break;
    case VAR19:
        FUN3(4, 0, 1, &VAR13, &VAR12, VAR7);
        break;
    case VAR20:
        FUN3(3, 1, 0, &VAR13, &VAR12, VAR7);
        break;
    case VAR21:
        FUN3(3, 0, 0, &VAR13, &VAR12, VAR7);
        break;
    case VAR22:
        FUN3(3, 1, 1, &VAR13, &VAR12, VAR7);
        break;
    case VAR23:
        FUN3(3, 0, 1, &VAR13, &VAR12, VAR7);
        break;
    case VAR24:
        VAR11 = VAR7 / 3;
        for (; VAR11 > 0; VAR11--)
        {
            uint32_t VAR25 = VAR13[0] << 16 | VAR13[1] << 8 | VAR13[2];
            VAR25 >>= 4;
            *VAR12++ = VAR26[(VAR25 >> 8) & 0xff] + (VAR26[VAR25 & 0xff] << 8);
            VAR13 += 3;
        }
        break;
    case VAR27:
        VAR11 = VAR7 >> 1;
        for (; VAR11 > 0; VAR11--)
        {
            *VAR12++ = VAR13[0] | (VAR13[1] << 8);
            VAR13 += 2;
        }
        break;
    case VAR28:
        VAR11 = VAR7 >> 1;
        for (; VAR11 > 0; VAR11--)
        {
            *VAR12++ = (VAR13[0] << 8) | VAR13[1];
            VAR13 += 2;
        }
        break;
    case VAR29:
        VAR11 = VAR7 >> 1;
        for (; VAR11 > 0; VAR11--)
        {
            *VAR12++ = (VAR13[0] | (VAR13[1] << 8)) - 0x8000;
            VAR13 += 2;
        }
        break;
    case VAR30:
        VAR11 = VAR7 >> 1;
        for (; VAR11 > 0; VAR11--)
        {
            *VAR12++ = ((VAR13[0] << 8) | VAR13[1]) - 0x8000;
            VAR13 += 2;
        }
        break;
    case VAR31:
        VAR11 = VAR7;
        for (; VAR11 > 0; VAR11--)
        {
            *VAR12++ = VAR13[0] << 8;
            VAR13++;
        }
        break;
    case VAR32:
        VAR11 = VAR7;
        for (; VAR11 > 0; VAR11--)
        {
            *VAR12++ = ((int)VAR13[0] - 128) << 8;
            VAR13++;
        }
        break;
    case VAR33:
    case VAR34:
        VAR11 = VAR7;
        for (; VAR11 > 0; VAR11--)
        {
            *VAR12++ = VAR9->VAR35[VAR13[0]];
            VAR13++;
        }
        break;
    default:
        return -1;
    }
    *VAR4 = (VAR5 *)VAR12 - (VAR5 *)VAR3;
    return VAR13 - VAR6;
}