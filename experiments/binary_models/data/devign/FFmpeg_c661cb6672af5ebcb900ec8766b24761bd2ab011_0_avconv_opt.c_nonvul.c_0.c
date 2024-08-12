int FUN1(int argc, char **argv)
{
    OptionParseContext VAR1;
    uint8_t VAR2[128];
    int VAR3;
    memset(&VAR1, 0, sizeof(VAR1));
    VAR3 = FUN2(&VAR1, argc, argv, VAR4, VAR5, FUN3(VAR5));
    if (VAR3 < 0)
    {
        FUN4(NULL, VAR6, "");
        goto VAR7;
    }
    VAR3 = FUN5(NULL, &VAR1.VAR8);
    if (VAR3 < 0)
    {
        FUN4(NULL, VAR6, "");
        goto VAR7;
    }
    VAR3 = FUN6(&VAR1.VAR5[VAR9], "", VAR10);
    if (VAR3 < 0)
    {
        FUN4(NULL, VAR6, "");
        goto VAR7;
    }
    VAR3 = FUN6(&VAR1.VAR5[VAR11], "", VAR12);
    if (VAR3 < 0)
    {
        FUN4(NULL, VAR6, "");
        goto VAR7;
    }
VAR7:
    FUN7(&VAR1);
    if (VAR3 < 0)
    {
        FUN8(VAR3, VAR2, sizeof(VAR2));
        FUN4(NULL, VAR6, "", VAR2);
    }
    return VAR3;
}