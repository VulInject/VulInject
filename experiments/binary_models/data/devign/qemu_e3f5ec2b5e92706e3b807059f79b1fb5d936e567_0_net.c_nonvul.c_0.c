static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, int VAR6, const char *VAR7, int VAR8)
{
    VAR9 *VAR10;
    char *VAR11 = strlen(VAR7) ? (char *)VAR7 : NULL;
    char *VAR12 = strlen(VAR5) ? (char *)VAR5 : NULL;
    struct vde_open_args VAR13 = {
        .VAR6 = VAR6,
        .VAR7 = VAR11,
        .VAR8 = VAR8,
    };
    VAR10 = FUN2(sizeof(VAR9));
    VAR10->VAR14 = FUN3(VAR12, (char *)"", &VAR13);
    if (!VAR10->VAR14)
    {
        free(VAR10);
        return -1;
    }
    VAR10->VAR15 = FUN4(VAR2, VAR3, VAR4, NULL, VAR16, NULL, VAR17, VAR10);
    FUN5(FUN6(VAR10->VAR14), VAR18, NULL, VAR10);
    snprintf(VAR10->VAR15->VAR19, sizeof(VAR10->VAR15->VAR19), "", VAR5, FUN6(VAR10->VAR14));
    return 0;
}