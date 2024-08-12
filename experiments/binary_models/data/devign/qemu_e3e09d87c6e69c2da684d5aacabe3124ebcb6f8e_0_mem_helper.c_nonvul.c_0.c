static void FUN1(VAR1 *VAR2, uint32_t VAR3, uint64_t VAR4, uint8_t VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    hwaddr VAR8;
    hwaddr VAR9 = VAR3;
    void *VAR10;
    uint64_t VAR11 = VAR2->VAR12.VAR13 & VAR14;
    int VAR15;
    if (FUN3(VAR2, VAR4, 1, VAR11, &VAR8, &VAR15, true))
    {
        FUN4(VAR2, VAR4, VAR5);
        FUN5(FUN6(VAR7), "");
    }
    VAR8 |= VAR4 & ~VAR16;
    VAR10 = FUN7(VAR8, &VAR9, 1);
    memset(VAR10, VAR5, VAR9);
    FUN8(VAR10, 1, VAR9, VAR9);
}