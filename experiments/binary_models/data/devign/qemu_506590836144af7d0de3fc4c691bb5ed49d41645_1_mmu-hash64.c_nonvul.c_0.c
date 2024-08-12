static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint64_t VAR5)
{
    bool VAR6;
    if (VAR7)
    {
        VAR6 = !!(VAR4->VAR8[VAR9] & VAR10);
    }
    else
    {
        switch (VAR4->VAR11)
        {
        case VAR12:
            VAR6 = true;
            break;
        default:
            VAR6 = !!(VAR4->VAR8[VAR9] & VAR13);
            break;
        }
    }
    if (VAR6 && !VAR14)
    {
        VAR2->VAR15 = VAR16;
    }
    else
    {
        VAR2->VAR15 = VAR17;
    }
    VAR4->VAR5 = VAR5;
}