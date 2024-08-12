static VAR1 FUN1(VAR2 *VAR3, struct VAR4 *VAR5)
{
    uint8_t VAR6[VAR7];
    uint32_t VAR8;
    ssize_t VAR9;
    VAR9 = FUN2(VAR3, VAR6, sizeof(VAR6));
    if (VAR9 < 0)
    {
        return VAR9;
    }
    if (VAR9 != sizeof(VAR6))
    {
        FUN3("");
        return -VAR10;
    }
    VAR8 = FUN4(VAR6);
    VAR5->VAR11 = FUN5(VAR6 + 4);
    VAR5->VAR12 = FUN5(VAR6 + 6);
    VAR5->VAR13 = FUN6(VAR6 + 8);
    VAR5->VAR14 = FUN6(VAR6 + 16);
    VAR5->VAR15 = FUN4(VAR6 + 24);
    FUN7("" VAR16 "" VAR17 "" VAR17 "" VAR18 "" VAR19 "", VAR8, VAR5->VAR11, VAR5->VAR12, VAR5->VAR14, VAR5->VAR15);
    if (VAR8 != VAR20)
    {
        FUN3("" VAR16 "", VAR8);
        return -VAR10;
    }
    return 0;
}