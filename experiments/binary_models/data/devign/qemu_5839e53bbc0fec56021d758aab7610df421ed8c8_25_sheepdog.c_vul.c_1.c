static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR4 *VAR7;
    char VAR8[VAR9];
    uint32_t VAR10 = 0;
    int VAR11 = 0;
    VAR7 = FUN2(sizeof(VAR4));
    memcpy(VAR7, VAR5, sizeof(VAR4));
    VAR10 = FUN3(VAR3, NULL, 10);
    if (VAR10)
    {
        VAR8[0] = 0;
    }
    else
    {
        FUN4(VAR8, sizeof(VAR8), VAR3);
    }
    VAR11 = FUN5(VAR5, VAR10, VAR8);
    if (VAR11)
    {
        goto VAR12;
    }
    VAR11 = FUN6(VAR5);
    if (VAR11)
    {
        goto VAR12;
    }
    FUN7(VAR7);
    return 0;
VAR12:
    memcpy(VAR5, VAR7, sizeof(VAR4));
    FUN7(VAR7);
    FUN8("");
    return VAR11;
}