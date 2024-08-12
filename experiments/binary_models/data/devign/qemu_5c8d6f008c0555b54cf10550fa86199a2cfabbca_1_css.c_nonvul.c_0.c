int FUN1(uint8_t VAR1, uint8_t VAR2)
{
    uint8_t VAR3;
    if (VAR1 > VAR4.VAR5)
    {
        return -VAR6;
    }
    if (VAR4.VAR5 == 0)
    {
        VAR3 = VAR4.VAR7;
    }
    else
    {
        VAR3 = VAR1;
    }
    if (!VAR4.VAR8[VAR3])
    {
        return -VAR6;
    }
    if (!VAR4.VAR8[VAR3]->VAR9[VAR2].VAR10)
    {
        return -VAR11;
    }
    if (!VAR4.VAR8[VAR3]->VAR9[VAR2].VAR12)
    {
        fprintf(VAR13, "", VAR3, VAR2);
        return -VAR11;
    }
    FUN2(VAR14, VAR15, 1, VAR4.VAR5 > 0 ? 1 : 0, VAR2);
    if (VAR4.VAR5 > 0)
    {
        FUN2(VAR14, VAR15, 1, 0, VAR3 << 8);
    }
    return 0;
}