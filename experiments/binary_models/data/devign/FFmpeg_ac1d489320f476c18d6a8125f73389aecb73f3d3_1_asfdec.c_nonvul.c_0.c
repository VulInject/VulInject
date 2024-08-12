static void FUN1(VAR1 *VAR2, int VAR3)
{
    ff_asf_guid VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    int64_t VAR8 = FUN2(VAR2->VAR9);
    int VAR10;
    if (FUN3(VAR2->VAR9, VAR6->VAR11 + VAR6->VAR12, VAR13) < 0)
        return;
    FUN4(VAR2->VAR9, &VAR4);
    while (FUN5(&VAR4, &VAR14))
    {
        int64_t VAR15 = FUN6(VAR2->VAR9);
        if (VAR15 < 24 || FUN7(VAR2->VAR9))
        {
            FUN3(VAR2->VAR9, VAR8, VAR13);
            return;
        }
        FUN8(VAR2->VAR9, VAR15 - 24);
        FUN4(VAR2->VAR9, &VAR4);
    }
    {
        int64_t VAR16, VAR17 = -1;
        int VAR18, VAR19;
        int64_t av_unused VAR15 = FUN6(VAR2->VAR9);
        FUN4(VAR2->VAR9, &VAR4);
        VAR16 = FUN6(VAR2->VAR9);
        VAR18 = FUN9(VAR2->VAR9);
        VAR19 = FUN9(VAR2->VAR9);
        FUN10(VAR2, VAR20, "" VAR21 "", VAR16, VAR18, VAR19);
        for (VAR10 = 0; VAR10 < VAR19; VAR10++)
        {
            int VAR22 = FUN9(VAR2->VAR9);
            int VAR23 = FUN11(VAR2->VAR9);
            int64_t VAR24 = VAR2->VAR25 + VAR2->VAR26 * (VAR27)VAR22;
            int64_t VAR28 = FUN12(FUN13(VAR16, VAR10, 10000) - VAR6->VAR29.VAR30, 0);
            if (VAR24 != VAR17)
            {
                FUN10(VAR2, VAR20, "" VAR31 "", VAR22, VAR23, VAR28);
                FUN14(VAR2->VAR32[VAR3], VAR24, VAR28, VAR2->VAR26, 0, VAR33);
                VAR17 = VAR24;
            }
        }
        VAR6->VAR34 = 1;
    }
    FUN3(VAR2->VAR9, VAR8, VAR13);
}