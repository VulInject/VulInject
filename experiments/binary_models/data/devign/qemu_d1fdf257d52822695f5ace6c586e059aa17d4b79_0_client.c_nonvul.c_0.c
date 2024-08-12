VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    uint8_t VAR8[VAR9];
    uint32_t VAR10;
    ssize_t VAR11;
    VAR11 = FUN2(VAR3, VAR8, sizeof(VAR8), VAR7);
    if (VAR11 <= 0)
    {
        return VAR11;
    }
    if (VAR11 != sizeof(VAR8))
    {
        FUN3(VAR7, "");
        return -VAR12;
    }
    VAR10 = FUN4(VAR8);
    VAR5->VAR13 = FUN4(VAR8 + 4);
    VAR5->VAR14 = FUN5(VAR8 + 8);
    VAR5->VAR13 = FUN6(VAR5->VAR13);
    if (VAR5->VAR13 == VAR15)
    {
        FUN3(VAR7, "");
        return -VAR12;
    }
    FUN7("" VAR16 "" VAR17 "" VAR18 "", VAR10, VAR5->VAR13, VAR5->VAR14);
    if (VAR10 != VAR19)
    {
        FUN3(VAR7, "" VAR16 "", VAR10);
        return -VAR12;
    }
    return sizeof(VAR8);
}