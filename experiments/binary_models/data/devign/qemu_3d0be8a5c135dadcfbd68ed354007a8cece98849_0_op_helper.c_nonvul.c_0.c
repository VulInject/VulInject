void FUN1(VAR1)(uint32_t VAR2, uint32_t VAR3)
{
    if (VAR4->VAR5[VAR6] & (1 << VAR2) && VAR4->VAR5[VAR7 + VAR2] != VAR3)
    {
        FUN2(VAR4, VAR4->VAR5[VAR7 + VAR2]);
        FUN2(VAR4, VAR3);
    }
    VAR4->VAR5[VAR7 + VAR2] = VAR3;
}