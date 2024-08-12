void FUN1(int VAR1, int VAR2)
{
    int VAR3, VAR4;
    uint32_t VAR5, VAR6;
    VAR7 *VAR8;
    VAR3 = VAR9;
    VAR4 = VAR10;
    VAR5 = VAR11;
    VAR6 = 0xffffffff;
    if (!(VAR12->VAR13[VAR14].VAR15 & VAR16))
        VAR6 = 0xffff;
    VAR8 = VAR12->VAR13[VAR14].VAR17;
    if (VAR1)
    {
        VAR5 -= 4;
        FUN2(VAR8 + (VAR5 & VAR6), VAR12->VAR13[VAR18].VAR19);
        VAR5 -= 4;
        FUN2(VAR8 + (VAR5 & VAR6), VAR2);
    }
    else
    {
        VAR5 -= 2;
        FUN3(VAR8 + (VAR5 & VAR6), VAR12->VAR13[VAR18].VAR19);
        VAR5 -= 2;
        FUN3(VAR8 + (VAR5 & VAR6), VAR2);
    }
    if (!(VAR12->VAR13[VAR14].VAR15 & VAR16))
        VAR11 = (VAR11 & ~0xffff) | (VAR5 & 0xffff);
    else
        VAR11 = VAR5;
    VAR12->VAR20 = VAR4;
    VAR12->VAR13[VAR18].VAR19 = VAR3;
    VAR12->VAR13[VAR18].VAR17 = (VAR7 *)(VAR3 << 4);
}