static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14 = 0, VAR15;
    const VAR7 *VAR16;
    float *VAR17 = VAR3;
    if (VAR9 < VAR2->VAR18)
    {
        FUN2(VAR2, VAR19, "", VAR9);
        *VAR4 = 0;
        return VAR9;
    }
    VAR15 = 1024 * VAR12->VAR20 * FUN3(VAR2->VAR21);
    if (*VAR4 < VAR15)
    {
        FUN2(VAR2, VAR19, "");
        return FUN4(VAR22);
    }
    if (VAR12->VAR23)
    {
        FUN5(VAR8, VAR12->VAR24, VAR2->VAR18);
        VAR16 = VAR12->VAR24;
    }
    else
    {
        VAR16 = VAR8;
    }
    VAR14 = FUN6(VAR12, VAR16, VAR12->VAR20 == 2 ? VAR12->VAR25 : &VAR17);
    if (VAR14 != 0)
    {
        FUN2(NULL, VAR19, "");
        return -1;
    }
    if (VAR12->VAR20 == 2)
    {
        VAR12->VAR26.FUN7(VAR17, (const float **)VAR12->VAR25, 1024, 2);
    }
    *VAR4 = VAR15;
    return VAR2->VAR18;
}