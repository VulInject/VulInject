FUN1(VAR1 *VAR2[4], int VAR3[4], int VAR4, int VAR5, int VAR6, enum PixelFormat VAR7)
{
    VAR8 *VAR9 = FUN2(sizeof(VAR8));
    VAR10 *VAR11 = FUN2(sizeof(VAR10));
    if (!VAR9 || !VAR11)
        goto VAR12;
    VAR11->VAR13 = VAR9;
    VAR11->VAR13->free = VAR14;
    if (!(VAR11->VAR15 = FUN2(sizeof(VAR16))))
        goto VAR12;
    VAR9->VAR5 = VAR11->VAR15->VAR5 = VAR5;
    VAR9->VAR6 = VAR11->VAR15->VAR6 = VAR6;
    VAR11->VAR4 = VAR4 | VAR17;
    VAR9->VAR18 = 1;
    VAR11->VAR19 = VAR20;
    VAR9->VAR7 = VAR11->VAR7 = VAR7;
    memcpy(VAR9->VAR2, VAR2, sizeof(VAR9->VAR2));
    memcpy(VAR9->VAR3, VAR3, sizeof(VAR9->VAR3));
    memcpy(VAR11->VAR2, VAR9->VAR2, sizeof(VAR11->VAR2));
    memcpy(VAR11->VAR3, VAR9->VAR3, sizeof(VAR11->VAR3));
    return VAR11;
VAR12:
    if (VAR11 && VAR11->VAR15)
        FUN3(VAR11->VAR15);
    FUN3(VAR11);
    FUN3(VAR9);
    return NULL;
}