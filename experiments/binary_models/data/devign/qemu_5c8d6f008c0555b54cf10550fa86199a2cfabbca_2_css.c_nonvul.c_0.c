void FUN1(uint8_t VAR1, uint8_t VAR2, uint16_t VAR3, int VAR4, int VAR5)
{
    uint8_t VAR6;
    bool VAR7;
    if (VAR5 && !VAR4)
    {
        return;
    }
    if (VAR8.VAR9 == 0)
    {
        VAR6 = (VAR1 == VAR8.VAR10) ? 0 : VAR1;
    }
    else
    {
        VAR6 = VAR1;
    }
    if ((VAR2 > VAR8.VAR11) || (VAR6 > VAR8.VAR9) || ((VAR8.VAR9 == 0) && (VAR1 != VAR8.VAR10)))
    {
        return;
    }
    VAR7 = (VAR8.VAR11 > 0) || (VAR8.VAR9 > 0);
    FUN2(VAR12, VAR13, 0, VAR7 ? 1 : 0, VAR3);
    if (VAR7)
    {
        FUN2(VAR12, VAR13, 0, 0, (VAR6 << 8) | (VAR2 << 4));
    }
    FUN3(FUN4(VAR1, VAR2), VAR3);
}