static inline VAR1 FUN1(float64 VAR2)
{
    union
    {
        uint64_t VAR3;
        float64 VAR2;
    } VAR4;
    VAR4.VAR2 = VAR2;
    return VAR4.VAR3;
}