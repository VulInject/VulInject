static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2, VAR3);
    if (FUN3(VAR2->VAR4))
    {
        FUN2(VAR2, VAR3);
        return;
    }
    FUN4(VAR2, VAR2->VAR5 - 4);
    FUN5(VAR6[FUN6(VAR2->VAR7)], VAR8, VAR6[FUN7(VAR2->VAR7)]);
}