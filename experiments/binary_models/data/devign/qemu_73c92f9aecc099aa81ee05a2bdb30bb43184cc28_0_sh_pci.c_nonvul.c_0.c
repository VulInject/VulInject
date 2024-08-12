static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5;
    VAR4 = FUN2(VAR3, VAR2);
    for (VAR5 = 0; VAR5 < 4; VAR5++)
    {
        FUN3(VAR2, &VAR4->VAR6[VAR5]);
    }
    VAR4->VAR7 = FUN4(&VAR4->VAR8.VAR9, "", VAR10, VAR11, VAR4->VAR6, FUN5(), FUN6(), FUN7(0, 0), 4);
    FUN8(&VAR4->VAR12, &VAR13, VAR4, "", 0x224);
    FUN9(&VAR4->VAR14, "", &VAR4->VAR12, 0, 0x224);
    FUN10(&VAR4->VAR15, 0x40000);
    FUN11(VAR2, VAR16, VAR17);
    FUN12(VAR2, &VAR4->VAR14);
    FUN12(VAR2, &VAR4->VAR15);
    VAR4->VAR2 = FUN13(VAR4->VAR7, FUN7(0, 0), "");
    return 0;
}