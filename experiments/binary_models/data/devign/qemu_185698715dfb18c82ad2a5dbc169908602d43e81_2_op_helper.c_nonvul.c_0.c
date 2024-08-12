static inline VAR1 FUN1(uint32_t VAR2)
{
    CPU_FloatU VAR3;
    float32 VAR4;
    VAR3.VAR5 = VAR2;
    if (FUN2(FUN3(VAR3.VAR6)))
        return 0;
    VAR4 = FUN4(1ULL << 32, &VAR7->VAR8);
    VAR3.VAR6 = FUN5(VAR3.VAR6, VAR4, &VAR7->VAR8);
    return FUN6(VAR3.VAR6, &VAR7->VAR8);
}