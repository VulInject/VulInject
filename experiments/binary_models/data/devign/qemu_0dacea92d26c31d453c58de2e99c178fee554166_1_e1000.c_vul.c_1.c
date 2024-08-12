FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, uint32_t VAR5, uint32_t VAR6)
{
    uint32_t VAR7;
    if (VAR6 && VAR6 < VAR3)
        VAR3 = VAR6 + 1;
    if (VAR4 < VAR3 - 1)
    {
        VAR7 = FUN2(VAR3 - VAR5, VAR2 + VAR5);
        FUN3(VAR2 + VAR4, FUN4(VAR7));
    }
}