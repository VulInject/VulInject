static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR3 *VAR7 = &VAR6->VAR8;
    const VAR9 *VAR10 = FUN2(VAR7->VAR11);
    int VAR12;
    int VAR13 = FUN3(VAR4, VAR7);
    if (VAR13 < 0)
        return VAR13;
    FUN4(&VAR4->VAR14, "", FUN5(VAR2), 0);
    if (!VAR6->VAR15)
        return 0;
    for (VAR12 = 0; VAR12 < VAR10->VAR16; VAR12++)
    {
        int VAR17 = (VAR12 > 0) ? VAR10->VAR18 : 0;
        int VAR19 = (VAR12 > 0) ? VAR10->VAR20 : 0;
        int VAR21 = ((VAR6->VAR22 >> VAR17) << VAR2->VAR23) + (VAR6->VAR24 >> VAR19) * VAR4->VAR25[VAR12];
        VAR4->VAR26[VAR12] += VAR21;
    }
    return 0;
}