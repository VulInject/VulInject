void FUN1(VAR1 *VAR2, uint16_t VAR3, FWCfgCallback VAR4, void *VAR5, VAR6 *VAR7, size_t VAR8)
{
    int VAR9 = !!(VAR3 & VAR10);
    assert(VAR3 & VAR11);
    VAR3 &= VAR12;
    assert(VAR3 < VAR13 && VAR8 <= 65535);
    VAR2->VAR14[VAR9][VAR3].VAR7 = VAR7;
    VAR2->VAR14[VAR9][VAR3].VAR8 = VAR8;
    VAR2->VAR14[VAR9][VAR3].VAR5 = VAR5;
    VAR2->VAR14[VAR9][VAR3].VAR4 = VAR4;
}