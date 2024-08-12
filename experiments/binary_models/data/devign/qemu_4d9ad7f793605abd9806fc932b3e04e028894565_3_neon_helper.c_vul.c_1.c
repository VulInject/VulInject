VAR1 FUN1(VAR2)(uint32_t VAR3, uint32_t VAR4)
{
    uint64_t VAR5;
    uint64_t VAR6;
    FUN2(VAR6, VAR3, VAR4, VAR7);
    FUN2(VAR5, VAR3 >> 8, VAR4 >> 8, VAR7);
    VAR6 |= VAR5 << 16;
    FUN2(VAR5, VAR3 >> 16, VAR4 >> 16, VAR7);
    VAR6 |= VAR5 << 32;
    FUN2(VAR5, VAR3 >> 24, VAR4 >> 24, VAR7);
    VAR6 |= VAR5 << 48;
    return VAR6;
}