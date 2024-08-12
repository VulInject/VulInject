static void FUN1(VAR1 *VAR2, VAR3 *VAR4, hwaddr VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9;
    uint32_t VAR10;
    VAR9 = (VAR8 *)VAR4->VAR11;
    FUN3(&VAR9->VAR12);
    FUN3(&VAR9->VAR13);
    FUN4("", VAR9->VAR12, VAR9->VAR13);
    VAR10 = FUN5(VAR2, VAR9->VAR12, VAR9->VAR13);
    if (VAR10 != VAR14)
    {
        FUN6(VAR10, VAR5);
        return;
    }
    assert(FUN7(VAR3, VAR11) + sizeof(*VAR9) + VAR9->VAR13 <= 4096);
    VAR7->FUN8(VAR2, VAR9->VAR15, VAR9->VAR13, VAR9->VAR12);
    FUN6(VAR14, VAR5);
}