void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR6);
    int VAR11 = FUN3(VAR10->VAR12);
    int VAR13 = FUN4(FUN5(VAR10));
    if (VAR13 < 0)
    {
        FUN6(VAR8, "" VAR14 "");
        return;
    }
    VAR4->VAR15[VAR13].VAR16 |= (1U << VAR11);
    FUN7(FUN8(VAR2), VAR17);
}