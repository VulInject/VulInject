static void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, unsigned char **VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    char VAR10[4096], VAR11[1024];
    VAR8->VAR12++;
    FUN2(VAR10, VAR3, sizeof(VAR10));
    snprintf(VAR11, sizeof(VAR11), "", VAR8->VAR12);
    FUN3(VAR10, VAR11, sizeof(VAR10));
    if (VAR8->VAR13[0] != '' && !strstr(VAR3, ""))
    {
        snprintf(VAR11, sizeof(VAR11), "", VAR8->VAR13);
        FUN3(VAR10, VAR11, sizeof(VAR10));
    }
    FUN3(VAR10, "", sizeof(VAR10));
    FUN4("", VAR10);
    FUN5(VAR8->VAR14, VAR10, strlen(VAR10));
    FUN6(VAR2, VAR5, VAR6);
}