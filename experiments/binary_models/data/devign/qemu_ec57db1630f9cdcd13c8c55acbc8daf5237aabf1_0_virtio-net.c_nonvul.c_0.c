static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    int VAR6;
    FUN3(VAR5, !!(VAR3 & (1 << VAR7)));
    FUN4(VAR5, !!(VAR3 & (1 << VAR8)));
    if (VAR5->VAR9)
    {
        FUN5(FUN6(VAR5->VAR10, 0)->VAR11, (VAR3 >> VAR12) & 1, (VAR3 >> VAR13) & 1, (VAR3 >> VAR14) & 1, (VAR3 >> VAR15) & 1, (VAR3 >> VAR16) & 1);
    }
    for (VAR6 = 0; VAR6 < VAR5->VAR17; VAR6++)
    {
        VAR18 *VAR19 = FUN6(VAR5->VAR10, VAR6);
        if (!VAR19->VAR11 || VAR19->VAR11->VAR20->VAR21 != VAR22)
        {
            continue;
        }
        if (!FUN7(VAR19->VAR11))
        {
            continue;
        }
        FUN8(FUN7(VAR19->VAR11), VAR3);
    }
}