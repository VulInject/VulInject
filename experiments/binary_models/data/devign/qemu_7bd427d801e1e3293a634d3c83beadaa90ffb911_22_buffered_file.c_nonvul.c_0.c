static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    if (VAR3->VAR4)
    {
        FUN2(VAR3);
        return;
    }
    FUN3(VAR3->VAR5, FUN4(VAR6) + 100);
    if (VAR3->VAR7)
        return;
    VAR3->VAR8 = 0;
    FUN5(VAR3);
    VAR3->FUN6(VAR3->VAR1);
}