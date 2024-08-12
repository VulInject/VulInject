void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    if (!VAR2->VAR5)
    {
        return;
    }
    FUN2(VAR4, &VAR2->VAR6, VAR7) { VAR4->FUN3(VAR4->VAR8); }
    if (VAR2->VAR9)
    {
        FUN4(&VAR2->VAR10);
    }
    if (VAR2->VAR5->VAR11)
    {
        VAR2->VAR5->FUN1(VAR2);
    }
    if (VAR2->VAR12)
    {
        FUN1(VAR2->VAR12->VAR2);
    }
    if (VAR2->VAR13)
    {
        FUN1(VAR2->VAR13->VAR2);
    }
    VAR2->VAR14 = NULL;
}