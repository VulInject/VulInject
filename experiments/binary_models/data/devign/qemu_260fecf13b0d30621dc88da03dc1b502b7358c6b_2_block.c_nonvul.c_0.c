void FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    if (VAR3)
    {
        FUN2(VAR3);
    }
    if (VAR2->VAR4)
    {
        assert(VAR2->VAR5);
        FUN3(VAR2->VAR4->VAR2, VAR2->VAR5);
        FUN4(VAR2, VAR2->VAR4);
    }
    else if (VAR3)
    {
        FUN5(&VAR2->VAR5, "", FUN6(VAR2));
    }
    if (!VAR3)
    {
        FUN7(VAR2->VAR5);
        VAR2->VAR5 = NULL;
        VAR2->VAR4 = NULL;
        goto VAR6;
    }
    VAR2->VAR4 = FUN8(VAR2, VAR3, "", &VAR7);
    VAR2->VAR8 &= ~VAR9;
    FUN9(VAR2->VAR10, sizeof(VAR2->VAR10), VAR3->VAR11);
    FUN9(VAR2->VAR12, sizeof(VAR2->VAR12), VAR3->VAR13 ? VAR3->VAR13->VAR14 : "");
    FUN10(VAR3, VAR2->VAR5);
    FUN11(VAR3, VAR15, VAR2->VAR5);
VAR6:
    FUN12(VAR2, NULL);
}