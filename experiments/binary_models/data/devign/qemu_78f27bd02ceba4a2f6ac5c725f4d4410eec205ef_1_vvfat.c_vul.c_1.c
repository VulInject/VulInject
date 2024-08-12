static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    int VAR7;
    int VAR8 = FUN2(VAR2, VAR2->VAR9);
    VAR2->VAR10 = calloc(VAR8, 1);
    FUN3(&(VAR2->VAR11), sizeof(VAR12));
    VAR2->VAR13 = FUN4(1024);
    VAR7 = FUN5(VAR2->VAR13, 1024);
    if (VAR7 < 0)
    {
        FUN6(VAR2->VAR13);
        VAR2->VAR13 = NULL;
        return VAR7;
    }
    VAR4 = FUN7("");
    VAR6 = FUN8("", VAR4->VAR14, NULL);
    FUN9(VAR6, VAR15, VAR2->VAR9 * 512);
    FUN10(VAR6, VAR16, "");
    if (FUN11(VAR4, VAR2->VAR13, VAR6) < 0)
        return -1;
    VAR2->VAR17 = FUN12("");
    if (VAR2->VAR17 == NULL)
    {
        return -1;
    }
    VAR7 = FUN13(VAR2->VAR17, VAR2->VAR13, NULL, VAR18 | VAR19 | VAR20, VAR4);
    if (VAR7 < 0)
    {
        return VAR7;
    }
    unlink(VAR2->VAR13);
    VAR2->VAR21->VAR22 = calloc(sizeof(VAR23), 1);
    VAR2->VAR21->VAR22->VAR24 = &VAR25;
    VAR2->VAR21->VAR22->VAR26 = FUN4(sizeof(void *));
    *(void **)VAR2->VAR21->VAR22->VAR26 = VAR2;
    return 0;
}