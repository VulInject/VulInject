void FUN1(VAR1 *VAR2, uint64_t VAR3, uint32_t VAR4)
{
    target_ulong VAR5, new;
    int VAR6;
    VAR5 = VAR2->VAR7;
    new = (VAR8)VAR3;
    new &= ~0x60000000LL;
    new |= VAR5 & 0x60000000LL;
    for (VAR6 = 0; VAR6 < sizeof(VAR8) * 2; VAR6++)
    {
        if (VAR4 & (1 << VAR6))
        {
            VAR2->VAR7 &= ~(0xFLL << (4 * VAR6));
            VAR2->VAR7 |= new &(0xFLL << (4 * VAR6));
        }
    }
    if (VAR9 != 0)
    {
        VAR2->VAR7 |= 1 << VAR10;
    }
    else
    {
        VAR2->VAR7 &= ~(1 << VAR10);
    }
    if ((VAR11 & VAR12) != 0)
    {
        VAR2->VAR7 |= 1 << VAR13;
        VAR2->VAR14 = VAR15;
        VAR2->VAR16 = VAR17;
    }
    else
    {
        VAR2->VAR7 &= ~(1 << VAR13);
    }
    FUN2(VAR2);
}