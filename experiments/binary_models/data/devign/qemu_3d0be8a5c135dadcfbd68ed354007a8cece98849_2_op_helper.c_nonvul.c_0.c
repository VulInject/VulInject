void FUN1(VAR1)(uint32_t VAR2)
{
    uint32_t VAR3 = VAR2 ^ VAR4->VAR5[VAR6];
    unsigned VAR7;
    for (VAR7 = 0; VAR7 < VAR4->VAR8->VAR9; ++VAR7)
    {
        if (VAR3 & (1 << VAR7))
        {
            FUN2(VAR4, VAR4->VAR5[VAR10 + VAR7]);
        }
    }
    VAR4->VAR5[VAR6] = VAR2 & ((1 << VAR4->VAR8->VAR9) - 1);
}