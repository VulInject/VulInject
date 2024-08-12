static inline VAR1 FUN1(int32_t VAR2, VAR3 *VAR4)
{
    int64_t VAR5;
    VAR5 = (VAR6)VAR2 + 0x00008000;
    if (VAR2 > (int)0x7fff8000)
    {
        VAR5 = 0x7FFFFFFF;
        FUN2(1, 22, VAR4);
    }
    return (VAR5 >> 16) & 0xFFFF;
}