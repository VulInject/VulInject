static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR3 *VAR7 = VAR6->VAR8;
    const VAR9 *VAR10 = FUN2(VAR7->VAR11);
    int VAR12;
    int VAR13 = FUN3(VAR4, VAR7);
    if (VAR13 < 0)
        return VAR13;
    FUN4(&VAR4->VAR14, "", FUN5(VAR2), 0);
    if (VAR6->VAR15 == 0)
        VAR4->VAR16 = 1;
    if (!VAR6->VAR17)
        return 0;
    for (VAR12 = 0; VAR12 < VAR10->VAR18; VAR12++)
    {
        int VAR19 = (VAR12 > 0) ? VAR10->VAR20 : 0;
        int VAR21 = (VAR12 > 0) ? VAR10->VAR22 : 0;
        int VAR23 = ((VAR6->VAR24 >> VAR19) << VAR2->VAR25) + (VAR6->VAR26 >> VAR21) * VAR4->VAR27[VAR12];
        VAR4->VAR28[VAR12] += VAR23;
    }
    return 0;