void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    FUN3(FUN4(VAR2));
    FUN5(VAR2->VAR5);
    VAR2->VAR6 = true;
    if (VAR2->VAR7 != VAR4->VAR8)
    {
        FUN6(FUN4(VAR2));
        return;
    }
    FUN7(VAR2);
}