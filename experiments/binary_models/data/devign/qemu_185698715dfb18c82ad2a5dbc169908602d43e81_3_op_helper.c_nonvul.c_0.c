static inline VAR1 FUN1(uint64_t VAR2, int VAR3)
{
    CPU_DoubleU VAR4;
    VAR4.VAR5 = VAR2;
    if (FUN2(FUN3(VAR4.VAR6)))
    {
        VAR4.VAR5 = FUN4(VAR7 | VAR8);
    }
    else if (FUN2(FUN5(VAR4.VAR6) || FUN6(VAR4.VAR6)))
    {
        VAR4.VAR5 = FUN4(VAR8);
    }
    else
    {
        FUN7(VAR3, &VAR9->VAR10);
        VAR4.VAR5 = FUN8(VAR4.VAR6, &VAR9->VAR10);
        FUN9();
    }
    return VAR4.VAR5;
}