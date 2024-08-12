static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    VAR16 *VAR17 = &VAR12->VAR17;
    float *VAR18[255];
    int VAR19, VAR20, VAR21;
    FUN2(NULL, "", VAR9);
    VAR15->VAR22 = VAR12->VAR23[1] / 2;
    if ((VAR21 = FUN3(VAR2, VAR15, 0)) < 0)
    {
        FUN4(VAR2, VAR24, "");
        return VAR21;
    }
    if (VAR12->VAR25 > 8)
    {
        for (VAR19 = 0; VAR19 < VAR12->VAR25; VAR19++)
            VAR18[VAR19] = (float *)VAR15->VAR26[VAR19];
    }
    else
    {
        for (VAR19 = 0; VAR19 < VAR12->VAR25; VAR19++)
        {
            int VAR27 = VAR28[VAR12->VAR25 - 1][VAR19];
            VAR18[VAR27] = (float *)VAR15->VAR26[VAR19];
        }
    }
    FUN5(VAR17, VAR8, VAR9 * 8);
    if ((VAR20 = FUN6(VAR12, VAR18)) <= 0)
        return VAR20;
    if (!VAR12->VAR29)
    {
        VAR12->VAR29 = 1;
        *VAR4 = 0;
        return VAR9;
    }
    FUN2(NULL, "", FUN7(VAR17) / 8, FUN7(VAR17) % 8, VAR20);
    VAR15->VAR22 = VAR20;
    *VAR4 = 1;
    return VAR9;