static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2);
    VAR5 *VAR6;
    int VAR7;
    for (VAR7 = 0; VAR7 < 4; VAR7++)
    {
        FUN3(VAR2, &VAR4->VAR8[VAR7]);
    }
    VAR6 = FUN4(&VAR2->VAR9, "", VAR10, VAR11, VAR4->VAR8, FUN5(), FUN6(), FUN7(11, 0), 4);
    FUN8(&VAR4->VAR12, &VAR13, VAR6, "", 0x1000000);
    FUN9(VAR2, &VAR4->VAR12);
    FUN8(&VAR4->VAR14, &VAR13, VAR6, "", 0x1000000);
    FUN9(VAR2, &VAR4->VAR14);
    if (VAR4->VAR15)
    {
        FUN10(&VAR4->VAR16, 0x0100000);
        FUN9(VAR2, &VAR4->VAR16);
    }
    FUN11(VAR6, -1, "");
    return 0;
}