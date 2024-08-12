VAR1 FUN1(uint64_t VAR2)
{
    CPU_DoubleU VAR3;
    VAR3.VAR4 = VAR2;
    if (FUN2(FUN3(VAR3.VAR5)))
    {
        VAR3.VAR4 = FUN4(VAR6 | VAR7);
    }
    else if (FUN2(FUN5(VAR3.VAR5) || FUN6(VAR3.VAR5)))
    {
        VAR3.VAR4 = FUN4(VAR7);
    }
    else
    {
        VAR3.VAR4 = FUN7(VAR3.VAR5, &VAR8->VAR9);
        VAR3.VAR4 |= 0xFFF80000ULL << 32;
    }
    return VAR3.VAR4;
}