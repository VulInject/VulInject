void FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR1 **VAR4, *VAR5;
    FUN2(VAR2);
    VAR4 = &VAR6[VAR2->VAR7->VAR8];
    for (;;)
    {
        VAR5 = *VAR4;
        if (!VAR5)
            break;
        if (VAR5->VAR3 > VAR3)
            break;
        VAR4 = &VAR5->VAR9;
    }
    VAR2->VAR3 = VAR3;
    VAR2->VAR9 = *VAR4;
    *VAR4 = VAR2;
    if (VAR4 == &VAR6[VAR2->VAR7->VAR8])
    {
        if (!VAR10->VAR11)
        {
            FUN3(VAR10);
        }
        if (VAR12)
            FUN4();
    }
}