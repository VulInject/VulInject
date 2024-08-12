int FUN1(VAR1 *VAR2)
{
    char VAR3[256], VAR4[256];
    int VAR5 = 202 * 256 + 16 * VAR2->VAR6;
    int VAR7 = VAR2->VAR8;
    const char *VAR9 = VAR7 ? "" : "";
    const char *VAR10 = VAR7 ? "" : "";
    snprintf(VAR2->VAR11->VAR12, sizeof(VAR2->VAR11->VAR12), "", '' + VAR2->VAR6);
    FUN2(NULL, 1, "", VAR2->VAR6, VAR2->VAR11->VAR12, VAR2->VAR11->VAR13);
    FUN3("", "", VAR5, VAR3, VAR4, sizeof(VAR3));
    FUN4(VAR3, "", VAR5);
    FUN5(VAR3, "", VAR9);
    FUN5(VAR4, "", VAR2->VAR11->VAR12);
    FUN5(VAR4, "", "");
    FUN5(VAR4, "", VAR2->VAR11->VAR13);
    FUN5(VAR4, "", VAR10);
    return FUN6(VAR3, VAR4);
}