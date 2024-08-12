static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, const char *VAR5, int VAR6, int VAR7)
{
    VAR1 *VAR8;
    VAR8 = FUN2(sizeof(VAR1));
    VAR8->VAR6 = VAR6;
    VAR8->VAR9 = FUN3(VAR3, VAR4, VAR5, VAR10, NULL, VAR8);
    snprintf(VAR8->VAR9->VAR11, sizeof(VAR8->VAR9->VAR11), "", VAR6);
    if (VAR7)
    {
        FUN4(VAR8);
    }
    else
    {
        FUN5(VAR8->VAR6, NULL, VAR12, VAR8);
    }
    return VAR8;
}