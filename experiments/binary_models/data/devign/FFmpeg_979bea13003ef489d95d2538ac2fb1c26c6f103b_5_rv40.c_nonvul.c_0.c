static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = &VAR4->VAR6;
    int VAR7, VAR8;
    int VAR9 = 0;
    int VAR10 = VAR4->VAR11 + VAR4->VAR12 * VAR4->VAR13;
    int VAR14[VAR15] = {0};
    int VAR16 = 0;
    if (!VAR2->VAR4.VAR17)
    {
        VAR2->VAR4.VAR17 = FUN2(VAR6) + 1;
        if (VAR2->VAR4.VAR17 > (unsigned)VAR4->VAR18)
            return -1;
    }
    if (--VAR2->VAR4.VAR17)
        return VAR19;
    if (VAR2->VAR20[6 - 1])
        VAR14[VAR2->VAR21[VAR10 - 1]]++;
    if (VAR2->VAR20[6 - 4])
    {
        VAR14[VAR2->VAR21[VAR10 - VAR4->VAR13]]++;
        if (VAR2->VAR20[6 - 2])
            VAR14[VAR2->VAR21[VAR10 - VAR4->VAR13 + 1]]++;
        if (VAR2->VAR20[6 - 5])
            VAR14[VAR2->VAR21[VAR10 - VAR4->VAR13 - 1]]++;
    }
    for (VAR8 = 0; VAR8 < VAR15; VAR8++)
    {
        if (VAR14[VAR8] > VAR16)
        {
            VAR16 = VAR14[VAR8];
            VAR9 = VAR8;
        }
    }
    if (VAR4->VAR22 == VAR23)
    {
        VAR9 = VAR24[VAR9];
        VAR7 = FUN3(VAR6, VAR25[VAR9].VAR26, VAR27, 1);
        if (VAR7 < VAR28)
            return VAR7;
        VAR7 = FUN3(VAR6, VAR25[VAR9].VAR26, VAR27, 1);
        FUN4(VAR4->VAR29, VAR30, "");
    }
    else
    {
        VAR9 = VAR31[VAR9];
        VAR7 = FUN3(VAR6, VAR32[VAR9].VAR26, VAR33, 1);
        if (VAR7 < VAR28)
            return VAR7;
        VAR7 = FUN3(VAR6, VAR32[VAR9].VAR26, VAR33, 1);
        FUN4(VAR4->VAR29, VAR30, "");
    }
    return 0;
}