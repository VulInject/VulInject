static int FUN1(const VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11 = 0;
    VAR12 *VAR13, *VAR14 = NULL;
    VAR14 = FUN2(VAR2->VAR15);
    FUN3(VAR6, VAR16, VAR17);
    VAR4->VAR18[0] = VAR2->VAR15;
    for (VAR9 = 0; VAR9 < VAR2->VAR19; VAR9++)
    {
        if (VAR2->VAR19 == 4 && VAR9 != 3)
            VAR10 = 2 - VAR9;
        else
            VAR10 = VAR9;
        for (VAR8 = VAR2->VAR20 - 1; VAR8 >= 0; VAR8--)
        {
            VAR13 = VAR4->VAR21[0] + (VAR8 * VAR2->VAR15 * VAR2->VAR19);
            if (!FUN4(VAR6, VAR14, VAR2->VAR15))
            {
                VAR11 = -1;
                goto VAR22;
            }
            for (VAR7 = 0; VAR7 < VAR2->VAR15; VAR7++)
            {
                VAR13[VAR10] = VAR14[VAR7];
                VAR13 += VAR2->VAR19;
            }
        }
    }
VAR22:
    FUN5(VAR14);
    return VAR11;
}