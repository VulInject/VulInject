int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7, huff_cmp_t VAR8, int VAR9)
{
    int VAR10, VAR11;
    int VAR12;
    int64_t VAR13 = 0;
    for (VAR10 = 0; VAR10 < VAR5; VAR10++)
    {
        VAR7[VAR10].VAR14 = VAR10;
        VAR7[VAR10].VAR15 = -2;
        VAR13 += VAR7[VAR10].VAR16;
    }
    if (VAR13 >> 31)
    {
        FUN2(VAR2, VAR17, "");
        return -1;
    }
    FUN3(VAR7, VAR5, sizeof(VAR6), VAR8);
    VAR12 = VAR5;
    for (VAR10 = 0; VAR10 < VAR5 * 2 - 1; VAR10 += 2)
    {
        VAR7[VAR12].VAR14 = VAR18;
        VAR7[VAR12].VAR16 = VAR7[VAR10].VAR16 + VAR7[VAR10 + 1].VAR16;
        VAR7[VAR12].VAR15 = VAR10;
        for (VAR11 = VAR12; VAR11 > 0; VAR11--)
        {
            if (VAR7[VAR11].VAR16 > VAR7[VAR11 - 1].VAR16 || (VAR7[VAR11].VAR16 == VAR7[VAR11 - 1].VAR16 && (!VAR9 || VAR7[VAR11].VAR15 == VAR11 - 1 || VAR7[VAR11].VAR15 == VAR11 - 2 || (VAR7[VAR11].VAR14 != VAR18 && VAR7[VAR11 - 1].VAR14 != VAR18))))
                break;
            FUN4(VAR6, VAR7[VAR11], VAR7[VAR11 - 1]);
        }
        VAR12++;
    }
    if (FUN5(VAR4, VAR7, VAR5 * 2 - 2) < 0)
    {
        FUN2(VAR2, VAR17, "");
        return -1;
    }
    return 0;