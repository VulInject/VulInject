static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    FUN2(VAR4->VAR6);
    VAR4->VAR6 = NULL;
    if (!(VAR2->VAR7 & VAR8))
    {
        FUN3(VAR2, VAR4->VAR9);
        FUN3(VAR2, VAR4->VAR10);
        FUN4(VAR2);
    }
    FUN5(VAR2, VAR4->VAR9);
    FUN5(VAR2, VAR4->VAR10);
    FUN2(VAR4->VAR11);
    FUN6(VAR2);
    FUN2(VAR4->VAR12);
    FUN7(VAR4->VAR13);
    FUN8(VAR2);
    FUN9(VAR2);
}