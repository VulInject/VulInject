static bool FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5)
{
    VAR3 **VAR6, *VAR7;
    VAR6 = &VAR2->VAR8;
    for (;;)
    {
        VAR7 = *VAR6;
        if (!FUN2(VAR7, VAR5))
        {
            break;
        }
        VAR6 = &VAR7->VAR9;
    }
    VAR4->VAR5 = FUN3(VAR5, 0);
    VAR4->VAR9 = *VAR6;
    FUN4(VAR6, VAR4);
    return VAR6 == &VAR2->VAR8;
}