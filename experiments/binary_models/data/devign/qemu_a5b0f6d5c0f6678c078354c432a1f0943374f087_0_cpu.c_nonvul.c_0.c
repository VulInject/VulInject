static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR4);
    VAR7 *VAR8 = &VAR4->VAR8;
    if (FUN4(VAR9))
    {
        FUN5("", VAR2->VAR10);
        FUN6(VAR8, 0);
    }
    VAR6->FUN7(VAR2);
    memset(VAR8, 0, FUN8(VAR7, VAR11));
    FUN9(VAR8, 1);
}