static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 *VAR7, uint32_t VAR8, uint32_t VAR9)
{
    uint32_t VAR10;
    int VAR11, VAR12, VAR13;
    unsigned int VAR14;
    char VAR15[65];
    VAR11 = FUN2(VAR4);
    for (VAR12 = 0; VAR12 < 32; VAR12++)
    {
        if (FUN3(VAR4) < VAR12 + 1)
        {
            FUN4(VAR2->VAR16, VAR17, ""
                                               "",
                   VAR5);
            return VAR18;
        }
        VAR14 = FUN5(VAR4);
        VAR15[VAR12] = VAR14 ? '' : '';
        if (VAR14)
            break;
    }
    if (VAR12 >= 32)
    {
        FUN4(VAR2->VAR16, VAR17, ""
                                           "",
               VAR5);
        return VAR18;
    }
    VAR10 = 1;
    for (VAR13 = 0; VAR13 < VAR12; VAR13++)
    {
        VAR14 = FUN5(VAR4);
        VAR15[VAR12 + VAR13 + 1] = VAR14 ? '' : '';
        VAR10 = VAR10 << 1 | VAR14;
    }
    VAR15[VAR12 + VAR13 + 1] = 0;
    --VAR10;
    if (VAR2->VAR19)
        FUN6(VAR2, VAR11, VAR5, VAR15, VAR10);
    if (VAR10 < VAR8 || VAR10 > VAR9)
    {
        FUN4(VAR2->VAR16, VAR17, ""
                                           "" VAR20 "" VAR20 "" VAR20 "",
               VAR5, VAR10, VAR8, VAR9);
        return VAR18;
    }
    *VAR7 = VAR10;
    return 0;
}