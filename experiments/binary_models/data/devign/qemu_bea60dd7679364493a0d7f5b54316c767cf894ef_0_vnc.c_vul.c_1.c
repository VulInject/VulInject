static void FUN1(VAR1 *VAR2)
{
    if (FUN2(VAR2, VAR3))
    {
        FUN3(VAR2);
        FUN4(VAR2, VAR4);
        FUN4(VAR2, 0);
        FUN5(VAR2, 1);
        FUN6(VAR2, 0, 0, FUN7(VAR2->VAR5->VAR6), FUN8(VAR2->VAR5->VAR6), VAR7);
        FUN9(VAR2);
        FUN10(VAR2);
        FUN11(VAR2);
    }
    else
    {
        FUN12(VAR2);
    }
}