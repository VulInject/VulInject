static int FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3, VAR2);
    char *VAR5, *VAR6;
    VAR6 = FUN3(VAR7, VAR4->VAR2.VAR6);
    snprintf(VAR4->VAR8, sizeof(VAR4->VAR8), "", VAR6);
    free(VAR6);
    VAR5 = FUN4(VAR4->VAR8, "");
    if (!VAR5 || strcmp(VAR5, "") != 0)
    {
        FUN5(VAR2, 1, "", VAR5);
        return -1;
    }
    if (!VAR9[VAR4->VAR2.VAR10])
        FUN5(VAR2, 1, "", VAR4->VAR2.VAR10);
    else
        VAR4->VAR11 = VAR9[VAR4->VAR2.VAR10];
    return 0;
}