static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8;
    struct VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = VAR6->VAR3;
    int VAR14 = VAR6->VAR15;
    VAR16 *VAR17 = VAR3;
    int VAR18 = VAR2->VAR19 * FUN2(VAR2->VAR20);
    if (*VAR4 < VAR18)
    {
        FUN3(VAR2, VAR21, "");
        return FUN4(VAR22);
    }
    if (VAR14 < VAR2->VAR23)
    {
        FUN3(VAR2, VAR21, "");
        return VAR24;
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR19 / VAR25; VAR7++)
    {
        if ((VAR8 = FUN5(VAR10, VAR13, VAR17)) < 0)
            return -1;
        VAR13 += VAR26;
        VAR17 += VAR25;
    }
    *VAR4 = VAR18;
    return VAR2->VAR23;
}