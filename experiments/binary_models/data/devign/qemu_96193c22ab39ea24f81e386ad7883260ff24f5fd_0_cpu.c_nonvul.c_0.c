static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    int VAR5;
    uint64_t VAR6;
    if (!(VAR4->VAR7[VAR8] & VAR9))
    {
        return;
    }
    VAR6 = (VAR10 | VAR11);
    for (VAR5 = 2; VAR5 < FUN2(VAR12); VAR5++)
    {
        const VAR13 *VAR14 = &VAR12[VAR5];
        if (VAR4->VAR7[VAR14->VAR15] & VAR14->VAR16)
        {
            VAR6 |= (1ULL << VAR5);
        }
    }
    VAR4->VAR7[VAR17] = VAR6;
    VAR4->VAR7[VAR18] = VAR6 >> 32;
}