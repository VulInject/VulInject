static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    uint64_t VAR9, VAR10;
    int VAR11, VAR12, VAR13;
    int64_t VAR14 = FUN2(VAR7);
    VAR15 *VAR16;
    VAR17 *VAR18;
    int VAR19 = VAR20;
    FUN3(VAR7, VAR14 - 12, VAR21);
    FUN3(VAR7, VAR14 - FUN4(VAR7), VAR21);
    if (FUN4(VAR7) != VAR22)
    {
        FUN5(VAR4, VAR23, "");
        return VAR19;
    }
    VAR10 = FUN6(VAR2, VAR7, 1, VAR22);
    VAR10 += FUN7(VAR7);
    FUN8(VAR7);
    FUN9(VAR13, VAR9 < VAR24 / 8 && VAR9 > 0);
    VAR16 = FUN10(sizeof(VAR15) * VAR13);
    VAR18 = FUN10(sizeof(VAR17) * (VAR13 + 1));
    if (!VAR16 || !VAR18)
        return FUN11(VAR25);
    for (VAR11 = 0; VAR11 < VAR13; VAR11++)
    {
        VAR16[VAR11] = FUN8(VAR7);
        if (VAR16[VAR11] <= 0)
            goto VAR26;
        if (VAR11)
            VAR16[VAR11] += VAR16[VAR11 - 1];
    }
    for (VAR11 = 0; VAR11 < VAR4->VAR27; VAR11++)
    {
        int64_t VAR28 = -1;
        for (VAR12 = 0; VAR12 < VAR13;)
        {
            uint64_t VAR29 = FUN8(VAR7);
            int VAR30 = VAR29 & 1;
            int VAR31 = VAR12;
            VAR29 >>= 1;
            if (VAR30)
            {
                int VAR32 = VAR29 & 1;
                VAR29 >>= 1;
                if (VAR31 + VAR29 >= VAR13 + 1)
                {
                    FUN5(VAR4, VAR23, "");
                    goto VAR26;
                }
                while (VAR29--)
                    VAR18[VAR31++] = VAR32;
                VAR18[VAR31++] = !VAR32;
            }
            else
            {
                while (VAR29 != 1)
                {
                    if (VAR31 >= VAR13 + 1)
                    {
                        FUN5(VAR4, VAR23, "");
                        goto VAR26;
                    }
                    VAR18[VAR31++] = VAR29 & 1;
                    VAR29 >>= 1;
                }
            }
            if (VAR18[0])
            {
                FUN5(VAR4, VAR23, "");
                goto VAR26;
            }
            assert(VAR31 <= VAR13 + 1);
            for (; VAR12 < VAR31 && VAR12 < VAR13; VAR12++)
            {
                if (VAR18[VAR12])
                {
                    uint64_t VAR33, VAR34 = FUN8(VAR7);
                    if (!VAR34)
                    {
                        VAR34 = FUN8(VAR7);
                        VAR33 = FUN8(VAR7);
                    }
                    else
                        VAR33 = 0;
                    FUN12(VAR4->VAR35[VAR11], 16 * VAR16[VAR12 - 1], VAR28 + VAR34, 0, 0, VAR36);
                    VAR28 += VAR34 + VAR33;
                }
            }
        }
    }
    if (FUN13(VAR7, VAR10) || FUN14(VAR7))
    {
        FUN5(VAR4, VAR23, "");
        goto VAR26;
    }
    VAR19 = 0;
VAR26:
    FUN15(VAR16);
    FUN15(VAR18);
    return VAR19;
}