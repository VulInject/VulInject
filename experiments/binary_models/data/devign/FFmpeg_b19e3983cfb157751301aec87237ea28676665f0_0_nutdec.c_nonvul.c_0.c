static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    uint64_t VAR9, VAR10;
    int VAR11, VAR12, VAR13;
    int64_t VAR14 = FUN2(VAR7);
    VAR15 *VAR16;
    VAR17 *VAR18;
    FUN3(VAR7, VAR14 - 12, VAR19);
    FUN3(VAR7, VAR14 - FUN4(VAR7), VAR19);
    if (FUN4(VAR7) != VAR20)
    {
        FUN5(VAR4, VAR21, "");
        return -1;
    }
    VAR10 = FUN6(VAR2, VAR7, 1, VAR20);
    VAR10 += FUN7(VAR7);
    FUN8(VAR7);
    FUN9(VAR13, VAR9 < VAR22 / 8 && VAR9 > 0)
    VAR16 = FUN10(sizeof(VAR15) * VAR13);
    VAR18 = FUN10(sizeof(VAR17) * (VAR13 + 1));
    for (VAR11 = 0; VAR11 < VAR13; VAR11++)
    {
        FUN9(VAR16[VAR11], VAR9 > 0)
        if (VAR11) VAR16[VAR11] += VAR16[VAR11 - 1];
    }
    for (VAR11 = 0; VAR11 < VAR4->VAR23; VAR11++)
    {
        int64_t VAR24 = -1;
        for (VAR12 = 0; VAR12 < VAR13;)
        {
            uint64_t VAR25 = FUN8(VAR7);
            int VAR26 = VAR25 & 1;
            int VAR27 = VAR12;
            VAR25 >>= 1;
            if (VAR26)
            {
                int VAR28 = VAR25 & 1;
                VAR25 >>= 1;
                if (VAR27 + VAR25 >= VAR13 + 1)
                {
                    FUN5(VAR4, VAR21, "");
                    return -1;
                }
                while (VAR25--)
                    VAR18[VAR27++] = VAR28;
                VAR18[VAR27++] = !VAR28;
            }
            else
            {
                while (VAR25 != 1)
                {
                    if (VAR27 >= VAR13 + 1)
                    {
                        FUN5(VAR4, VAR21, "");
                        return -1;
                    }
                    VAR18[VAR27++] = VAR25 & 1;
                    VAR25 >>= 1;
                }
            }
            if (VAR18[0])
            {
                FUN5(VAR4, VAR21, "");
                return -1;
            }
            assert(VAR27 <= VAR13 + 1);
            for (; VAR12 < VAR27 && VAR12 < VAR13; VAR12++)
            {
                if (VAR18[VAR12])
                {
                    uint64_t VAR29, VAR30 = FUN8(VAR7);
                    if (!VAR30)
                    {
                        VAR30 = FUN8(VAR7);
                        VAR29 = FUN8(VAR7);
                    }
                    else
                        VAR29 = 0;
                    FUN11(VAR4->VAR31[VAR11], 16 * VAR16[VAR12 - 1], VAR24 + VAR30, 0, 0, VAR32);
                    VAR24 += VAR30 + VAR29;
                }
            }
        }
    }
    if (FUN12(VAR7, VAR10) || FUN13(VAR7))
    {
        FUN5(VAR4, VAR21, "");
        return -1;
    }
    return 0;
}