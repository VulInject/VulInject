static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR3;
    VAR6 *VAR7 = VAR5->VAR8;
    VAR9 *VAR10 = &VAR5->VAR10;
    const int VAR11 = VAR5->VAR12;
    const int VAR13 = VAR5->VAR14;
    const int VAR15 = VAR5->VAR15;
    const int VAR16 = VAR5->VAR17;
    uint8_t VAR18[VAR19][4];
    int VAR20, VAR21, VAR22;
    FUN2(VAR10, VAR7->VAR23);
    FUN3(VAR10, 8, VAR15);
    for (VAR21 = 0; VAR21 < VAR7->VAR24; VAR21++)
        for (VAR22 = !!VAR21; VAR22 < 4; VAR22++)
            VAR18[VAR21][VAR22] = FUN4(VAR15 - VAR7->VAR25[VAR21][VAR22], 0);
    for (VAR20 = 0; VAR20 < 3; VAR20++)
    {
        int VAR26, VAR27, VAR28, VAR29;
        VAR26 = FUN5(VAR10) >> 3;
        FUN3(VAR10, 8, 0);
        for (VAR21 = 0; VAR21 < VAR7->VAR24; VAR21++)
        {
            for (VAR22 = !!VAR21; VAR22 < 4; VAR22++)
            {
                FUN6(VAR7, VAR10, VAR11, VAR13, &VAR7->VAR30[VAR20].VAR31[VAR21][VAR22], VAR18[VAR21][VAR22]);
            }
        }
        FUN7(VAR10);
        VAR27 = (FUN5(VAR10) >> 3) - VAR26 - 1;
        if (VAR20 == 2)
        {
            int VAR32 = VAR16 - (FUN5(VAR10) >> 3);
            VAR28 = FUN8((VAR27 + VAR32), VAR7->VAR33) / VAR7->VAR33;
            VAR29 = (VAR28 * VAR7->VAR33) - VAR27;
        }
        else
        {
            VAR28 = FUN8(VAR27, VAR7->VAR33) / VAR7->VAR33;
            VAR29 = (VAR28 * VAR7->VAR33) - VAR27;
        }
        VAR10->VAR34[VAR26] = VAR28;
        FUN9(VAR10);
        FUN2(VAR10, VAR29);
    }
    return 0;
}