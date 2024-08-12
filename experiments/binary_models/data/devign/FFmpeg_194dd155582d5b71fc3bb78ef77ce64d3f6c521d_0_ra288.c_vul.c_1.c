static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10 = VAR6->VAR3;
    int VAR11 = VAR6->VAR12;
    float *VAR13;
    int VAR14, VAR15;
    VAR16 *VAR17 = VAR2->VAR18;
    GetBitContext VAR19;
    if (VAR11 < VAR2->VAR20)
    {
        FUN2(VAR2, VAR21, "", VAR11, VAR2->VAR20);
        return VAR22;
    }
    VAR8->VAR23 = VAR24 * VAR25;
    if ((VAR15 = FUN3(VAR2, VAR8, 0)) < 0)
        return VAR15;
    VAR13 = (float *)VAR8->VAR3[0];
    FUN4(&VAR19, VAR10, VAR2->VAR20);
    for (VAR14 = 0; VAR14 < VAR25; VAR14++)
    {
        float VAR26 = VAR27[FUN5(&VAR19, 3)];
        int VAR28 = FUN5(&VAR19, 6 + (VAR14 & 1));
        FUN6(VAR17, VAR26, VAR28);
        memcpy(VAR13, &VAR17->VAR29[70 + 36], VAR24 * sizeof(*VAR13));
        VAR13 += VAR24;
        if ((VAR14 & 7) == 3)
        {
            FUN7(VAR17, VAR17->VAR29, VAR17->VAR30, VAR31, VAR17->VAR32, VAR33, 36, 40, 35, 70);
            FUN7(VAR17, VAR17->VAR34, VAR17->VAR35, VAR36, VAR17->VAR37, VAR38, 10, 8, 20, 28);
        }
    }
    *VAR4 = 1;
    return VAR2->VAR20;
}