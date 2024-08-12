static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6;
    if (VAR2->VAR7)
    {
        fprintf(VAR8, "", VAR2->VAR9);
        return;
    }
    VAR2->VAR7++;
    VAR6 = FUN3(&VAR4->free);
    FUN4(&VAR4->free, VAR6, VAR10);
    VAR4->VAR11--;
    FUN5(VAR6, VAR2);
    FUN6(&VAR4->VAR12, VAR6, VAR10);
    VAR4->VAR13++;
}