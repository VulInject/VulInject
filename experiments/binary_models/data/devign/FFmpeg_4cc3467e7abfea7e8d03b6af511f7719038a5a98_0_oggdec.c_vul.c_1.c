static VAR1 FUN1(VAR2 *VAR3, int VAR4, VAR1 *VAR5, int64_t VAR6)
{
    struct VAR7 *VAR7 = VAR3->VAR8;
    struct VAR9 *VAR10 = VAR7->VAR11 + VAR4;
    VAR12 *VAR13 = VAR3->VAR14;
    int64_t VAR15 = VAR16;
    int VAR17;
    FUN2(VAR13, *VAR5, VAR18);
    FUN3(VAR7);
    while (FUN4(VAR13) < VAR6 && !FUN5(VAR3, &VAR17, NULL, NULL, VAR5))
    {
        if (VAR17 == VAR4)
        {
            VAR15 = FUN6(VAR3, VAR17, NULL);
            if (VAR10->VAR19 && !(VAR10->VAR20 & VAR21))
                VAR15 = VAR16;
        }
        if (VAR15 != VAR16)
            break;
    }
    FUN3(VAR7);
    return VAR15;
}