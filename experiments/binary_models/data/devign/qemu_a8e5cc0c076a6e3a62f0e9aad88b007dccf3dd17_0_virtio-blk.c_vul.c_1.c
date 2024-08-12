static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR7 *VAR8 = &(VAR6->VAR8);
    static int VAR9;
    if (!VAR8->VAR10.VAR11)
    {
        FUN4("");
        return -1;
    }
    if (!FUN5(VAR8->VAR10.VAR11))
    {
        FUN4("");
        return -1;
    }
    FUN6(&VAR8->VAR10, &VAR8->VAR12);
    if (FUN7(&VAR8->VAR10, NULL, 65535, 255, 255) < 0)
    {
        return -1;
    }
    FUN8(VAR2, "", VAR13, sizeof(struct VAR14));
    VAR2->VAR15 = VAR16;
    VAR2->VAR17 = VAR18;
    VAR2->VAR19 = VAR20;
    VAR2->VAR21 = VAR22;
    VAR2->VAR23 = VAR24;
    VAR6->VAR11 = VAR8->VAR10.VAR11;
    VAR6->VAR10 = &VAR8->VAR10;
    memcpy(&(VAR6->VAR8), VAR8, sizeof(struct VAR7));
    VAR6->VAR25 = NULL;
    VAR6->VAR26 = (VAR6->VAR10->VAR27 / VAR28) - 1;
    VAR6->VAR29 = FUN9(VAR2, 128, VAR30);
    if (!FUN10(VAR2, VAR8, &VAR6->VAR31))
    {
        FUN11(VAR2);
        return -1;
    }
    VAR6->VAR32 = FUN12(VAR33, VAR6);
    FUN13(VAR4, "", VAR9++, 2, VAR34, VAR35, VAR6);
    FUN14(VAR6->VAR11, &VAR36, VAR6);
    FUN15(VAR6->VAR11, VAR6->VAR10->VAR27);
    FUN16(VAR6->VAR11);
    FUN17(VAR6->VAR10->VAR37, VAR4, "");
    return 0;
}