static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    FUN2(VAR3, 0);
    FUN3(&VAR3->VAR4);
    FUN4(&VAR3->VAR4);
    FUN5(&VAR3->VAR4);
    FUN6(&VAR3->VAR4);
    if (!VAR3->VAR5)
    {
        VAR3->VAR6 |= VAR7;
    }
    VAR3->VAR8 = ~0;
    FUN7(&VAR3->VAR4, VAR3->VAR9);
}