static int FUN1(VAR1 *VAR2, uint32_t VAR3, uint16_t VAR4, bool VAR5, VAR6 **VAR7)
{
    char VAR8[VAR9 + 1];
    char VAR10[VAR11] = "";
    size_t VAR12;
    int VAR13;
    FUN2();
    if (VAR3 >= sizeof(VAR8))
    {
        FUN3(VAR7, "");
        return -VAR14;
    }
    if (FUN4(VAR2->VAR15, VAR8, VAR3, VAR7) < 0)
    {
        FUN5(VAR7, "");
        return -VAR14;
    }
    VAR8[VAR3] = '';
    FUN6(VAR8);
    VAR2->VAR16 = FUN7(VAR8);
    if (!VAR2->VAR16)
    {
        FUN3(VAR7, "");
        return -VAR14;
    }
    FUN8(VAR2->VAR16->VAR17, VAR2->VAR16->VAR18 | VAR4);
    FUN9(VAR10, VAR2->VAR16->VAR17);
    FUN10(VAR10 + 8, VAR2->VAR16->VAR18 | VAR4);
    VAR12 = VAR5 ? 10 : sizeof(VAR10);
    VAR13 = FUN11(VAR2->VAR15, VAR10, VAR12, VAR7);
    if (VAR13 < 0)
    {
        FUN5(VAR7, "");
        return VAR13;
    }
    FUN12(&VAR2->VAR16->VAR19, VAR2, VAR20);
    FUN13(VAR2->VAR16);
    return 0;
}