bool FUN1(int VAR1, uint8_t VAR2, uint8_t VAR3, uint16_t VAR4)
{
    VAR5 *VAR6;
    uint8_t VAR7;
    VAR7 = (!VAR1 && (VAR2 == 0)) ? VAR8.VAR9 : VAR2;
    if (VAR7 > VAR10 || VAR3 > VAR11 || !VAR8.VAR12[VAR7] || !VAR8.VAR12[VAR7]->VAR13[VAR3])
    {
        return true;
    }
    VAR6 = VAR8.VAR12[VAR7]->VAR13[VAR3];
    return VAR4 > FUN2(VAR6->VAR14, (VAR15 + 1) / sizeof(unsigned long));
}