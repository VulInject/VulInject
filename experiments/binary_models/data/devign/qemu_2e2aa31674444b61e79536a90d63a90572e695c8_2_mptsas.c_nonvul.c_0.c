static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR3 *VAR9 = NULL;
    int VAR10;
    VAR2->VAR11[VAR12] = 0;
    VAR2->VAR11[VAR13] = 0x01;
    if (VAR8->VAR14 != VAR15)
    {
        VAR10 = FUN4(VAR2, 0, 1, true, false, &VAR9);
        assert(!VAR10 || VAR10 == -VAR16);
        if (VAR10 && VAR8->VAR14 == VAR17)
        {
            FUN5(&VAR9, ""
                                    "");
            FUN6(VAR4, VAR9);
            return;
        }
        assert(!VAR9 || VAR8->VAR14 == VAR18);
        FUN7(VAR9);
    }
    FUN8(&VAR8->VAR19, FUN9(VAR8), &VAR20, VAR8, "", 0x4000);
    FUN8(&VAR8->VAR21, FUN9(VAR8), &VAR22, VAR8, "", 256);
    FUN8(&VAR8->VAR23, FUN9(VAR8), &VAR24, VAR8, "", 0x10000);
    FUN10(VAR2, 0, VAR25, &VAR8->VAR21);
    FUN10(VAR2, 1, VAR26 | VAR27, &VAR8->VAR19);
    FUN10(VAR2, 2, VAR26 | VAR27, &VAR8->VAR23);
    if (!VAR8->VAR28)
    {
        VAR8->VAR28 = ((VAR29 << 24) | VAR30) << 36;
        VAR8->VAR28 |= (FUN11(VAR2->VAR31) << 16);
        VAR8->VAR28 |= (FUN12(VAR2->VAR32) << 8);
        VAR8->VAR28 |= FUN13(VAR2->VAR32);
    }
    VAR8->VAR33 = VAR34;
    VAR8->VAR35 = FUN14(VAR36, VAR8);
    FUN15(&VAR8->VAR37);
    FUN16(&VAR8->VAR31, sizeof(VAR8->VAR31), &VAR2->VAR38, &VAR39, NULL);
    if (!VAR6->VAR40)
    {
        FUN17(&VAR8->VAR31, VAR4);
    }
}