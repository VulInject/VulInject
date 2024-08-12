static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 *VAR7, int32_t VAR8, int32_t VAR9)
{
    int32_t VAR10;
    int VAR11, VAR12, VAR13;
    unsigned int VAR14;
    uint32_t VAR15;
    char VAR16[65];
    VAR11 = FUN2(VAR4);
    for (VAR12 = 0; VAR12 < 32; VAR12++)
    {
        if (FUN3(VAR4) < VAR12 + 1)
        {
            FUN4(VAR2->VAR17, VAR18, ""
                                               "",
                   VAR5);
            return VAR19;
        }
        VAR14 = FUN5(VAR4);
        VAR16[VAR12] = VAR14 ? '' : '';
        if (VAR14)
            break;
    }
    if (VAR12 >= 32)
    {
        FUN4(VAR2->VAR17, VAR18, ""
                                           "",
               VAR5);
        return VAR19;
    }
    VAR15 = 1;
    for (VAR13 = 0; VAR13 < VAR12; VAR13++)
    {
        VAR14 = FUN5(VAR4);
        VAR16[VAR12 + VAR13 + 1] = VAR14 ? '' : '';
        VAR15 = VAR15 << 1 | VAR14;
    }
    VAR16[VAR12 + VAR13 + 1] = 0;
    if (VAR15 & 1)
        VAR10 = -(VAR6)(VAR15 / 2);
    else
        VAR10 = VAR15 / 2;
    if (VAR2->VAR20)
        FUN6(VAR2, VAR11, VAR5, VAR16, VAR10);
    if (VAR10 < VAR8 || VAR10 > VAR9)
    {
        FUN4(VAR2->VAR17, VAR18, ""
                                           "" VAR21 "" VAR21 "" VAR21 "",
               VAR5, VAR10, VAR8, VAR9);
        return VAR19;
    }
    *VAR7 = VAR10;
    return 0;
}