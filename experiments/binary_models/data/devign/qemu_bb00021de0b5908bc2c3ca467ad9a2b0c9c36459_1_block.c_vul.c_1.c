void FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    if (VAR2->VAR3)
    {
        assert(VAR2->VAR4);
        FUN2(VAR2->VAR3, VAR2->VAR4);
    }
    else if (VAR3)
    {
        FUN3(&VAR2->VAR4, "", FUN4(VAR2));
    }
    VAR2->VAR3 = VAR3;
    if (!VAR3)
    {
        FUN5(VAR2->VAR4);
        VAR2->VAR4 = NULL;
        goto VAR5;
    }
    VAR2->VAR6 &= ~VAR7;
    FUN6(VAR2->VAR8, sizeof(VAR2->VAR8), VAR3->VAR9);
    FUN6(VAR2->VAR10, sizeof(VAR2->VAR10), VAR3->VAR11 ? VAR3->VAR11->VAR12 : "");
    FUN7(VAR2->VAR3, VAR2->VAR4);
    FUN8(VAR2->VAR3, VAR13, VAR2->VAR4);
VAR5:
    FUN9(VAR2, NULL);
}