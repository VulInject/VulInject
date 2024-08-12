void FUN1(VAR1 *VAR2, uint8_t VAR3, uint8_t VAR4, uint8_t VAR5, uint8_t VAR6, uint8_t VAR7)
{
    VAR8 *VAR9 = (VAR8 *)VAR2;
    VAR9->VAR3 = VAR3;
    VAR9->VAR4 = VAR4;
    VAR9->VAR5 = VAR5;
    VAR9->VAR6 = VAR6;
    VAR9->VAR7 = VAR7;
    if (VAR6)
        VAR9->VAR10 |= VAR11;
    else
        VAR9->VAR10 &= ~VAR11;
}