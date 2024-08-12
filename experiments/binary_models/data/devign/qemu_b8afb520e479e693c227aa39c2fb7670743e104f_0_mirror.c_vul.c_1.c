static void FUN1(VAR1 *VAR2, VAR1 *VAR3, int64_t VAR4, int64_t VAR5, int64_t VAR6, BlockdevOnError VAR7, BlockdevOnError VAR8, VAR9 *VAR10, void *VAR11, VAR12 **VAR13, const VAR14 *VAR15, bool VAR16, VAR1 *VAR17)
{
    VAR18 *VAR19;
    if (VAR5 == 0)
    {
        BlockDriverInfo VAR20;
        if (FUN2(VAR3, &VAR20) >= 0 && VAR20.VAR21 != 0)
        {
            VAR5 = FUN3(4096, VAR20.VAR21);
            VAR5 = FUN4(65536, VAR5);
        }
        else
        {
            VAR5 = 65536;
        }
    }
    assert((VAR5 & (VAR5 - 1)) == 0);
    if ((VAR7 == VAR22 || VAR7 == VAR23) && !FUN5(VAR2))
    {
        FUN6(VAR13, VAR24, "");
        return;
    }
    VAR19 = FUN7(VAR15, VAR2, VAR4, VAR10, VAR11, VAR13);
    if (!VAR19)
    {
        return;
    }
    VAR19->VAR7 = VAR7;
    VAR19->VAR8 = VAR8;
    VAR19->VAR3 = VAR3;
    VAR19->VAR16 = VAR16;
    VAR19->VAR17 = VAR17;
    VAR19->VAR5 = VAR5;
    VAR19->VAR6 = FUN3(VAR6, VAR5);
    VAR19->VAR25 = FUN8(VAR2, VAR5);
    FUN9(VAR19->VAR3, true);
    FUN10(VAR19->VAR3, VAR8, VAR8);
    FUN11(VAR19->VAR3);
    VAR19->VAR26.VAR27 = FUN12(VAR28);
    FUN13(VAR2, VAR19, VAR19->VAR26.VAR27, VAR11);
    FUN14(VAR19->VAR26.VAR27, VAR19);
}