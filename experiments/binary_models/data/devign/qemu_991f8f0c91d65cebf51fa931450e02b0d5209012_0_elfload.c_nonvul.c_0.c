static int FUN1(struct VAR1 *VAR2, const VAR3 *VAR4)
{
    char *VAR5, *VAR6;
    unsigned int VAR7, VAR8;
    (void)memset(VAR2, 0, sizeof(*VAR2));
    VAR8 = VAR4->VAR9->VAR10 - VAR4->VAR9->VAR11;
    if (VAR8 >= VAR12)
        VAR8 = VAR12 - 1;
    if (FUN2(&VAR2->VAR13, VAR4->VAR9->VAR11, VAR8))
        return -VAR14;
    for (VAR7 = 0; VAR7 < VAR8; VAR7++)
        if (VAR2->VAR13[VAR7] == 0)
            VAR2->VAR13[VAR7] = '';
    VAR2->VAR13[VAR8] = 0;
    VAR2->VAR15 = FUN3();
    VAR2->VAR16 = FUN4();
    VAR2->VAR17 = FUN5();
    VAR2->VAR18 = FUN6(0);
    VAR2->VAR19 = FUN7();
    VAR2->VAR20 = FUN8();
    VAR5 = strdup(VAR4->VAR21->VAR5);
    VAR6 = strdup(FUN9(VAR5));
    (void)strncpy(VAR2->VAR22, VAR6, sizeof(VAR2->VAR22));
    free(VAR6);
    free(VAR5);
    FUN10(VAR2);
    return (0);
}