static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    uint16_t VAR5 = VAR2->VAR5;
    uint16_t VAR6 = VAR2->VAR6;
    uint8_t VAR7 = VAR2->VAR7;
    if (VAR5 >= VAR8 || VAR6 >= VAR8)
    {
        FUN2(VAR4, "", FUN3(VAR5, VAR6), VAR8);
        return;
    }
    if (!VAR9[VAR5].VAR10 || !VAR9[VAR6].VAR10)
    {
        FUN2(VAR4, ""
                         "");
        return;
    }
    if (VAR7 < VAR11)
    {
        FUN2(VAR4, "" VAR12 ""
                         "",
                   VAR7, VAR11);
        return;
    }
    if (VAR5 == VAR6 && VAR7 != VAR11)
    {
        FUN2(VAR4, "", VAR5, VAR11);
        return;
    }
    VAR9[VAR5].VAR13[VAR6] = VAR7;
    VAR14 = true;
}