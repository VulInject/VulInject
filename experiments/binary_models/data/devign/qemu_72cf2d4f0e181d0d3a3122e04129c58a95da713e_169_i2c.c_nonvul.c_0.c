int FUN1(VAR1 *VAR2, int VAR3, int recv)
{
    VAR4 *VAR5;
    VAR6 *VAR7 = NULL;
    FUN2(VAR5, &VAR2->VAR8.VAR9, VAR10)
    {
        VAR7 = FUN3(VAR5);
        if (VAR7->VAR3 == VAR3)
            break;
    }
    if (!VAR7)
        return 1;
    VAR2->VAR11 = VAR7;
    VAR7->VAR12->FUN4(VAR7, recv ? VAR13 : VAR14);
    return 0;
}