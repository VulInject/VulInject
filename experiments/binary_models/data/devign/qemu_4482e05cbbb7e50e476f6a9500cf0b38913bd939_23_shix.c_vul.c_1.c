static void FUN1(VAR1 *VAR2)
{
    const char *VAR3 = VAR2->VAR3;
    int VAR4;
    VAR5 *VAR6;
    struct VAR7 *VAR8;
    VAR9 *VAR10 = FUN2();
    VAR9 *VAR11 = FUN3(VAR9, 1);
    VAR9 *VAR12 = FUN3(VAR9, 2);
    if (!VAR3)
        VAR3 = "";
    VAR6 = FUN4(FUN5(VAR13, VAR3));
    if (VAR6 == NULL)
    {
        fprintf(VAR14, "");
        FUN6(1);
    }
    FUN7(VAR11, NULL, "", 0x4000, &VAR15);
    FUN8(VAR11, true);
    FUN9(VAR10, 0x00000000, VAR11);
    FUN7(&VAR12[0], NULL, "", 0x01000000, &VAR15);
    FUN9(VAR10, 0x08000000, &VAR12[0]);
    FUN7(&VAR12[1], NULL, "", 0x01000000, &VAR15);
    FUN9(VAR10, 0x0c000000, &VAR12[1]);
    if (VAR16 == NULL)
        VAR16 = VAR17;
    VAR4 = FUN10(VAR16, 0, 0x4000);
    if (VAR4 < 0 && !FUN11())
    {
        FUN12("", VAR16);
        FUN6(1);
    }
    VAR8 = FUN13(VAR6, VAR10);
    FUN14(VAR8, "", NULL);
}