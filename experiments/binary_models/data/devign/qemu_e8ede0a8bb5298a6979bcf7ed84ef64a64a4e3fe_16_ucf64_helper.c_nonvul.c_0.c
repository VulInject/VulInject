static inline VAR1 FUN1(uint64_t VAR2)
{
    union
    {
        uint64_t VAR2;
        float64 VAR3;
    } VAR4;
    VAR4.VAR2 = VAR2;
    return VAR4.VAR3;
}