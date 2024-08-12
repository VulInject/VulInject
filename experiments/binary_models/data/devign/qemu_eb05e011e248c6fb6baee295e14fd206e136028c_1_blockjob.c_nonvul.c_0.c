static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    FUN2(VAR3->VAR5);
    VAR5 = FUN3(VAR3->VAR6->VAR7);
    if (VAR5 != VAR3->VAR5)
    {
        FUN2(VAR5);
    }
    VAR3->FUN4(VAR3->VAR6, VAR3->VAR1);
    if (VAR5 != VAR3->VAR5)
    {
        FUN5(VAR5);
    }
    FUN5(VAR3->VAR5);
    FUN6(VAR3);
}