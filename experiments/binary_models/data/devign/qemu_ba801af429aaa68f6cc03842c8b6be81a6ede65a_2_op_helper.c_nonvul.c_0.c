void FUN1(VAR1 *VAR2, target_ulong VAR3)
{
    uint32_t VAR4 = VAR2->VAR5 & 0x80000000;
    uint32_t VAR6 = VAR3 & 0x7fffffff;
    if (VAR6 < VAR2->VAR7->VAR8)
    {
        if (VAR2->VAR9 & VAR10)
        {
            VAR4 |= VAR3 & 0x80000000;
        }
        VAR2->VAR5 = VAR4 | VAR6;
    }
}