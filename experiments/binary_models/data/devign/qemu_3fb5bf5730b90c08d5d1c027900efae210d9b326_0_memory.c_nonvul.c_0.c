void FUN1(VAR1 *VAR2, hwaddr VAR3)
{
    VAR1 *VAR4 = VAR2->VAR4;
    if (VAR3 == VAR2->VAR3 || !VAR4)
    {
        VAR2->VAR3 = VAR3;
        return;
    }
    FUN2();
    FUN3(VAR2);
    FUN4(VAR4, VAR2);
    FUN5(VAR4, VAR3, VAR2);
    FUN6(VAR2);
    FUN7();
}