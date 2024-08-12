static void FUN1(struct VAR1 *VAR2)
{
    uint32_t VAR3;
    if (VAR2->VAR4[VAR5] & 2)
    {
        VAR2->VAR4[VAR6] |= VAR2->VAR7 & ~VAR2->VAR8;
    }
    VAR2->VAR4[VAR9] = VAR2->VAR4[VAR6] & VAR2->VAR4[VAR10];
    for (VAR3 = 0; VAR3 < 32; VAR3++)
    {
        if (VAR2->VAR4[VAR9] & (1 << VAR3))
            break;
    }
    if (VAR3 == 32)
        VAR3 = ~0;
    VAR2->VAR4[VAR11] = VAR3;
    FUN2(VAR2->VAR12, (VAR2->VAR4[VAR5] & 1) && VAR2->VAR4[VAR9]);
}