static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    uint32_t VAR9 = FUN2(VAR4, "");
    const char *VAR10 = FUN3(VAR4, "");
    target_long VAR11 = FUN2(VAR4, "");
    uint32_t VAR12;
    VAR13 *VAR14;
    uint8_t VAR15[1024];
    VAR14 = FUN4();
    if (!VAR14)
        return;
    VAR8 = fopen(VAR10, "");
    if (!VAR8)
    {
        FUN5(VAR2, "", VAR10);
        return;
    }
    while (VAR9 != 0)
    {
        VAR12 = sizeof(VAR15);
        if (VAR12 > VAR9)
            VAR12 = VAR9;
        FUN6(VAR14, VAR11, VAR15, VAR12, 0);
        fwrite(VAR15, 1, VAR12, VAR8);
        VAR11 += VAR12;
        VAR9 -= VAR12;
    }
    fclose(VAR8);
}