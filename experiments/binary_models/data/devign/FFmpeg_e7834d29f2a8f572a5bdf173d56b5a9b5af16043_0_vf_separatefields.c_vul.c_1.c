static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    VAR1 *VAR11 = VAR6->VAR12[0];
    VAR3 *VAR13;
    int VAR14, VAR15;
    VAR4->VAR16 = VAR11->VAR17;
    VAR4->VAR18 = 0;
    VAR13 = FUN2(VAR4);
    if (!VAR13)
        return FUN3(VAR19);
    for (VAR14 = 0; VAR14 < VAR9->VAR20; VAR14++)
    {
        if (!VAR4->VAR21)
            VAR4->VAR22[VAR14] = VAR4->VAR22[VAR14] + VAR4->VAR23[VAR14];
        else
            VAR13->VAR22[VAR14] = VAR13->VAR22[VAR14] + VAR13->VAR23[VAR14];
        VAR4->VAR23[VAR14] *= 2;
        VAR13->VAR23[VAR14] *= 2;
    }
    VAR4->VAR24 = VAR11->VAR25 * VAR9->VAR26;
    VAR15 = FUN4(VAR11, VAR4);
    if (VAR15 < 0)
        return VAR15;
    VAR13->VAR24 = VAR11->VAR25 * VAR9->VAR26;
    return FUN4(VAR11, VAR13);
}