static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    uint8_t VAR6[VAR7];
    uint32_t VAR8;
    ssize_t VAR9;
    VAR9 = FUN2(VAR3, VAR6, sizeof(VAR6), NULL);
    if (VAR9 < 0)
    {
        return VAR9;
    }
    VAR8 = FUN3(VAR6);
    VAR5->VAR10 = FUN4(VAR6 + 4);
    VAR5->VAR11 = FUN4(VAR6 + 6);
    VAR5->VAR12 = FUN5(VAR6 + 8);
    VAR5->VAR13 = FUN5(VAR6 + 16);
    VAR5->VAR14 = FUN3(VAR6 + 24);
    FUN6("" VAR15 "" VAR16 "" VAR16 "" VAR17 "" VAR18 "", VAR8, VAR5->VAR10, VAR5->VAR11, VAR5->VAR13, VAR5->VAR14);
    if (VAR8 != VAR19)
    {
        FUN7("" VAR15 "", VAR8);
        return -VAR20;
    }
    return 0;
}