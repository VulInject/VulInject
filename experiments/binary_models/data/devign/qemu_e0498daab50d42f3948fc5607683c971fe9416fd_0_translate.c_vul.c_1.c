static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2, VAR3);
    int VAR4, VAR5;
    TCGv VAR6;
    if (FUN3(VAR2->VAR7 == 0))
    {
        FUN2(VAR2, VAR3);
        return;
    }
    VAR4 = FUN4(VAR2->VAR8);
    VAR5 = FUN5(VAR2->VAR8);
    if (FUN3((VAR5 & 1) || VAR5 == VAR4))
    {
        FUN2(VAR2, VAR9);
        return;
    }
    if (FUN3(VAR2->VAR10))
    {
        FUN6(VAR2, VAR11, VAR12);
        return;
    }
    FUN7(VAR2, VAR13);
    VAR6 = FUN8();
    FUN9(VAR2, VAR6, 0x0F);
    FUN10(VAR2, VAR14[VAR5], VAR6);
    FUN11(VAR2, VAR6, VAR6, 8);
    FUN10(VAR2, VAR14[VAR5 + 1], VAR6);
    FUN12(VAR6);
}