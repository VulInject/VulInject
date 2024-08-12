static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int64_t VAR5 = -1, VAR6;
    VAR7 *VAR8 = &VAR2->VAR9[0];
    if (VAR2->VAR10 <= 0)
        return;
    for (;;)
    {
        if (FUN2(VAR2, VAR8, VAR2->VAR11 + 1, NULL, &VAR6, 0) < 0)
            break;
        if (VAR6 <= VAR5)
        {
            FUN3(VAR2->VAR12, VAR13, "");
            return;
        }
        if (VAR6 > VAR4->VAR14)
            break;
        VAR5 = VAR6;
        VAR2->VAR11++;
    }
    if (VAR2->VAR11 >= VAR8->VAR15)
        return;
    VAR4->VAR16 = VAR2->VAR11 + VAR8->VAR17;
    VAR4->VAR18 = VAR8->VAR19[VAR2->VAR11];
}