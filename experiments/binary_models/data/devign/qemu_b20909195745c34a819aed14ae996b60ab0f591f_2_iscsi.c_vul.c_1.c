FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    FUN2(VAR3->VAR4);
    if (!VAR3->VAR5)
    {
        VAR3->VAR6.FUN3(VAR3->VAR6.VAR7, VAR3->VAR8);
    }
    FUN4(VAR3);
    if (VAR3->VAR5)
    {
        return;
    }
    FUN5(VAR3->VAR9);
    VAR3->VAR9 = NULL;
}