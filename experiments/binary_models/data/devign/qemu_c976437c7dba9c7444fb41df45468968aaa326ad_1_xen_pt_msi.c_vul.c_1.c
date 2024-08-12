void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    if (!VAR4)
    {
        return;
    }
    FUN2(VAR2, false);
    FUN3(VAR2, FUN4(VAR4), VAR4->VAR5, VAR4->VAR6, false, VAR4->VAR7);
    VAR4->VAR8 = 0;
    VAR4->VAR9 = false;
    VAR4->VAR6 = VAR10;
}