static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10 = &VAR8->VAR10;
    VAR3 *VAR11 = NULL;
    static int VAR12;
    if (!VAR10->VAR10.VAR13)
    {
        FUN4(VAR4, "");
        return;
    }
    if (!FUN5(VAR10->VAR10.VAR13))
    {
        FUN4(VAR4, "");
        return;
    }
    FUN6(&VAR10->VAR10, &VAR10->VAR14);
    VAR8->VAR15 = FUN7(VAR10->VAR10.VAR13);
    FUN8(&VAR10->VAR10, NULL, 65535, 255, 255, &VAR11);
    if (VAR11)
    {
        FUN9(VAR4, VAR11);
        return;
    }
    FUN10(VAR6, "", VAR16, sizeof(struct VAR17));
    VAR8->VAR13 = VAR10->VAR10.VAR13;
    VAR8->VAR18 = NULL;
    VAR8->VAR19 = (VAR8->VAR10.VAR10.VAR20 / VAR21) - 1;
    VAR8->VAR22 = FUN11(VAR6, 128, VAR23);
    VAR8->VAR24 = VAR25;
    FUN12(VAR6, VAR10, &VAR8->VAR26, &VAR11);
    if (VAR11 != NULL)
    {
        FUN9(VAR4, VAR11);
        FUN13(VAR6);
        return;
    }
    VAR8->VAR27.VAR28 = VAR29;
    FUN14(&VAR8->VAR27);
    VAR8->VAR30 = FUN15(VAR31, VAR8);
    FUN16(VAR2, "", VAR12++, 2, VAR32, VAR33, VAR8);
    FUN17(VAR8->VAR13, &VAR34, VAR8);
    FUN18(VAR8->VAR13, VAR8->VAR10.VAR10.VAR20);
    FUN19(VAR8->VAR13);
}