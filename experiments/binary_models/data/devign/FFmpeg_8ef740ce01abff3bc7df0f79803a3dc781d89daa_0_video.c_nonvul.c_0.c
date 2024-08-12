int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7[4], *VAR8[4];
    int VAR9, VAR10, VAR11, VAR12;
    int (*VAR13)(VAR1 *, int, int, int);
    FUN2(NULL, VAR13);
    FUN3(NULL, VAR2, 0);
    FUN4(NULL, "", VAR3, VAR4, VAR5);
    if (VAR2->VAR14)
    {
        VAR11 = VAR15[VAR2->VAR16].VAR17;
        for (VAR9 = 0; VAR9 < 4; VAR9++)
        {
            if (VAR2->VAR14->VAR18[VAR9])
            {
                VAR7[VAR9] = VAR2->VAR14->VAR18[VAR9] + (VAR3 >> (VAR9 == 1 || VAR9 == 2 ? VAR11 : 0)) * VAR2->VAR14->VAR19[VAR9];
                VAR8[VAR9] = VAR2->VAR20->VAR18[VAR9] + (VAR3 >> (VAR9 == 1 || VAR9 == 2 ? VAR11 : 0)) * VAR2->VAR20->VAR19[VAR9];
            }
            else
                VAR7[VAR9] = VAR8[VAR9] = NULL;
        }
        for (VAR9 = 0; VAR9 < 4; VAR9++)
        {
            int VAR21 = FUN5(VAR2->VAR16, VAR2->VAR20->VAR22->VAR23, VAR9);
            if (!VAR7[VAR9])
                continue;
            for (VAR10 = 0; VAR10 < VAR4 >> (VAR9 == 1 || VAR9 == 2 ? VAR11 : 0); VAR10++)
            {
                memcpy(VAR8[VAR9], VAR7[VAR9], VAR21);
                VAR7[VAR9] += VAR2->VAR14->VAR19[VAR9];
                VAR8[VAR9] += VAR2->VAR20->VAR19[VAR9];
            }
        }
    }
    if (!(VAR13 = VAR2->VAR24->VAR13))
        VAR13 = VAR25;
    VAR12 = FUN6(VAR2, VAR3, VAR4, VAR5);
    if (VAR12 < 0)
        FUN7(VAR2);
    else
        FUN8(VAR2->VAR20->VAR26->VAR27 > 0);
    return VAR12;
}