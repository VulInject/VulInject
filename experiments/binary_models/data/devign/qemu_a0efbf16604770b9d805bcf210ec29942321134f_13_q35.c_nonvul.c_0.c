static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    FUN4(&VAR6->VAR7, VAR2, &VAR8, VAR6, "", 4);
    FUN4(&VAR6->VAR9, VAR2, &VAR10, VAR6, "", 4);
    FUN5(&VAR4->VAR11, sizeof(VAR4->VAR11), VAR12);
    FUN6(FUN7(VAR4), "", FUN7(&VAR4->VAR11), NULL);
    FUN8(FUN9(&VAR4->VAR11), "", FUN10(0, 0));
    FUN11(FUN9(&VAR4->VAR11), "", false);
    FUN12(VAR2, VAR13, "", VAR14, NULL, NULL, NULL, NULL);
    FUN12(VAR2, VAR15, "", VAR16, NULL, NULL, NULL, NULL);
    FUN12(VAR2, VAR17, "", VAR18, NULL, NULL, NULL, NULL);
    FUN12(VAR2, VAR19, "", VAR20, NULL, NULL, NULL, NULL);
    FUN12(VAR2, VAR21, "", VAR22, NULL, NULL, NULL, NULL);
    FUN13(VAR2, VAR23, VAR24, (VAR1 **)&VAR4->VAR11.VAR25, VAR26, 0, NULL);
    FUN13(VAR2, VAR27, VAR24, (VAR1 **)&VAR4->VAR11.VAR28, VAR26, 0, NULL);
    FUN13(VAR2, VAR29, VAR24, (VAR1 **)&VAR4->VAR11.VAR30, VAR26, 0, NULL);
    FUN13(VAR2, VAR31, VAR24, (VAR1 **)&VAR4->VAR11.VAR32, VAR26, 0, NULL);
    FUN14(&VAR4->VAR11.VAR33, VAR34 + VAR35, VAR36 - 1);
}