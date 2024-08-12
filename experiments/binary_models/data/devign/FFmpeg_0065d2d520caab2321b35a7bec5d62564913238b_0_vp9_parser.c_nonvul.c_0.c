static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    int VAR13;
    if (VAR9 <= 0)
    {
        *VAR7 = 0;
        *VAR6 = VAR8;
        return 0;
    }
    if (VAR11->VAR14 > 0)
    {
        *VAR6 = VAR8;
        *VAR7 = VAR11->VAR9[--VAR11->VAR14];
        FUN2(VAR2, *VAR6, *VAR7);
        return VAR11->VAR14 > 0 ? *VAR7 : VAR9;
    }
    VAR13 = VAR8[VAR9 - 1];
    if ((VAR13 & 0xe0) == 0xc0)
    {
        int VAR15 = 1 + ((VAR13 >> 3) & 0x3);
        int VAR14 = 1 + (VAR13 & 0x7), VAR16 = 2 + VAR14 * VAR15;
        if (VAR9 >= VAR16 && VAR8[VAR9 - VAR16] == VAR13)
        {
            const VAR5 *VAR17 = VAR8 + VAR9 + 1 - VAR16;
            int VAR18 = 1;
            switch (VAR15)
            {
            case VAR19:
                while (VAR14--)
                {
                    int VAR20 = VAR21;
                    VAR17 += VAR19;
                    if (VAR20 > VAR9)
                    {
                        VAR11->VAR14 = 0;
                        FUN3(VAR4, VAR22,
                               "", VAR20, VAR9);
                        return VAR9;
                    }
                    if (VAR18)
                    {
                        VAR18 = 0;
                        *VAR6 = VAR8;
                        *VAR7 = VAR20;
                        VAR11->VAR14 = VAR14;
                    }
                    else
                    {
                        VAR11->VAR9[VAR14] = VAR20;
                    }
                    VAR8 += VAR20;
                    VAR9 -= VAR20;
                }
                FUN2(VAR2, *VAR6, *VAR7);
                return *VAR7 FUN4(1, *VAR17);
                FUN4(2, FUN5(VAR17));
                FUN4(3, FUN6(VAR17));
                FUN4(4, FUN7(VAR17));
            }
        }
    }
    *VAR6 = VAR8;
    *VAR7 = VAR9;
    FUN2(VAR2, VAR8, VAR9);
    return VAR9;
}