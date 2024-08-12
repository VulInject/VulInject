static void FUN1(const char *VAR1)
{
    VAR2 *VAR3;
    void *VAR4, *VAR5;
    uint8_t VAR6;
    const char *VAR7;
    FUN2(VAR8, "");
    FUN3(""
                   ""
                   "",
                   VAR8, VAR9);
    VAR3 = FUN4(&VAR4, &VAR5);
    FUN5(VAR10, "");
    FUN6(0);
    FUN7(VAR3, VAR5 + VAR11, 0);
    FUN7(VAR3, VAR5 + VAR12, VAR13);
    VAR6 = FUN8(VAR3, VAR5 + VAR14);
    FUN9(VAR6, VAR15 | VAR16);
    FUN10(VAR6, VAR17 | VAR18 | VAR19);
    FUN11("");
    VAR7 = "";
    FUN12(VAR7);
    VAR6 = FUN8(VAR3, VAR5 + VAR11);
    FUN13(VAR6 & VAR20, ==, 0);
    do
    {
        VAR6 = FUN8(VAR3, VAR5 + VAR14);
    } while (VAR6 & VAR15);
    FUN9(VAR6, VAR16);
    FUN10(VAR6, VAR15 | VAR17 | VAR18 | VAR19);
    FUN14();
}