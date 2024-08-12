static int FUN1(VAR1 *VAR2, VAR3 **VAR4, int VAR5, int VAR6)
{
    const char *VAR7 = VAR6 ? "" : VAR8;
    int64_t VAR9;
    VAR10 *VAR11, *VAR12;
    FUN2(VAR4, VAR13, NULL);
    VAR9 = FUN3(*VAR4, VAR7);
    if (VAR9 >= ((1 << 24) - 4))
        return FUN4(VAR14);
    VAR12 = FUN5(VAR9 + 4);
    if (!VAR12)
        return FUN4(VAR15);
    VAR11 = VAR12;
    FUN6(&VAR11, VAR5 ? 0x84 : 0x04);
    FUN7(&VAR11, VAR9);
    FUN8(&VAR11, VAR4, VAR7);
    FUN9(VAR2, VAR12, VAR9 + 4);
    FUN10(&VAR12);
    VAR11 = NULL;
    return 0;
}