static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    FUN2(VAR3);
    FUN3(VAR3);
    while (!VAR3->VAR4 && !VAR3->VAR5)
    {
        FUN4(VAR3);
    }
    FUN5(VAR3);
}