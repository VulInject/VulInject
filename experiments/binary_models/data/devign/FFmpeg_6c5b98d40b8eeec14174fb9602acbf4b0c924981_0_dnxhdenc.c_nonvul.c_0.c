static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = 0;
    int VAR6, VAR7, VAR8;
    if ((VAR6 = FUN2(VAR4)) < 0)
        return VAR6;
    for (VAR8 = 0; VAR8 < VAR4->VAR9.VAR10; VAR8++)
    {
        for (VAR7 = 0; VAR7 < VAR4->VAR9.VAR11; VAR7++)
        {
            int VAR12 = VAR8 * VAR4->VAR9.VAR11 + VAR7;
            int VAR13 = (VAR4->VAR14 * VAR4->VAR9.VAR15) + VAR12;
            int VAR16;
            VAR4->VAR17[VAR12] = VAR4->VAR14;
            VAR4->VAR18[VAR12] = VAR4->VAR19[VAR13].VAR20;
            VAR5 += VAR4->VAR19[VAR13].VAR20;
            if (!VAR21)
            {
                VAR16 = VAR4->VAR19[VAR13].VAR20 - VAR4->VAR19[VAR13 + VAR4->VAR9.VAR15].VAR20;
                VAR4->VAR22[VAR12].VAR12 = VAR12;
                VAR4->VAR22[VAR12].VAR23 = VAR16 ? ((VAR4->VAR19[VAR13].VAR24 - VAR4->VAR19[VAR13 + VAR4->VAR9.VAR15].VAR24) * 100) / VAR16 : VAR25;
            }
        }
        VAR5 += 31;
    }
    if (!VAR6)
    {
        if (VAR21)
            VAR2->FUN3(VAR2, VAR26, NULL, NULL, VAR4->VAR9.VAR10);
        FUN4(VAR4->VAR22, VAR4->VAR27, VAR4->VAR9.VAR15);
        for (VAR7 = 0; VAR7 < VAR4->VAR9.VAR15 && VAR5 > VAR4->VAR28; VAR7++)
        {
            int VAR12 = VAR4->VAR22[VAR7].VAR12;
            int VAR13 = (VAR4->VAR14 * VAR4->VAR9.VAR15) + VAR12;
            VAR5 -= VAR4->VAR19[VAR13].VAR20 - VAR4->VAR19[VAR13 + VAR4->VAR9.VAR15].VAR20;
            VAR4->VAR17[VAR12] = VAR4->VAR14 + 1;
            VAR4->VAR18[VAR12] = VAR4->VAR19[VAR13 + VAR4->VAR9.VAR15].VAR20;
        }
    }
    return 0;
}