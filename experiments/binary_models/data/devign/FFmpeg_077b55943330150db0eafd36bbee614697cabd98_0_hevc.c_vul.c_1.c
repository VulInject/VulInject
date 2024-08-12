static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    enum AVPixelFormat VAR5[VAR6 + 2], *VAR7 = VAR5;
    int VAR8;
    FUN2(VAR2->VAR9, &VAR2->VAR10, VAR4);
    FUN3(VAR2);
    VAR8 = FUN4(VAR2, VAR4);
    if (VAR8 < 0)
        goto VAR11;
    if (VAR4->VAR12 == VAR13 || VAR4->VAR12 == VAR14)
    {
        *VAR7++ = VAR15;
        *VAR7++ = VAR16;
    }
    *VAR7++ = VAR4->VAR12;
    *VAR7 = VAR17;
    VAR8 = FUN5(VAR2->VAR9, VAR5);
    if (VAR8 < 0)
        goto VAR11;
    VAR2->VAR9->VAR12 = VAR8;
    FUN6(&VAR2->VAR18, VAR4->VAR19);
    FUN7(&VAR2->VAR20, VAR4->VAR19);
    FUN8(&VAR2->VAR21, VAR4->VAR19);
    if (VAR4->VAR22 && !VAR2->VAR9->VAR23)
    {
        FUN9(VAR2->VAR24);
        VAR8 = FUN10(VAR2->VAR9, VAR2->VAR24, VAR25);
        if (VAR8 < 0)
            goto VAR11;
        VAR2->VAR26 = VAR2->VAR24;
    }
    VAR2->VAR10.VAR4 = VAR4;
    VAR2->VAR10.VAR27 = (VAR28 *)VAR2->VAR10.VAR29[VAR2->VAR10.VAR4->VAR30]->VAR31;
    return 0;
VAR11:
    FUN3(VAR2);
    VAR2->VAR10.VAR4 = NULL;
    return VAR8;
}