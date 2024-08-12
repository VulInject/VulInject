static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    int VAR7 = 1;
    int VAR8, VAR9;
    if (VAR2->VAR10->VAR11 & VAR12)
        return;
    VAR4 = &VAR2->VAR6;
    VAR6 = VAR4->VAR13;
    if (VAR4->VAR14 && VAR6[0].VAR15 > 1E14 / VAR2->VAR16)
    {
        FUN2(VAR2->VAR10, VAR17, "");
        VAR7 = VAR2->VAR16;
    }
    for (VAR8 = 0; VAR8 < VAR4->VAR14; VAR8++)
    {
        VAR3 *VAR18 = &VAR6[VAR8].VAR19;
        VAR20 *VAR19 = VAR18->VAR13;
        for (VAR9 = 0; VAR9 < VAR18->VAR14; VAR9++)
        {
            VAR21 *VAR22 = FUN3(VAR2, VAR19[VAR9].VAR22);
            if (VAR22 && VAR22->VAR23)
                FUN4(VAR22->VAR23, VAR19[VAR9].VAR19 + VAR2->VAR24, VAR6[VAR8].VAR15 / VAR7, 0, 0, VAR25);
        }
    }
}