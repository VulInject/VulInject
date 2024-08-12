VAR1 FUN1(VAR2)(float64 VAR3, void *VAR4)
{
    VAR5 *VAR6 = VAR4;
    float64 VAR7 = FUN2(VAR3, VAR6);
    uint64_t VAR8 = FUN3(VAR7);
    uint64_t VAR9 = 0x8000000000000000ULL & VAR8;
    int64_t VAR10 = FUN4(VAR8, 52, 11);
    float64 VAR11;
    uint64_t VAR12;
    int64_t VAR13;
    uint64_t VAR14;
    if (FUN5(VAR7))
    {
        float64 VAR15 = VAR7;
        if (FUN6(VAR7))
        {
            FUN7(VAR16, VAR6);
            VAR15 = FUN8(VAR7);
        }
        if (VAR6->VAR17)
        {
            VAR15 = VAR18;
        }
        return VAR15;
    }
    else if (FUN9(VAR7))
    {
        return FUN10(VAR19, FUN11(VAR7));
    }
    else if (FUN12(VAR7))
    {
        FUN7(VAR20, VAR6);
        return FUN10(VAR21, FUN11(VAR7));
    }
    else if ((VAR8 & ~(1ULL << 63)) < (1ULL << 50))
    {
        FUN7(VAR22 | VAR23, VAR6);
        if (FUN13(VAR6, VAR9))
        {
            return FUN10(VAR21, FUN11(VAR7));
        }
        else
        {
            return FUN10(VAR24, FUN11(VAR7));
        }
    }
    else if (VAR10 >= 1023 && VAR6->VAR25)
    {
        FUN7(VAR26, VAR6);
        return FUN10(VAR19, FUN11(VAR7));
    }
    VAR11 = FUN14(VAR7, 2045, VAR6);
    VAR12 = FUN3(VAR11);
    VAR13 = FUN4(VAR12, 52, 11);
    VAR14 = FUN4(VAR12, 0, 52);
    return FUN15(VAR9 | ((VAR13 & 0x7ff) << 52) | VAR14);
}