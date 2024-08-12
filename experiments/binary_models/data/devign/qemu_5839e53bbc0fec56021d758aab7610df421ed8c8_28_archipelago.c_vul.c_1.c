static VAR1 FUN1(VAR2 *VAR3)
{
    uint64_t VAR4;
    int VAR5, VAR6;
    struct VAR7 *VAR8;
    struct VAR9 *VAR10;
    VAR11 *VAR12 = FUN2(sizeof(VAR11));
    const char *VAR13 = VAR3->VAR13;
    VAR6 = strlen(VAR13);
    VAR8 = FUN3(VAR3->VAR14, VAR3->VAR15, VAR3->VAR16, VAR17);
    if (!VAR8)
    {
        FUN4("");
        goto VAR18;
    }
    VAR5 = FUN5(VAR3->VAR14, VAR8, VAR6, sizeof(struct VAR9));
    if (VAR5 < 0)
    {
        FUN4("");
        goto VAR19;
    }
    char *VAR20 = FUN6(VAR3->VAR14, VAR8);
    if (!VAR20)
    {
        FUN4("");
        goto VAR19;
    }
    memcpy(VAR20, VAR13, VAR6);
    VAR8->VAR4 = VAR8->VAR21;
    VAR8->VAR22 = 0;
    VAR8->VAR23 = VAR24;
    VAR12->VAR23 = VAR25;
    VAR12->VAR13 = VAR13;
    FUN7(VAR3->VAR14, VAR8, VAR12);
    xport VAR26 = FUN8(VAR3->VAR14, VAR8, VAR3->VAR15, VAR17);
    if (VAR26 == VAR27)
    {
        FUN4("");
        goto VAR19;
    }
    FUN9(VAR3->VAR14, VAR26);
    FUN10(&VAR3->VAR28);
    while (!VAR3->VAR29)
    {
        FUN11(&VAR3->VAR30, &VAR3->VAR28);
    }
    VAR3->VAR29 = false;
    FUN12(&VAR3->VAR28);
    VAR10 = (struct VAR9 *)FUN13(VAR3->VAR14, VAR8);
    VAR4 = VAR10->VAR4;
    FUN14(VAR3->VAR14, VAR8, VAR3->VAR15);
    FUN15(VAR12);
    VAR3->VAR4 = VAR4;
    return VAR4;
VAR19:
    FUN14(VAR3->VAR14, VAR8, VAR3->VAR15);
VAR18:
    FUN15(VAR12);
    return -VAR31;
}