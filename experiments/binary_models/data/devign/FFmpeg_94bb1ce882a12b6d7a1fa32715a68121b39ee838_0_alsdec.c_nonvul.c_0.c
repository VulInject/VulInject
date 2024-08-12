static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6, int *VAR7, unsigned int VAR8, int VAR9)
{
    VAR5 *VAR10 = VAR6[VAR9];
    unsigned int VAR11 = 0;
    unsigned int VAR12 = VAR2->VAR13->VAR12;
    unsigned int VAR14 = VAR2->VAR15.VAR16 + VAR2->VAR15.VAR17;
    if (VAR7[VAR9])
        return 0;
    VAR7[VAR9] = 1;
    while (VAR11 < VAR12 && !VAR10[VAR11].VAR18)
    {
        FUN1(VAR2, VAR4, VAR6, VAR7, VAR8, VAR10[VAR11].VAR19);
        VAR11++;
    }
    if (VAR11 == VAR12)
    {
        FUN2(VAR2->VAR13, VAR20, "");
        return VAR21;
    }
    VAR4->VAR22 = VAR2->VAR22 + VAR9;
    VAR4->VAR23 = VAR2->VAR23 + VAR9;
    VAR4->VAR24 = VAR2->VAR24 + VAR9;
    VAR4->VAR25 = VAR2->VAR25 + VAR9;
    VAR4->VAR26 = VAR2->VAR26 + VAR9;
    VAR4->VAR27 = VAR2->VAR27 + VAR9;
    VAR4->VAR28 = VAR2->VAR28[VAR9];
    VAR4->VAR29 = VAR2->VAR29[VAR9];
    VAR4->VAR30 = VAR2->VAR30[VAR9];
    VAR4->VAR31 = VAR2->VAR31[VAR9] + VAR8;
    VAR11 = 0;
    while (!VAR10[VAR11].VAR18)
    {
        ptrdiff_t VAR32;
        ptrdiff_t VAR33 = 1;
        ptrdiff_t VAR34 = VAR4->VAR35 - 1;
        int64_t VAR36;
        VAR37 *VAR38 = VAR2->VAR31[VAR10[VAR11].VAR19] + VAR8;
        if (VAR10[VAR11].VAR39)
        {
            int VAR40 = VAR10[VAR11].VAR41;
            if (VAR10[VAR11].VAR42)
            {
                VAR40 = -VAR40;
                VAR33 -= VAR40;
            }
            else
            {
                VAR34 -= VAR40;
            }
            if (FUN3(VAR33 - 1, VAR33 - 1 + VAR40) < VAR2->VAR43 - VAR38 || FUN4(VAR34 + 1, VAR34 + 1 + VAR40) > VAR2->VAR43 + VAR12 * VAR14 - VAR38)
            {
                FUN2(VAR2->VAR13, VAR44, "", VAR38 + FUN3(VAR33 - 1, VAR33 - 1 + VAR40), VAR38 + FUN4(VAR34 + 1, VAR34 + 1 + VAR40), VAR2->VAR43, VAR2->VAR43 + VAR12 * VAR14);
                return VAR21;
            }
            for (VAR32 = VAR33; VAR32 < VAR34; VAR32++)
            {
                VAR36 = (1 << 6) + FUN5(VAR10[VAR11].VAR45[0], VAR38[VAR32 - 1]) + FUN5(VAR10[VAR11].VAR45[1], VAR38[VAR32]) + FUN5(VAR10[VAR11].VAR45[2], VAR38[VAR32 + 1]) + FUN5(VAR10[VAR11].VAR45[3], VAR38[VAR32 - 1 + VAR40]) + FUN5(VAR10[VAR11].VAR45[4], VAR38[VAR32 + VAR40]) + FUN5(VAR10[VAR11].VAR45[5], VAR38[VAR32 + 1 + VAR40]);
                VAR4->VAR31[VAR32] += VAR36 >> 7;
            }
        }
        else
        {
            if (VAR33 - 1 < VAR2->VAR43 - VAR38 || VAR34 + 1 > VAR2->VAR43 + VAR12 * VAR14 - VAR38)
            {
                FUN2(VAR2->VAR13, VAR44, "", VAR38 + VAR33 - 1, VAR38 + VAR34 + 1, VAR2->VAR43, VAR2->VAR43 + VAR12 * VAR14);
                return VAR21;
            }
            for (VAR32 = VAR33; VAR32 < VAR34; VAR32++)
            {
                VAR36 = (1 << 6) + FUN5(VAR10[VAR11].VAR45[0], VAR38[VAR32 - 1]) + FUN5(VAR10[VAR11].VAR45[1], VAR38[VAR32]) + FUN5(VAR10[VAR11].VAR45[2], VAR38[VAR32 + 1]);
                VAR4->VAR31[VAR32] += VAR36 >> 7;
            }
        }
        VAR11++;
    }
    return 0;
}