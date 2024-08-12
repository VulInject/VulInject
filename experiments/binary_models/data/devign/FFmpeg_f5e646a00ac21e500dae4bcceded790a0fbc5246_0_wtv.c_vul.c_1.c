static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    char VAR6[1024];
    char VAR7[1024];
    unsigned int VAR8;
    VAR9 *VAR10;
    int64_t VAR11 = FUN2(VAR4);
    FUN3(VAR4, VAR12, VAR6, sizeof(VAR6));
    if (strcmp(VAR6, ""))
        goto VAR13;
    FUN4(VAR4);
    FUN3(VAR4, VAR12, VAR7, sizeof(VAR7));
    VAR8 = FUN5(VAR4);
    if (!VAR8)
        goto VAR13;
    VAR10 = FUN6(VAR2, NULL);
    if (!VAR10)
        goto VAR13;
    FUN7(&VAR10->VAR14, "", VAR7, 0);
    VAR10->VAR15->VAR16 = VAR17;
    VAR10->VAR15->VAR18 = VAR19;
    VAR10->VAR15->VAR20 = FUN8(VAR8);
    if (!VAR10->VAR15->VAR20)
        goto VAR13;
    VAR10->VAR15->VAR21 = VAR8;
    FUN9(VAR4, VAR10->VAR15->VAR20, VAR8);
VAR13:
    FUN10(VAR4, VAR11 + VAR5, VAR22);