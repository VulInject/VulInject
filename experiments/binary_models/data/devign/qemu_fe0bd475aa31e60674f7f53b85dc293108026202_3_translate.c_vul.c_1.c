void FUN1(void)
{
    static const char *const VAR1[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
    };
    static const char *const VAR2[] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
    };
    int VAR3;
    VAR4 = FUN2(VAR5, "");
    VAR6 = FUN3(VAR5, FUN4(VAR7, VAR8), "");
    for (VAR3 = 0; VAR3 < 16; VAR3++)
    {
        VAR9[VAR3] = FUN3(VAR5, FUN4(VAR7, VAR10[VAR3]), VAR1[VAR3]);
    }
    for (VAR3 = 0; VAR3 < 16; VAR3++)
    {
        VAR11[VAR3] = FUN3(VAR5, FUN4(VAR7, VAR12[VAR3]), VAR2[VAR3]);
    }
    for (VAR3 = 0; VAR3 < 256; ++VAR3)
    {
        if (VAR13[VAR3])
        {
            VAR14[VAR3] = FUN3(VAR5, FUN4(VAR7, VAR15[VAR3]), VAR13[VAR3]);
        }
    }
    for (VAR3 = 0; VAR3 < 256; ++VAR3)
    {
        if (VAR16[VAR3])
        {
            VAR17[VAR3] = FUN3(VAR5, FUN4(VAR7, VAR18[VAR3]), VAR16[VAR3]);
        }
    }
}