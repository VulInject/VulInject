static inline unsigned int FUN1(uint32_t VAR1, uint32_t VAR2)
{
    unsigned int VAR3;
    VAR3 = (VAR1 & 0xffff) | (VAR2 & 0x000f0000);
    if (VAR2 & VAR4)
        VAR3 = (VAR3 << 12) | 0xfff;
    return VAR3;
}