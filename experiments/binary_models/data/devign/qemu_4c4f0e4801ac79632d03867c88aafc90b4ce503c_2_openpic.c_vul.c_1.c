static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    int VAR7 = VAR6->VAR8;
    int VAR9, VAR10;
    FUN2("" VAR11 "", VAR12, VAR2, VAR3);
    if (VAR2 & 0xF)
    {
        return;
    }
    switch (VAR2)
    {
    case VAR13:
        VAR9 = VAR3 >> VAR14;
        VAR7 += VAR9;
        VAR10 = (VAR3 & VAR15) >> VAR16;
        VAR6->VAR17[VAR9].VAR18 |= 1 << VAR10;
        FUN3(VAR6, VAR7, 1);
        break;
    default:
        break;
    }
}