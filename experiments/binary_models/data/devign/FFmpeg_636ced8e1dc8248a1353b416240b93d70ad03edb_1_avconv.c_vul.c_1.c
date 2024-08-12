static void FUN1(VAR1 *VAR2, int VAR3)
{
    const char *VAR4 = VAR3 ? "" : "";
    VAR1 *VAR5;
    FUN2(NULL, VAR6, ""
                               "",
           VAR4, VAR2->VAR7);
    VAR5 = VAR3 ? FUN3(VAR2->VAR8) : FUN4(VAR2->VAR8);
    if (!(VAR5->VAR9 & VAR10))
        FUN2(NULL, VAR6, "", VAR4, VAR5->VAR7);
    FUN5(1);
}