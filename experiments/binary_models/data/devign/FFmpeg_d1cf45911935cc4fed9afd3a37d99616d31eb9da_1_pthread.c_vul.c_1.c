void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    if (!VAR2->VAR5)
        return;
    FUN2(VAR4, VAR2->VAR6);
    if (VAR4->VAR7)
        FUN3(VAR4->VAR8->VAR2, VAR4->VAR7->VAR2, 0);
    VAR4->VAR9 = VAR4->VAR10 = 0;
    VAR4->VAR11 = 1;
    VAR4->VAR7 = NULL;
}