static int FUN1(VAR1 *VAR2)
{
    int VAR3 = 0, VAR4 = 0;
    int VAR5, VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    VAR7 *VAR10;
    VAR7 *VAR9;
    VAR7 *VAR11 = VAR8 + VAR2->VAR12 - 7;
    VAR9 = VAR8;
    for (; VAR9 < VAR11; VAR9 = VAR10 + 1)
    {
        VAR10 = VAR9;
        for (VAR6 = 0; VAR10 < VAR11; VAR6++)
        {
            uint32_t VAR13 = FUN2(VAR10);
            if ((VAR13 & 0xFFF6) != 0xFFF0)
                break;
            VAR5 = (FUN3(VAR10 + 3) >> 13) & 0x1FFF;
            if (VAR5 < 7)
                break;
            VAR10 += VAR5;
        }
        VAR3 = FUN4(VAR3, VAR6);
        if (VAR9 == VAR8)
            VAR4 = VAR6;
    }
    if (VAR4 >= 3)
        return VAR14 / 2 + 1;
    else if (VAR3 > 500)
        return VAR14 / 2;
    else if (VAR3 >= 3)
        return VAR14 / 4;
    else if (VAR3 >= 1)
        return 1;
    else
        return 0;