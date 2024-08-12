static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR4->VAR6 = 0;
    if (VAR4->VAR7)
    {
        VAR4->VAR8 = FUN2(VAR4->VAR7, VAR9, VAR10, VAR2);
    }
    FUN3(VAR2);
    FUN4(VAR4->VAR11);
    VAR4->VAR11 = NULL;
    FUN5(VAR4->VAR12);
    VAR4->VAR12 = -1;
    FUN6(VAR2->VAR13);
    VAR2->VAR13 = FUN7("", VAR4->VAR14, VAR4->VAR15, VAR4->VAR16);
    FUN8(VAR2, VAR17);
    if (VAR4->VAR18)
    {
        FUN9(VAR2);
    }
}