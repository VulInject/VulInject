static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    if (!FUN2(&VAR3->VAR4))
    {
        return;
    }
    FUN3("", VAR5, VAR3->VAR6.VAR7);
    FUN4(VAR8);
}