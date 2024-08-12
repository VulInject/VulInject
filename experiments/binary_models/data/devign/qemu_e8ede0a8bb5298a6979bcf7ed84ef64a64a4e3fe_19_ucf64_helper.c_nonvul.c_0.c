static inline VAR1 FUN1(float32 VAR2)
{
    union
    {
        uint32_t VAR3;
        float32 VAR2;
    } VAR4;
    VAR4.VAR2 = VAR2;
    return VAR4.VAR3;
}