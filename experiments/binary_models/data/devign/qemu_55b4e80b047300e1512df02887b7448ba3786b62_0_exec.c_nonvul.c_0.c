static void FUN1(VAR1 *VAR2)
{
    bool VAR3 = VAR2->VAR4;
    FUN2(VAR2);
    if (VAR3)
    {
        VAR5 *VAR4 = FUN3(VAR2, VAR5, VAR6);
        FUN4(FUN5(&VAR4->VAR6));
        FUN6(VAR4);
    }
}