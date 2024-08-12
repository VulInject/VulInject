static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    if (VAR6->VAR7)
    {
        VAR6->FUN4(VAR4);
    }
    if (VAR4->VAR8 && !FUN5(&VAR4->VAR8->VAR9))
    {
        FUN6(&VAR4->VAR8->VAR9, VAR4, VAR10);
    }