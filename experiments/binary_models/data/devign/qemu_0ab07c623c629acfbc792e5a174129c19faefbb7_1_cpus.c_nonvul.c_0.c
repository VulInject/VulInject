static void FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    if (!VAR2->VAR5)
    {
        return;
    }
    while ((VAR4 = VAR2->VAR5))
    {
        VAR2->VAR5 = VAR4->VAR6;
        VAR4->FUN2(VAR4->VAR7);
        VAR4->VAR8 = true;
    }
    VAR2->VAR9 = NULL;
    FUN3(&VAR10);
}