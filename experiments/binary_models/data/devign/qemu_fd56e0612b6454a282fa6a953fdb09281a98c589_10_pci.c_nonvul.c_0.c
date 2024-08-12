void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    if (!VAR2->VAR5)
    {
        return;
    }
    FUN3(VAR4->VAR6, VAR2->VAR7[VAR8]);
    FUN3(VAR4->VAR9, VAR2->VAR7[VAR10]);
    FUN3(VAR4->VAR9, VAR2->VAR7[VAR11]);
    VAR2->VAR5 = false;
}