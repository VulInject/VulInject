bool FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    hwaddr VAR6 = FUN2(VAR4, VAR5);
    hwaddr VAR7 = FUN3(VAR4, VAR5);
    void *VAR8;
    VAR2->VAR9 = false;
    FUN4(&VAR2->VAR10);
    VAR8 = FUN5(&VAR2->VAR10, VAR6, VAR7, true);
    if (!VAR8)
    {
        FUN6(""
                     "" VAR11 "" VAR12,
                     VAR6, VAR7);
        VAR2->VAR9 = true;
        return false;
    }
    FUN7(&VAR2->VAR13, FUN8(VAR4, VAR5), VAR8, 4096);
    VAR2->VAR14 = FUN9(VAR4, VAR5);
    VAR2->VAR15 = VAR2->VAR13.VAR16->VAR17;
    VAR2->VAR18 = 0;
    VAR2->VAR19 = false;
    FUN10(FUN2(VAR4, VAR5), VAR2->VAR13.VAR20, VAR2->VAR13.VAR21, VAR2->VAR13.VAR16);
    return true;
}