static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR2->VAR9[VAR10] = 0;
    VAR2->VAR9[VAR11] = 0x01;
    FUN4(&VAR8->VAR12, FUN5(VAR8), &VAR13, VAR8, "", 0x4000);
    FUN4(&VAR8->VAR14, FUN5(VAR8), &VAR15, VAR8, "", 256);
    FUN4(&VAR8->VAR16, FUN5(VAR8), &VAR17, VAR8, "", 0x10000);
    if (VAR8->VAR18 != VAR19 && FUN6(VAR2, 0, 1, true, false) >= 0)
    {
        VAR8->VAR20 = true;
    }
    FUN7(VAR2, 0, VAR21, &VAR8->VAR14);
    FUN7(VAR2, 1, VAR22 | VAR23, &VAR8->VAR12);
    FUN7(VAR2, 2, VAR22 | VAR23, &VAR8->VAR16);
    if (!VAR8->VAR24)
    {
        VAR8->VAR24 = ((VAR25 << 24) | VAR26) << 36;
        VAR8->VAR24 |= (FUN8(VAR2->VAR27) << 16);
        VAR8->VAR24 |= (FUN9(VAR2->VAR28) << 8);
        VAR8->VAR24 |= FUN10(VAR2->VAR28);
    }
    VAR8->VAR29 = VAR30;
    VAR8->VAR31 = FUN11(VAR32, VAR8);
    FUN12(&VAR8->VAR33);
    FUN13(&VAR8->VAR27, sizeof(VAR8->VAR27), &VAR2->VAR34, &VAR35, NULL);
    if (!VAR6->VAR36)
    {
        FUN14(&VAR8->VAR27, VAR4);
    }
}