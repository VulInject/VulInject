static VAR1 FUN1(VAR2 *VAR3, int VAR4, VAR1 *VAR5, int64_t VAR6)
{
    VAR7 *VAR8 = VAR3->VAR9;
    int64_t VAR10, VAR11;
    int VAR12, VAR13, VAR14, VAR15;
    VAR10 = *VAR5;
    if (VAR8->VAR16)
        return VAR17;
    if (FUN2(VAR3->VAR18, VAR10, VAR19) < 0)
        return VAR17;
    VAR8->VAR20 = 0;
    for (;;)
    {
        int VAR21 = 1;
        VAR22 *VAR23;
        VAR14 = FUN3(VAR3, &VAR11, &VAR13, &VAR12, &VAR10);
        if (VAR14 < 0)
            return VAR17;
        VAR23 = VAR3->VAR24[VAR12];
        if (VAR23->VAR25->VAR26 == VAR27)
        {
            VAR15 = FUN4(VAR3->VAR18);
            VAR14--;
            if (!(VAR15 & 0x40))
            {
                VAR21 = FUN4(VAR3->VAR18);
                VAR14--;
            }
        }
        if ((VAR13 & 2) && (VAR21 & 0x7F) == 1)
        {
            FUN5(VAR23, VAR10, VAR11, 0, 0, VAR28);
            if (VAR12 == VAR4)
                break;
        }
        FUN6(VAR3->VAR18, VAR14);
    }
    *VAR5 = VAR10;
    return VAR11;
}