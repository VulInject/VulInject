FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    FUN2(VAR4->VAR5);
    FUN3(VAR4, &VAR4->VAR6, NULL);
    FUN4(&VAR4->VAR6);
    FUN5(&VAR4->VAR7);
    FUN6(&VAR4->VAR8);
    FUN7(&VAR4->VAR9)