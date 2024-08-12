VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    uint8_t VAR6[VAR7];
    uint32_t VAR8;
    ssize_t VAR9;
    VAR9 = FUN2(VAR3, VAR6, sizeof(VAR6));
    if (VAR9 <= 0)
    {
        return VAR9;
    }
    if (VAR9 != sizeof(VAR6))
    {
        FUN3("");
        return -VAR10;
    }
    VAR8 = FUN4(VAR6);
    VAR5->VAR11 = FUN4(VAR6 + 4);
    VAR5->VAR12 = FUN5(VAR6 + 8);
    VAR5->VAR11 = FUN6(VAR5->VAR11);
    if (VAR5->VAR11 == VAR13)
    {
        FUN3("");
        return -VAR10;
    }
    FUN7("" VAR14 "" VAR15 "" VAR16 "", VAR8, VAR5->VAR11, VAR5->VAR12);
    if (VAR8 != VAR17)
    {
        FUN3("" VAR14 "", VAR8);
        return -VAR10;
    }
    return sizeof(VAR6);
}