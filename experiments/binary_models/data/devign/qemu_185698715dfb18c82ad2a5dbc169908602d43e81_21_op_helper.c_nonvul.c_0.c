VAR1 FUN1(uint64_t VAR2, uint64_t VAR3, uint64_t VAR4)
{
    CPU_DoubleU VAR5, VAR6, VAR7;
    VAR5.VAR8 = VAR2;
    VAR6.VAR8 = VAR3;
    VAR7.VAR8 = VAR4;
    if (FUN2(FUN3(VAR5.VAR9) || FUN3(VAR6.VAR9) || FUN3(VAR7.VAR9)))
    {
        VAR5.VAR8 = FUN4(VAR10);
    }
    else if (FUN2((FUN5(VAR5.VAR9) && FUN6(VAR6.VAR9)) || (FUN6(VAR5.VAR9) && FUN5(VAR6.VAR9))))
    {
        VAR5.VAR8 = FUN4(VAR11);
    }
    else
    {
        float128 VAR12, VAR13;
        VAR12 = FUN7(VAR5.VAR9, &VAR14->VAR15);
        VAR13 = FUN7(VAR6.VAR9, &VAR14->VAR15);
        VAR12 = FUN8(VAR12, VAR13, &VAR14->VAR15);
        if (FUN2(FUN9(VAR12) && FUN5(VAR7.VAR9) && FUN10(VAR12) != FUN11(VAR7.VAR9)))
        {
            VAR5.VAR8 = FUN4(VAR16);
        }
        else
        {
            VAR13 = FUN7(VAR7.VAR9, &VAR14->VAR15);
            VAR12 = FUN12(VAR12, VAR13, &VAR14->VAR15);
            VAR5.VAR9 = FUN13(VAR12, &VAR14->VAR15);
        }
        VAR5.VAR9 = (VAR5.VAR9 * VAR6.VAR9) + VAR7.VAR9;
        VAR5.VAR9 = FUN14(VAR5.VAR9, VAR6.VAR9, &VAR14->VAR15);
        VAR5.VAR9 = FUN15(VAR5.VAR9, VAR7.VAR9, &VAR14->VAR15);
        if (FUN16(!FUN17(VAR5.VAR9)))
            VAR5.VAR9 = FUN18(VAR5.VAR9);
    }
    return VAR5.VAR8;
}