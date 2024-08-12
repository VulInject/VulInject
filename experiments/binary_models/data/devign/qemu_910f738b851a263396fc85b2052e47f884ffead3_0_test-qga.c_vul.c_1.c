static void FUN1(gconstpointer VAR1)
{
    const VAR2 *VAR3 = VAR1;
    VAR4 *VAR5, *VAR6;
    const VAR7 *class, *VAR8;
    VAR5 = FUN2(VAR3->VAR9, ""
                              "");
    FUN3(VAR5);
    VAR6 = FUN4(VAR5, "");
    class = FUN5(VAR6, "");
    VAR8 = FUN5(VAR6, "");
    FUN6(class, ==, "");
    FUN6(VAR8, ==, "");
    FUN7(VAR5);
}