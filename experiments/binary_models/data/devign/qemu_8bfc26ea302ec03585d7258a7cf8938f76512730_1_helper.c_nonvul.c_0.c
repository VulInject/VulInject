static void FUN1(VAR1 *VAR2, bool VAR3)
{
    uint32_t VAR4;
    uint32_t VAR5 = VAR2->VAR6.VAR7[VAR2->VAR6.VAR8];
    bool VAR9 = VAR5 & VAR10;
    if (VAR9 != VAR3)
    {
        VAR4 = VAR2->VAR6.VAR11;
        VAR2->VAR6.VAR11 = VAR2->VAR12[13];
        VAR2->VAR12[13] = VAR4;
        VAR2->VAR6.VAR7[VAR2->VAR6.VAR8] = FUN2(VAR5, VAR13, VAR14, VAR3);
    }
}