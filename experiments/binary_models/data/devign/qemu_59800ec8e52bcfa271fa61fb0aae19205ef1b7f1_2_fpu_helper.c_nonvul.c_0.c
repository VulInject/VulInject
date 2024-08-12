static inline VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4, int VAR5)
{
    CPU_DoubleU VAR6;
    VAR6.VAR7 = VAR4;
    if (FUN2(FUN3(VAR6.VAR8)))
    {
        VAR6.VAR7 = FUN4(VAR3, VAR9 | VAR10, 1);
    }
    else if (FUN2(FUN5(VAR6.VAR8) || FUN6(VAR6.VAR8)))
    {
        VAR6.VAR7 = FUN4(VAR3, VAR10, 1);
    }
    else
    {
        FUN7(VAR5, &VAR3->VAR11);
        VAR6.VAR7 = FUN8(VAR6.VAR8, &VAR3->VAR11);
        FUN9(VAR3);
    }
    return VAR6.VAR7;
}