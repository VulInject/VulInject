int FUN1(void *VAR1, uint16_t VAR2, FWCfgCallback VAR3, void *VAR4, VAR5 *VAR6, size_t VAR7)
{
    VAR8 *VAR9 = VAR1;
    int VAR10 = !!(VAR2 & VAR11);
    if (!(VAR2 & VAR12))
        return 0;
    VAR2 &= VAR13;
    if (VAR2 >= VAR14 || VAR7 > 65535)
        return 0;
    VAR9->VAR15[VAR10][VAR2].VAR6 = VAR6;
    VAR9->VAR15[VAR10][VAR2].VAR7 = VAR7;
    VAR9->VAR15[VAR10][VAR2].VAR4 = VAR4;
    VAR9->VAR15[VAR10][VAR2].VAR3 = VAR3;
    return 1;
}