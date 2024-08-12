static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    short *VAR12;
    VAR5 *VAR13;
    VAR12 = VAR3;
    VAR13 = VAR6;
    switch (VAR2->VAR14->VAR15)
    {
    case VAR16:
        VAR11 = VAR7 >> 1;
        for (; VAR11 > 0; VAR11--)
        {
            *VAR12++ = VAR13[0] | (VAR13[1] << 8);
            VAR13 += 2;
        }
        break;
    case VAR17:
        VAR11 = VAR7 >> 1;
        for (; VAR11 > 0; VAR11--)
        {
            *VAR12++ = (VAR13[0] << 8) | VAR13[1];
            VAR13 += 2;
        }
        break;
    case VAR18:
        VAR11 = VAR7 >> 1;
        for (; VAR11 > 0; VAR11--)
        {
            *VAR12++ = (VAR13[0] | (VAR13[1] << 8)) - 0x8000;
            VAR13 += 2;
        }
        break;
    case VAR19:
        VAR11 = VAR7 >> 1;
        for (; VAR11 > 0; VAR11--)
        {
            *VAR12++ = ((VAR13[0] << 8) | VAR13[1]) - 0x8000;
            VAR13 += 2;
        }
        break;
    case VAR20:
        VAR11 = VAR7;
        for (; VAR11 > 0; VAR11--)
        {
            *VAR12++ = VAR13[0] << 8;
            VAR13++;
        }
        break;
    case VAR21:
        VAR11 = VAR7;
        for (; VAR11 > 0; VAR11--)
        {
            *VAR12++ = ((int)VAR13[0] - 128) << 8;
            VAR13++;
        }
        break;
    case VAR22:
    case VAR23:
        VAR11 = VAR7;
        for (; VAR11 > 0; VAR11--)
        {
            *VAR12++ = VAR9->VAR24[VAR13[0]];
            VAR13++;
        }
        break;
    default:
        return -1;
    }
    *VAR4 = (VAR5 *)VAR12 - (VAR5 *)VAR3;
    return VAR13 - VAR6;