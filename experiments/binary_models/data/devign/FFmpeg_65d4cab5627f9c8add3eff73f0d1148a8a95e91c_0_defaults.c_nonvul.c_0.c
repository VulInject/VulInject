VAR1 *FUN1(VAR2 *VAR3, int VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2(sizeof(VAR7));
    VAR1 *VAR9 = NULL;
    int VAR10, VAR11;
    char *VAR12 = NULL;
    if (!VAR8 || !(VAR9 = FUN2(sizeof(VAR1))))
        goto VAR13;
    VAR9->VAR12 = VAR8;
    VAR9->VAR14 = FUN2(sizeof(VAR15));
    VAR9->VAR14->VAR5 = VAR5;
    VAR9->VAR14->VAR6 = VAR6;
    VAR9->VAR4 = VAR4 | VAR16;
    VAR8->VAR17 = 1;
    VAR9->VAR18 = VAR3->VAR18;
    VAR8->free = VAR19;
    FUN3(VAR8->VAR20, VAR9->VAR18, VAR9->VAR14->VAR5);
    for (VAR10 = 0; VAR10 < 4; VAR10++)
        VAR8->VAR20[VAR10] = FUN4(VAR8->VAR20[VAR10], 16);
    VAR11 = FUN5(VAR8->VAR21, VAR9->VAR18, VAR9->VAR14->VAR6, NULL, VAR8->VAR20);
    VAR12 = FUN6(VAR11 + 16);
    if (!VAR12)
        goto VAR13;
    FUN5(VAR8->VAR21, VAR9->VAR18, VAR9->VAR14->VAR6, VAR12, VAR8->VAR20);
    memcpy(VAR9->VAR21, VAR8->VAR21, sizeof(VAR9->VAR21));
    memcpy(VAR9->VAR20, VAR8->VAR20, sizeof(VAR9->VAR20));
    return VAR9;
VAR13:
    FUN7(VAR12);
    if (VAR9 && VAR9->VAR14)
        FUN7(VAR9->VAR14);
    FUN7(VAR9);
    FUN7(VAR8);
    return NULL;
}