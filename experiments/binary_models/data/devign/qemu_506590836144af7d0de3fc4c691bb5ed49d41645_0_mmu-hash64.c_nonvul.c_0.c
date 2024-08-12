static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint64_t VAR5, uint64_t VAR6)
{
    bool VAR7;
    if (VAR8)
    {
        VAR7 = !!(VAR4->VAR9[VAR10] & VAR11);
    }
    else
    {
        switch (VAR4->VAR12)
        {
        case VAR13:
            VAR7 = true;
            break;
        default:
            VAR7 = !!(VAR4->VAR9[VAR10] & VAR14);
            break;
        }
    }
    if (VAR7 && !VAR15)
    {
        VAR2->VAR16 = VAR17;
        VAR4->VAR9[VAR18] = VAR5;
        VAR4->VAR9[VAR19] = VAR6;
    }
    else
    {
        VAR2->VAR16 = VAR20;
        VAR4->VAR9[VAR21] = VAR5;
        VAR4->VAR9[VAR22] = VAR6;
    }
    VAR4->VAR23 = 0;
}