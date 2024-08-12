static void FUN1(VAR1 *VAR2, const VAR1 *VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10, int VAR11)
{
    VAR12 *VAR13 = &VAR10->VAR14[VAR11];
    VAR15 *VAR16 = VAR13->VAR16;
    const int VAR17 = VAR13->VAR17;
    VAR18 *VAR19 = &VAR13->VAR19;
    int VAR20, VAR21;
    if (!VAR16)
    {
        if (VAR2 != VAR3)
            FUN2(VAR2, VAR4, VAR3, VAR5, VAR6, VAR8 - VAR7);
        return;
    }
    for (VAR21 = VAR7; VAR21 < VAR8; VAR21++)
    {
        const int VAR22 = VAR21 & (VAR23 - 1);
        if (VAR17 & VAR24)
            VAR20 = FUN3(VAR19) & (VAR25 - 1);
        else
            VAR20 = VAR10->VAR26[VAR22];
        if (VAR17 & VAR27)
        {
            VAR10->FUN4(VAR2, VAR3, VAR6, VAR13->VAR28[VAR22]);
            VAR13->VAR28[VAR22][VAR20 & 3] = VAR16 + VAR20;
        }
        else
        {
            VAR10->FUN5(VAR2, VAR3, VAR16, VAR6, VAR20);
        }
        VAR2 += VAR4;
        VAR3 += VAR5;
    }
}