VAR1 FUN1(uint64_t VAR2, uint64_t VAR3)
{
    float64 VAR4, VAR5;
    VAR4 = FUN2(VAR2);
    VAR5 = FUN2(VAR3);
    if (FUN3(VAR4, VAR5, &VAR6))
    {
        return 0x4000000000000000ULL;
    }
    else
    {
        return 0;
    }
}