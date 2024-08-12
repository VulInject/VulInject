static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    uint64_t VAR13 = VAR11->VAR14.VAR15;
    int VAR16 = VAR17;
    int VAR18 = 0;
    *VAR7 = 0;
VAR19:
    if (VAR11->VAR14.VAR20 <= 2 + 4 + 4)
    {
        for (; VAR18 < VAR9; VAR18++)
        {
            VAR13 = (VAR13 << 8) | VAR8[VAR18];
            if (VAR11->VAR14.VAR20 == 0)
            {
                if ((VAR13 >> 48) == (('' << 8) | ''))
                {
                    VAR11->VAR21 = FUN2(VAR13 >> 16);
                    if (VAR11->VAR21 > 17)
                        VAR11->VAR14.VAR20 = 1;
                }
            }
            else if (VAR11->VAR14.VAR20 == 2 + 4 + 4)
            {
                unsigned VAR22 = FUN2(VAR13);
                if (VAR22 < 12 || VAR22 > 200)
                {
                    VAR11->VAR14.VAR20 = 0;
                    continue;
                }
                VAR11->VAR14.VAR20++;
                VAR11->VAR23 = VAR11->VAR21 + VAR18 - 17;
                if (VAR11->VAR14.VAR24 + VAR18 > 17)
                {
                    VAR16 = VAR18 - 17;
                    VAR13 = 0;
                    break;
                }
                else
                {
                    VAR11->VAR14.VAR15 = 0;
                    goto VAR19;
                }
            }
            else if (VAR11->VAR14.VAR20)
                VAR11->VAR14.VAR20++;
        }
        VAR11->VAR14.VAR15 = VAR13;
    }
    else
    {
        if (VAR11->VAR23)
        {
            VAR18 = FUN3(VAR11->VAR23, VAR9);
            VAR11->VAR23 -= VAR18;
            if (VAR11->VAR23)
                goto VAR25;
            VAR11->VAR14.VAR20 = 0;
            goto VAR19;
        }
    }
VAR25:
    if (FUN4(&VAR11->VAR14, VAR16, &VAR8, &VAR9) < 0)
        return VAR9;
    if (VAR16 != VAR17 && VAR16 < 0)
        VAR11->VAR14.VAR20 = FUN5(VAR11->VAR14.VAR20 - VAR18 - 1, 0);
    else
        VAR11->VAR14.VAR20 = 0;
    *VAR6 = VAR8;
    *VAR7 = VAR9;
    return VAR16;
}