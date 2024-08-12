static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    if (VAR3->VAR4 == VAR5)
    {
        FUN2(VAR3->VAR6, 0, VAR3->VAR7, VAR3->VAR6->VAR8);
    }
    FUN3(VAR3->VAR7);
    VAR3->VAR9.FUN4(VAR3->VAR9.VAR1, (VAR3->VAR10 > 0 ? 0 : VAR3->VAR10));
    FUN5(VAR3->VAR11);
    VAR3->VAR11 = NULL;
    FUN6(VAR3);
}