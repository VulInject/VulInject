static void FUN1(VAR1 *VAR2)
{
    TCGv VAR3, *VAR4;
    unsigned int VAR5;
    VAR5 = 1 << (VAR2->VAR6 & 3);
    FUN2("", VAR2->VAR6, VAR5);
    FUN3(VAR2);
    VAR4 = FUN4(VAR2, &VAR3);
    FUN5(VAR2);
    if ((VAR2->VAR7->VAR8.VAR9[2] & VAR10) && VAR5 > 1)
    {
        FUN6(*VAR4, FUN7(VAR2->VAR11), FUN7(0), FUN7(VAR5 - 1));
    }
    if (VAR2->VAR11)
    {
        FUN8(VAR2, VAR12[VAR2->VAR11], *VAR4, VAR5);
    }
    else
    {
        FUN8(VAR2, VAR13, *VAR4, VAR5);
    }
    if (VAR4 == &VAR3)
        FUN9(VAR3);
}