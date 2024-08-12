static VAR1 FUN1(VAR2 *VAR3, int64_t VAR4, int VAR5)
{
    int VAR6 = (VAR5 & VAR7) ? -1 : 1;
    int64_t VAR8;
    int VAR9, VAR10, VAR11;
    int64_t VAR12;
    FUN2(VAR3->VAR13, FUN3(VAR4 - VAR14, 0), VAR15);
    VAR12 = FUN2(VAR3->VAR13, VAR4, VAR15);
    if (VAR12 < 0)
        return VAR12;
    VAR8 = VAR4;
    VAR9 = 999;
    for (VAR10 = 0; VAR10 < VAR14; VAR10++)
    {
        int64_t VAR16 = VAR4 + (VAR6 > 0 ? VAR10 - VAR14 / 4 : -VAR10);
        int64_t VAR17 = -1;
        int VAR18 = 999;
        if (VAR16 < 0)
            continue;
        for (VAR11 = 0; VAR11 < VAR19; VAR11++)
        {
            VAR12 = FUN4(VAR3->VAR13, VAR16, NULL);
            if (VAR12 < 0)
                break;
            if ((VAR4 - VAR16) * VAR6 <= 0 && FUN5(VAR19 / 2 - VAR11) < VAR18)
            {
                VAR17 = VAR16;
                VAR18 = FUN5(VAR19 / 2 - VAR11);
            }
            VAR16 += VAR12;
        }
        if (VAR9 > VAR18 && VAR11 == VAR19)
        {
            VAR8 = VAR17;
            VAR9 = VAR18;
            if (VAR18 == 0)
                break;
        }
    }
    return FUN2(VAR3->VAR13, VAR8, VAR15);
}