void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    if (!VAR2->VAR7)
    {
        return;
    }
    FUN2(VAR4, &VAR2->VAR8, VAR9) { VAR4->FUN3(VAR4->VAR10); }
    if (VAR2->VAR7->VAR11)
    {
        VAR2->VAR7->FUN1(VAR2);
    }
    FUN2(VAR6, &VAR2->VAR12, VAR13) { FUN1(VAR6->VAR2); }
    VAR2->VAR14 = NULL;
}