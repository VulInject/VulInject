static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3 = 0;
    uint32_t VAR4;
    if (VAR2->VAR5 & VAR6)
    {
        VAR3 |= (1 << 30);
    }
    if (VAR2->VAR5 & VAR7)
    {
        VAR3 |= (1 << 30);
    }
    if (VAR2->VAR8 & VAR2->VAR9)
    {
        VAR3 |= (1 << 30);
    }
    for (VAR4 = 0; VAR4 < 8; VAR4++)
    {
        if (VAR2->VAR10[VAR4].VAR11 & (1 << 26))
        {
            VAR3 |= (1 << VAR4);
        }
    }
    if (VAR3 & VAR2->VAR12)
    {
        VAR3 |= (1 << 31);
    }
    VAR2->VAR13 = VAR3;
}