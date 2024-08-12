static int FUN1(void *VAR1, uint32_t VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR1;
    if (VAR2 > VAR6->VAR7.VAR8)
    {
        return -1;
    }
    VAR6->VAR9[VAR2].VAR10 = VAR4->VAR11;
    VAR6->VAR9[VAR2].VAR12 = VAR4->VAR13;
    VAR6->VAR9[VAR2].VAR14 = VAR4->VAR14;
    VAR6->VAR9[VAR2].VAR15 = VAR4->VAR15;
    if (VAR4->VAR14 && VAR4->VAR15)
    {
        VAR6->VAR16 |= (1 << VAR2);
    }
    else
    {
        VAR6->VAR16 &= ~(1 << VAR2);
    }
    FUN2(VAR6, VAR17);
    return 0;
}