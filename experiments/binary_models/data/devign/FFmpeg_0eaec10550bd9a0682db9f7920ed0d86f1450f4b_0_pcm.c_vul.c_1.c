static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    int VAR6, VAR7, VAR8;
    short *VAR9;
    unsigned char *VAR10;
    switch (VAR2->VAR11->VAR12)
    {
    case VAR13:
    case VAR14:
    case VAR15:
    case VAR16:
        VAR7 = 2;
        break;
    default:
        VAR7 = 1;
        break;
    }
    VAR6 = VAR4 / VAR7;
    VAR9 = VAR5;
    VAR10 = VAR3;
    switch (VAR2->VAR11->VAR12)
    {
    case VAR13:
        for (; VAR6 > 0; VAR6--)
        {
            VAR8 = *VAR9++;
            VAR10[0] = VAR8 & 0xff;
            VAR10[1] = VAR8 >> 8;
            VAR10 += 2;
        }
        break;
    case VAR14:
        for (; VAR6 > 0; VAR6--)
        {
            VAR8 = *VAR9++;
            VAR10[0] = VAR8 >> 8;
            VAR10[1] = VAR8;
            VAR10 += 2;
        }
        break;
    case VAR15:
        for (; VAR6 > 0; VAR6--)
        {
            VAR8 = *VAR9++;
            VAR8 += 0x8000;
            VAR10[0] = VAR8 & 0xff;
            VAR10[1] = VAR8 >> 8;
            VAR10 += 2;
        }
        break;
    case VAR16:
        for (; VAR6 > 0; VAR6--)
        {
            VAR8 = *VAR9++;
            VAR8 += 0x8000;
            VAR10[0] = VAR8 >> 8;
            VAR10[1] = VAR8;
            VAR10 += 2;
        }
        break;
    case VAR17:
        for (; VAR6 > 0; VAR6--)
        {
            VAR8 = *VAR9++;
            VAR10[0] = (VAR8 + 128) >> 8;
            VAR10++;
        }
        break;
    case VAR18:
        for (; VAR6 > 0; VAR6--)
        {
            VAR8 = *VAR9++;
            VAR10[0] = ((VAR8 + 128) >> 8) + 128;
            VAR10++;
        }
        break;
    case VAR19:
        for (; VAR6 > 0; VAR6--)
        {
            VAR8 = *VAR9++;
            VAR10[0] = VAR20[(VAR8 + 32768) >> 2];
            VAR10++;
        }
        break;
    case VAR21:
        for (; VAR6 > 0; VAR6--)
        {
            VAR8 = *VAR9++;
            VAR10[0] = VAR22[(VAR8 + 32768) >> 2];
            VAR10++;
        }
        break;
    default:
        return -1;
    }
    VAR2->VAR23 = 1;
    return VAR10 - VAR3;
}