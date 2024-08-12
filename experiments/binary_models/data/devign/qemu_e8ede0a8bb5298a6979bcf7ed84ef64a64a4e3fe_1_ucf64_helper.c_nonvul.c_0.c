static inline VAR1 FUN1(uint32_t VAR2)
{
    union
    {
        uint32_t VAR2;
        float32 VAR3;
    } VAR4;
    VAR4.VAR2 = VAR2;
    return VAR4.VAR3;
}