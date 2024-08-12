static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    if (VAR2->VAR5)
    {
        FUN2(VAR2->VAR5);
    }
    FUN3(VAR1, VAR2);
    VAR4->VAR6--;
    FUN4(VAR4);
    FUN5(VAR4);
}