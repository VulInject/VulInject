void FUN1(VAR1 *VAR2, vaddr VAR3, MMUAccessType VAR4, int VAR5, uintptr_t VAR6);
static inline VAR7 FUN2(VAR8 *VAR9, uint32_t VAR10, VAR11 *VAR12)
{
    hwaddr VAR3 = 0;
    uint8_t VAR13;
    VAR13 = VAR10 >> 28;
    if (VAR13 > 0)
    {
        VAR3 = VAR9->VAR14[VAR13];
    }
    VAR3 += (VAR10 >> 16) & 0xfff;
    if (VAR12)
    {
        *VAR12 = VAR13;
    }
    return VAR3;
}