int FUN1(uint8_t VAR1, bool VAR2)
{
    FUN2(VAR1, VAR2 ? "" : "");
    if (VAR1 > VAR3)
    {
        return -VAR4;
    }
    if (VAR5.VAR6[VAR1])
    {
        return -VAR7;
    }
    VAR5.VAR6[VAR1] = FUN3(sizeof(VAR8));
    if (VAR2)
    {
        VAR5.VAR9 = VAR1;
    }
    return 0;
}