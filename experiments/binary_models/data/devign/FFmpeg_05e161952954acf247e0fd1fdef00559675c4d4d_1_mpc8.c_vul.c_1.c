static inline VAR1 FUN1(const VAR2 **VAR3)
{
    int64_t VAR4 = 0;
    int VAR5 = 0;
    int VAR6;
    do
    {
        VAR6 = **VAR3;
        (*VAR3)++;
        VAR4 <<= 7;
        VAR4 |= VAR6 & 0x7F;
        VAR5++;
        if (VAR5 > 10)
            return -1;
    } while (VAR6 & 0x80);
    return VAR4 - VAR5;
}