static void FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    VAR5 *VAR6, *VAR7;
    const char *VAR8;
    VAR6 = FUN2(VAR2, "");
    VAR7 = FUN3(VAR6, "");
    VAR8 = FUN4("" VAR9, FUN5(VAR7, VAR3, -1));
    FUN6(VAR8, ==, VAR4);
    FUN7(VAR6);
}