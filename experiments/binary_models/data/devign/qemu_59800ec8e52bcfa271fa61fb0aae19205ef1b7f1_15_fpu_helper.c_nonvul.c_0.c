VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4, uint64_t VAR5, uint64_t VAR6)
{
    CPU_DoubleU VAR7, VAR8, VAR9;
    VAR7.VAR10 = VAR4;
    VAR8.VAR10 = VAR5;
    VAR9.VAR10 = VAR6;
    if (FUN2((FUN3(VAR7.VAR11) && FUN4(VAR8.VAR11)) || (FUN4(VAR7.VAR11) && FUN3(VAR8.VAR11))))
    {
        VAR7.VAR10 = FUN5(VAR3, VAR12, 1);
    }
    else
    {
        if (FUN2(FUN6(VAR7.VAR11) || FUN6(VAR8.VAR11) || FUN6(VAR9.VAR11)))
        {
            FUN5(VAR3, VAR13, 1);
        }
        float128 VAR14, VAR15;
        VAR14 = FUN7(VAR7.VAR11, &VAR3->VAR16);
        VAR15 = FUN7(VAR8.VAR11, &VAR3->VAR16);
        VAR14 = FUN8(VAR14, VAR15, &VAR3->VAR16);
        if (FUN2(FUN9(VAR14) && FUN3(VAR9.VAR11) && FUN10(VAR14) == FUN11(VAR9.VAR11)))
        {
            VAR7.VAR10 = FUN5(VAR3, VAR17, 1);
        }
        else
        {
            VAR15 = FUN7(VAR9.VAR11, &VAR3->VAR16);
            VAR14 = FUN12(VAR14, VAR15, &VAR3->VAR16);
            VAR7.VAR11 = FUN13(VAR14, &VAR3->VAR16);
        }
    }
    return VAR7.VAR10;
}