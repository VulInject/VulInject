static int FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3, VAR2);
    char *VAR5, *VAR6, VAR7[32];
    int VAR8 = 0;
    const char *VAR9;
    VAR6 = FUN3(VAR10, VAR4->VAR2.VAR6);
    snprintf(VAR4->VAR11, sizeof(VAR4->VAR11), "", VAR6);
    free(VAR6);
    VAR5 = FUN4(VAR4->VAR11, "");
    if (!VAR5 || strcmp(VAR5, "") != 0)
    {
        FUN5(VAR2, 1, "", VAR5);
        VAR8 = -1;
        goto VAR12;
    }
    VAR9 = FUN4(VAR4->VAR11, "");
    if (VAR9 == NULL)
    {
        VAR9 = "";
    }
    snprintf(VAR7, sizeof(VAR7), "", VAR4->VAR2.VAR13);
    VAR4->VAR14 = FUN6(VAR7, VAR9, NULL);
    FUN7(VAR4->VAR2.VAR13, VAR4->VAR14);
VAR12:
    FUN8(VAR5);
    return VAR8;
}