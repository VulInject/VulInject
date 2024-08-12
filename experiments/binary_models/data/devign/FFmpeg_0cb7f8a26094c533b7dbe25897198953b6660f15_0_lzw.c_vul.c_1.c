int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10;
    VAR3 *VAR11;
    struct VAR1 *VAR12 = (struct VAR1 *)VAR2;
    if (VAR12->VAR13 < 0)
        return 0;
    VAR6 = VAR5;
    VAR11 = VAR12->VAR11;
    VAR9 = VAR12->VAR9;
    VAR10 = VAR12->VAR10;
    for (;;)
    {
        while (VAR11 > VAR12->VAR14)
        {
            *VAR4++ = *(--VAR11);
            if ((--VAR6) == 0)
                goto VAR15;
        }
        VAR7 = FUN2(VAR12);
        if (VAR7 == VAR12->VAR13)
        {
            VAR12->VAR13 = -1;
            break;
        }
        else if (VAR7 == VAR12->VAR16)
        {
            VAR12->VAR17 = VAR12->VAR18 + 1;
            VAR12->VAR19 = VAR20[VAR12->VAR17];
            VAR12->VAR21 = VAR12->VAR22;
            VAR12->VAR23 = 1 << VAR12->VAR17;
            VAR10 = VAR9 = -1;
        }
        else
        {
            VAR8 = VAR7;
            if (VAR8 >= VAR12->VAR21)
            {
                *VAR11++ = VAR10;
                VAR8 = VAR9;
            }
            while (VAR8 >= VAR12->VAR22)
            {
                *VAR11++ = VAR12->VAR24[VAR8];
                VAR8 = VAR12->VAR25[VAR8];
            }
            *VAR11++ = VAR8;
            if (VAR12->VAR21 < VAR12->VAR23 && VAR9 >= 0)
            {
                VAR12->VAR24[VAR12->VAR21] = VAR8;
                VAR12->VAR25[VAR12->VAR21++] = VAR9;
            }
            VAR10 = VAR8;
            VAR9 = VAR7;
            if (VAR12->VAR21 >= VAR12->VAR23 - VAR12->VAR26)
            {
                if (VAR12->VAR17 < VAR27)
                {
                    VAR12->VAR23 <<= 1;
                    VAR12->VAR19 = VAR20[++VAR12->VAR17];
                }
            }
        }
    }
VAR15:
    VAR12->VAR11 = VAR11;
    VAR12->VAR9 = VAR9;
    VAR12->VAR10 = VAR10;
    return VAR5 - VAR6;
}