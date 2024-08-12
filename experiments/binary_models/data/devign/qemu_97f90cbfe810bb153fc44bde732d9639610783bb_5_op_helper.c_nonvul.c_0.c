void FUN1(uint32_t VAR1, uint32_t VAR2, uint32_t VAR3, uint32_t VAR4)
{
    if (VAR1 & VAR4)
    {
        FUN2(VAR5, "", VAR1, VAR4, VAR3, VAR2);
        VAR6->VAR7[VAR8] = VAR1;
        VAR6->VAR7[VAR9] = VAR10 | (VAR3 << 10) | (VAR2 & 31) << 5;
        if (VAR4 == 3)
        {
            VAR6->VAR7[VAR9] |= 1 << 11;
        }
        if (!(VAR6->VAR7[VAR11] & VAR12))
        {
            return;
        }
        FUN3(VAR13);
    }
}