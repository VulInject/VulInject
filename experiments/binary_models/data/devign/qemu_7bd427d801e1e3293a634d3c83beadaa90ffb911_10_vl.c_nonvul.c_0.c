static void FUN1(void *VAR1)
{
    uint64_t VAR2 = VAR3;
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7 = VAR5->VAR8;
    FUN2();
    FUN3(VAR5);
    while (VAR7 != NULL)
    {
        if (VAR7->VAR9 && VAR7->VAR9 < VAR2)
            VAR2 = VAR7->VAR9;
        VAR7 = VAR7->VAR10;
    }
    FUN4(VAR5->VAR11, VAR2 + FUN5(VAR12));
}