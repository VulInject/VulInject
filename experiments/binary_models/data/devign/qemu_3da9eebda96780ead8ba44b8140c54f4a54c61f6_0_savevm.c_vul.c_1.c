static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, void *VAR5)
{
    const VAR6 *VAR7 = VAR4->VAR8;
    while (VAR7 && VAR7->VAR9)
    {
        if (VAR7->FUN2(VAR5))
        {
            const VAR3 *VAR4 = VAR7->VAR4;
            uint8_t VAR10;
            FUN3(VAR2, VAR11);
            VAR10 = strlen(VAR4->VAR12);
            FUN3(VAR2, VAR10);
            FUN4(VAR2, (VAR13 *)VAR4->VAR12, VAR10);
            FUN5(VAR2, VAR4->VAR14);
            assert(!VAR4->VAR8);
            FUN6(VAR2, VAR4, VAR5);
        }
        VAR7++;
    }
}