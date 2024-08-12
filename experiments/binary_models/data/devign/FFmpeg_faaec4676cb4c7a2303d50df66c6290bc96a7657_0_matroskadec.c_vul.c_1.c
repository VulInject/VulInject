static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5;
    VAR6 *VAR5 = VAR4->VAR7;
    int64_t VAR8 = FUN2(VAR2->VAR9->VAR10);
    int VAR11;
    if (!VAR2->VAR9->VAR10->VAR12 || (VAR2->VAR9->VAR13 & VAR14))
        return;
    for (VAR11 = 0; VAR11 < VAR4->VAR15; VAR11++)
    {
        if (VAR5[VAR11].VAR16 <= VAR8)
            continue;
        if (VAR5[VAR11].VAR17 == VAR18)
        {
            VAR2->VAR19 = 1;
            continue;
        }
        if (FUN3(VAR2, VAR11) < 0)
            break;
    }
}