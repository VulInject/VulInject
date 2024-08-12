static void FUN1(VAR1 *VAR2)
{
    VAR3 **VAR4, *VAR5;
    int64_t VAR6;
    if (!VAR2->VAR7)
        return;
    VAR6 = FUN2(VAR2);
    VAR4 = &VAR8[VAR2->VAR9];
    for (;;)
    {
        VAR5 = *VAR4;
        if (!VAR5 || VAR5->VAR10 > VAR6)
            break;
        *VAR4 = VAR5->VAR11;
        VAR5->VAR11 = NULL;
        VAR5->FUN3(VAR5->VAR12);
    }
}