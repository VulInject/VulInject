static bool FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, ARMMMUIdx VAR5, VAR6 *VAR7, VAR8 *VAR9, int *VAR10, VAR11 *VAR12, VAR13 *VAR14, VAR15 *VAR16);
static int FUN2(VAR1 *VAR2, VAR17 *VAR18, int VAR19)
{
    int VAR20;
    VAR20 = FUN3(VAR2, VAR21) ? 32 : 16;
    if (VAR19 < VAR20)
    {
        FUN4(VAR18, VAR2->VAR22.VAR23[VAR19]);
        return 8;
    }
    if (FUN3(VAR2, VAR24))
    {
        VAR20 += 16;
        if (VAR19 < VAR20)
        {
            FUN4(VAR18, VAR2->VAR22.VAR23[(VAR19 - 32) * 2]);
            FUN4(VAR18 + 8, VAR2->VAR22.VAR23[(VAR19 - 32) * 2 + 1]);
            return 16;
        }
    }
    switch (VAR19 - VAR20)
    {
    case 0:
        FUN5(VAR18, VAR2->VAR22.VAR25[VAR26]);
        return 4;
    case 1:
        FUN5(VAR18, VAR2->VAR22.VAR25[VAR27]);
        return 4;
    case 2:
        FUN5(VAR18, VAR2->VAR22.VAR25[VAR28]);
        return 4;
    }
    return 0;
}