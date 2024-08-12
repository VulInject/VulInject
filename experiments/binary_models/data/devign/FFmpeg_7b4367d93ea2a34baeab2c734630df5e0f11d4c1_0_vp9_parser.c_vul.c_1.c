static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    int VAR13 = VAR9;
    int VAR14;
    if (VAR9 <= 0)
    {
        *VAR7 = 0;
        *VAR6 = VAR8;
        return 0;
    }
    if (VAR11->VAR15 > 0)
    {
        *VAR6 = VAR8;
        *VAR7 = VAR11->VAR9[--VAR11->VAR15];
        FUN2(VAR2, *VAR6, *VAR7);
        return VAR11->VAR15 > 0 ? *VAR7 : VAR9;
    }
    VAR14 = VAR8[VAR9 - 1];
    if ((VAR14 & 0xe0) == 0xc0)
    {
        int VAR16 = 1 + ((VAR14 >> 3) & 0x3);
        int VAR15 = 1 + (VAR14 & 0x7), VAR17 = 2 + VAR15 * VAR16;
        if (VAR9 >= VAR17 && VAR8[VAR9 - VAR17] == VAR14)
        {
            const VAR5 *VAR18 = VAR8 + VAR9 + 1 - VAR17;
            int VAR19 = 1;
            switch (VAR16)
            {
            case VAR20:
                while (VAR15--)
                {
                    unsigned VAR21 = VAR22;
                    VAR18 += VAR20;
                    if (VAR21 > VAR9)
                    {
                        VAR11->VAR15 = 0;
                        *VAR7 = VAR9;
                        *VAR6 = VAR8;
                        FUN3(VAR4, VAR23, "", VAR21, VAR9);
                        return VAR13;
                    }
                    if (VAR19)
                    {
                        VAR19 = 0;
                        *VAR6 = VAR8;
                        *VAR7 = VAR21;
                        VAR11->VAR15 = VAR15;
                    }
                    else
                    {
                        VAR11->VAR9[VAR15] = VAR21;
                    }
                    VAR8 += VAR21;
                    VAR9 -= VAR21;
                }
                FUN2(VAR2, *VAR6, *VAR7);
                return *VAR7 FUN4(1, *VAR18);
                FUN4(2, FUN5(VAR18));
                FUN4(3, FUN6(VAR18));
                FUN4(4, FUN7(VAR18));
            }
        }
    }
    *VAR6 = VAR8;
    *VAR7 = VAR9;
    FUN2(VAR2, VAR8, VAR9);
    return VAR9;
}