static VAR1 FUN1(VAR2 *VAR3, int VAR4, VAR1 *VAR5, int64_t VAR6)
{
    int VAR7, VAR8;
    int64_t VAR9, VAR10, VAR11;
    VAR9 = *VAR5;
    FUN2("" VAR12 "", VAR9, VAR13);
    if (FUN3(VAR3->VAR14, VAR9, VAR15) < 0)
        return VAR16;
    for (;;)
    {
        VAR7 = FUN4(VAR3, &VAR9, &VAR8, &VAR10, &VAR11);
        if (VAR7 < 0)
        {
            FUN2("", VAR7);
            return VAR16;
        }
        if (VAR8 == VAR3->VAR17[VAR4]->VAR18 && VAR11 != VAR16)
        {
            break;
        }
        FUN5(VAR3->VAR14, VAR7);
    }
    FUN2("" VAR12 "" VAR12 "", VAR9, VAR11, VAR11 / 90000.0);
    *VAR5 = VAR9;
    return VAR11;
}