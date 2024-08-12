static int FUN1(uint8_t VAR1, uint8_t VAR2, uint8_t VAR3)
{
    VAR4 *VAR5;
    FUN2(VAR1, VAR2, VAR3);
    if (VAR1 > VAR6)
    {
        return -VAR7;
    }
    VAR5 = VAR8.VAR5[VAR1];
    if (!VAR5)
    {
        return -VAR7;
    }
    if (VAR5->VAR9[VAR2].VAR10)
    {
        return -VAR11;
    }
    VAR5->VAR9[VAR2].VAR10 = 1;
    VAR5->VAR9[VAR2].VAR3 = VAR3;
    VAR5->VAR9[VAR2].VAR12 = 1;
    FUN3(VAR1, VAR2);
    return 0;
}