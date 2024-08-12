static void FUN1(VAR1 *VAR2, uint16_t VAR3, uint16_t VAR4, hwaddr VAR5, uint64_t VAR6, bool VAR7, bool VAR8, uint32_t VAR9)
{
    VAR10 *VAR11 = FUN2(sizeof(*VAR11));
    VAR12 *VAR13 = FUN2(sizeof(*VAR13));
    uint64_t VAR14 = FUN3(VAR5, VAR9);
    FUN4(VAR15, "" VAR16 "" VAR17 "" VAR17 "" VAR16, VAR3, VAR5, VAR6, VAR4);
    if (FUN5(VAR2->VAR18) >= VAR19)
    {
        FUN4(VAR15, "");
        FUN6(VAR2);
    }
    VAR11->VAR14 = VAR14;
    VAR11->VAR4 = VAR4;
    VAR11->VAR6 = VAR6;
    VAR11->VAR7 = VAR7;
    VAR11->VAR8 = VAR8;
    VAR11->VAR20 = FUN7(VAR9);
    *VAR13 = FUN8(VAR14, VAR3, VAR9);
    FUN9(VAR2->VAR18, VAR13, VAR11);
}