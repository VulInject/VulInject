static int FUN1(VAR1 *VAR2, VAR3 **VAR4, uint32_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    FT_BitmapGlyph VAR9;
    VAR3 *VAR10;
    struct VAR11 *VAR12 = NULL;
    int VAR13;
    if (FUN2(VAR7->VAR14, VAR5, VAR7->VAR15))
        return FUN3(VAR16);
    if (!(VAR10 = FUN4(sizeof(*VAR10))) || !(VAR10->VAR10 = FUN4(sizeof(*VAR10->VAR10))))
    {
        VAR13 = FUN3(VAR17);
        goto VAR18;
    }
    VAR10->VAR5 = VAR5;
    if (FUN5(VAR7->VAR14->VAR10, VAR10->VAR10))
    {
        VAR13 = FUN3(VAR16);
        goto VAR18;
    }
    if (VAR7->VAR19)
    {
        FT_Glyph VAR20 = *VAR10->VAR10;
        if (FUN6(&VAR20, VAR7->VAR21, 0, 0) || FUN7(&VAR20, VAR22, 0, 1))
        {
            VAR13 = VAR23;
            goto VAR18;
        }
        VAR9 = (VAR24)VAR20;
        VAR10->VAR25 = VAR9->VAR26;
    }
    if (FUN7(VAR10->VAR10, VAR22, 0, 1))
    {
        VAR13 = VAR23;
        goto VAR18;
    }
    VAR9 = (VAR24)*VAR10->VAR10;
    VAR10->VAR26 = VAR9->VAR26;
    VAR10->VAR27 = VAR9->VAR28;
    VAR10->VAR29 = VAR9->VAR30;
    VAR10->VAR31 = VAR7->VAR14->VAR10->VAR31.VAR32 >> 6;
    FUN8(*VAR10->VAR10, VAR33, &VAR10->VAR34);
    if (!(VAR12 = FUN9()))
    {
        VAR13 = FUN3(VAR17);
        goto VAR18;
    }
    FUN10(&VAR7->VAR35, VAR10, VAR36, &VAR12);
    if (VAR4)
        *VAR4 = VAR10;
    return 0;
VAR18:
    if (VAR10)
        FUN11(&VAR10->VAR10);
    FUN11(&VAR10);
    FUN11(&VAR12);
    return VAR13;
}