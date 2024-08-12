static void FUN1(VAR1 *VAR2)
{
    TCGv VAR3, *VAR4;
    unsigned int VAR5;
    VAR5 = 1 << (VAR2->VAR6 & 3);
    FUN2("", VAR5, VAR2->VAR7 ? "" : "");
    FUN3(VAR2);
    FUN4(VAR2);
    VAR4 = FUN5(VAR2, &VAR3);
    if ((VAR2->VAR8->VAR9.VAR10[2] & VAR11) && VAR5 > 1)
    {
        FUN6(*VAR4, FUN7(VAR2->VAR12), FUN7(1), FUN7(VAR5 - 1));
        FUN8(VAR2, *VAR4, VAR13[VAR2->VAR12], VAR5);
        if (VAR4 == &VAR3)
        FUN9(VAR3)