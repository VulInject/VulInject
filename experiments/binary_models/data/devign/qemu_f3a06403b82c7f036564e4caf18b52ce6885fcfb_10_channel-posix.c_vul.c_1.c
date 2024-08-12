VAR1 *FUN1(GAChannelMethod VAR2, const VAR3 *VAR4, GAChannelCallback VAR5, gpointer VAR6)
{
    VAR1 *VAR7 = FUN2(sizeof(VAR1));
    SECURITY_ATTRIBUTES VAR8;
    if (!FUN3(VAR7, VAR2, VAR4))
    {
        FUN4("");
        FUN5(VAR7);
        return NULL;
    }
    VAR7->VAR5 = VAR5;
    VAR7->VAR9 = VAR6;
    VAR8.VAR10 = sizeof(VAR11);
    VAR8.VAR12 = NULL;
    VAR8.VAR13 = false;
    VAR7->VAR14.VAR15 = VAR16;
    VAR7->VAR14.VAR17 = FUN6(VAR16);
    VAR7->VAR14.VAR18.VAR19 = FUN7(&VAR8, VAR20, VAR20, NULL);
    VAR7->VAR21 = FUN8(VAR7);
    FUN9(VAR7->VAR21, NULL);
    return VAR7;
}