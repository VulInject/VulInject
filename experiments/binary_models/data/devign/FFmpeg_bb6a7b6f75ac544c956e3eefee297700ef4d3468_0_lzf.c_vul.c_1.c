int FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR5 *VAR6)
{
    int VAR7 = 0;
    VAR3 *VAR8 = *VAR4;
    int64_t VAR9 = 0;
    while (FUN2(VAR2) > 2)
    {
        uint8_t VAR10 = FUN3(VAR2);
        if (VAR10 < VAR11)
        {
            VAR10++;
            if (VAR10 > *VAR6 - VAR9)
            {
                *VAR6 += *VAR6 / 2;
                VAR7 = FUN4(VAR4, *VAR6);
                if (VAR7 < 0)
                    return VAR7;
            }
            FUN5(VAR2, VAR8, VAR10);
            VAR8 += VAR10;
            VAR9 += VAR10;
        }
        else
        {
            int VAR12 = 2 + (VAR10 >> 5);
            int VAR13 = ((VAR10 & 0x1f) << 8) + 1;
            if (VAR12 == VAR14)
                VAR12 += FUN3(VAR2);
            VAR13 += FUN3(VAR2);
            if (VAR13 > VAR9)
                return VAR15;
            if (VAR12 > *VAR6 - VAR9)
            {
                *VAR6 += *VAR6 / 2;
                VAR7 = FUN4(VAR4, *VAR6);
                if (VAR7 < 0)
                    return VAR7;
            }
            FUN6(VAR8, VAR13, VAR12);
            VAR8 += VAR12;
            VAR9 += VAR12;
        }
    }
    *VAR6 = VAR9;
    return 0;