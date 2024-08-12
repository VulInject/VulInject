static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    if (VAR3->VAR4)
    {
        FUN2(VAR3->VAR5);
    }
    else
    {
        VAR3->VAR6.FUN3(VAR3->VAR6.VAR1, VAR3->VAR7);
    }
    FUN4(VAR3->VAR8);
    VAR3->VAR8 = NULL;
    FUN5(VAR3);
}