static inline void FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4, uint32_t VAR5)
{
    uint32_t VAR6;
    switch (VAR4)
    {
    case VAR7:
        VAR2->VAR8[VAR3].VAR9 = (VAR2->VAR8[VAR3].VAR9 & 0x40000000) | (VAR5 & 0x800F00FF);
        FUN2(VAR2, VAR3);
        FUN3("", VAR3, VAR5, VAR2->VAR8[VAR3].VAR9);
        break;
    case VAR10:
        VAR6 = VAR5 & 0xC0000000;
        VAR6 |= VAR5 & ((1 << VAR11) - 1);
        VAR2->VAR8[VAR3].VAR12 = VAR6;
        FUN3("", VAR3, VAR2->VAR8[VAR3].VAR12);
        break;
    }
}