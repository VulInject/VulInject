static inline int FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, int VAR5, VAR6 *VAR7, int *VAR8, VAR9 *VAR10);
static int FUN2(VAR1 *VAR2, VAR11 *VAR12, int VAR13)
{
    int VAR14;
    VAR14 = FUN3(VAR2, VAR15) ? 32 : 16;
    if (VAR13 < VAR14)
    {
        FUN4(VAR12, VAR2->VAR16.VAR17[VAR13]);
        return 8;
    }
    if (FUN3(VAR2, VAR18))
    {
        VAR14 += 16;
        if (VAR13 < VAR14)
        {
            FUN4(VAR12, VAR2->VAR16.VAR17[(VAR13 - 32) * 2]);
            FUN4(VAR12 + 8, VAR2->VAR16.VAR17[(VAR13 - 32) * 2 + 1]);
            return 16;
        }
    }
    switch (VAR13 - VAR14)
    {
    case 0:
        FUN5(VAR12, VAR2->VAR16.VAR19[VAR20]);
        return 4;
    case 1:
        FUN5(VAR12, VAR2->VAR16.VAR19[VAR21]);
        return 4;
    case 2:
        FUN5(VAR12, VAR2->VAR16.VAR19[VAR22]);
        return 4;
    }
    return 0;
}