static void FUN1(VAR1 *VAR2)
{
    assert(VAR2 != NULL);
    FUN2(VAR2->VAR3);
    if (!(VAR2->VAR4 & VAR5))
    {
        FUN3(VAR2->VAR6, VAR2->VAR4);
        return;
    }
    FUN4(VAR2->VAR6, VAR2->VAR7 + 1);
    FUN5(VAR2->VAR3, VAR2->VAR7 + 1);
    FUN6(VAR2->VAR3, 1);
}