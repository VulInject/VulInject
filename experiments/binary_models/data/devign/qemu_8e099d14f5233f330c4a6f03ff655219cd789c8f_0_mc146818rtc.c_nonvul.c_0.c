static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    int VAR9 = 0x70;
    VAR8->VAR10[VAR11] = 0x26;
    VAR8->VAR10[VAR12] = 0x02;
    VAR8->VAR10[VAR13] = 0x00;
    VAR8->VAR10[VAR14] = 0x80;
    if (VAR8->VAR15 == 2000)
    {
        VAR8->VAR15 = 0;
    }
    FUN4(VAR6);
    switch (VAR8->VAR16)
    {
    case VAR17:
        VAR8->VAR18 = FUN5(VAR19, VAR20, VAR8);
        break;
    case VAR21:
        break;
    default:
        FUN6(VAR4, "");
        return;
    }
    VAR8->VAR22 = FUN5(VAR19, VAR23, VAR8);
    VAR8->VAR24 = FUN5(VAR19, VAR25, VAR8);
    FUN7(VAR8);
    VAR8->VAR26.VAR27 = VAR28;
    FUN8(VAR19, &VAR8->VAR26);
    VAR8->VAR29.VAR27 = VAR30;
    FUN9(&VAR8->VAR29);
    FUN10(&VAR8->VAR31, FUN11(VAR8), &VAR32, VAR8, "", 2);
    FUN12(VAR6, &VAR8->VAR31, VAR9);
    FUN13(VAR2, VAR9, 3);
    FUN14(VAR33, VAR8);
    FUN15(FUN11(VAR8), "", VAR34, NULL);
    FUN16(FUN17(), "", FUN11(VAR8), "", NULL);
}