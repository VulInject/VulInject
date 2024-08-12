int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10 = VAR6->VAR3;
    int VAR11 = VAR6->VAR12;
    VAR13 *VAR14 = VAR2->VAR15;
    const VAR16 *VAR17 = VAR14->VAR17;
    float **VAR18 = NULL;
    int VAR19;
    if (VAR14->VAR20 >= 2)
    {
        VAR8->VAR21 = VAR17->VAR12;
        if ((VAR19 = FUN2(VAR2, VAR8, 0)) < 0)
        {
            FUN3(VAR2, VAR22, "");
            return VAR19;
        }
        VAR18 = (float **)VAR8->VAR23;
    }
    if (VAR11 < VAR2->VAR24)
    {
        FUN3(VAR2, VAR22, "", VAR11);
        return FUN4(VAR25);
    }
    if ((VAR19 = VAR14->FUN5(VAR2, VAR14, VAR10, VAR11)) < 0)
        return VAR19;
    FUN6(VAR14, VAR14->VAR26, VAR14->VAR27.VAR28);
    FUN7(VAR14, VAR14->VAR27.VAR28, VAR14->VAR27.VAR29, VAR18);
    FUN8(float *, VAR14->VAR30, VAR14->VAR31);
    if (VAR14->VAR20 < 2)
    {
        VAR14->VAR20++;
        *VAR4 = 0;
        return VAR11;
    }
    *VAR4 = 1;
    return VAR2->VAR24;
}