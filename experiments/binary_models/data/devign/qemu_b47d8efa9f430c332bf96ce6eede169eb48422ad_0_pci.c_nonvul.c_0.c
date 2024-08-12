static void FUN1(VAR1 *VAR2)
{
    FUN2(&VAR2->VAR3, VAR4);
    VAR2->VAR3.VAR5 = NULL;
    FUN3(VAR2->VAR3.VAR6);
    close(VAR2->VAR3.VAR6);
    FUN4(VAR2->VAR3.VAR7);
    if (VAR2->VAR8)
    {
        FUN4(VAR2->VAR8);
        VAR2->VAR8 = NULL;
    }
}