void FUN1(int64_t VAR1, int64_t VAR2, const char *VAR3, bool VAR4, int64_t VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9;
    uint32_t VAR10;
    VAR11 *VAR12;
    uint8_t VAR13[1024];
    if (!VAR4)
    {
        VAR5 = 0;
    }
    VAR12 = FUN2(VAR5);
    if (VAR12 == NULL)
    {
        FUN3(VAR7, VAR14, "", "");
        return;
    }
    VAR9 = fopen(VAR3, "");
    if (!VAR9)
    {
        FUN4(VAR7, VAR15, VAR3);
        return;
    }
    while (VAR2 != 0)
    {
        VAR10 = sizeof(VAR13);
        if (VAR10 > VAR2)
            VAR10 = VAR2;
        if (FUN5(VAR12, VAR1, VAR13, VAR10, 0) != 0)
        {
            FUN6(VAR7, "" VAR16 "", VAR1);
            goto VAR17;
        }
        if (fwrite(VAR13, 1, VAR10, VAR9) != VAR10)
        {
            FUN3(VAR7, VAR18);
            goto VAR17;
        }
        VAR1 += VAR10;
        VAR2 -= VAR10;
    }
VAR17:
    fclose(VAR9);
}