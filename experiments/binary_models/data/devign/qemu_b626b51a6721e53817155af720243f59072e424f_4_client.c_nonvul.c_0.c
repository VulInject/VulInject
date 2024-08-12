VAR1 FUN1(VAR2 *VAR3, struct VAR4 *VAR5)
{
    uint8_t VAR6[VAR7];
    ssize_t VAR8;
    FUN2(""
          "" VAR9 "" VAR10 "" VAR9 "" VAR11 "" VAR12 "",
          VAR5->VAR13, VAR5->VAR14, VAR5->VAR15, VAR5->VAR16, VAR5->VAR17);
    FUN3(VAR6, VAR18);
    FUN4(VAR6 + 4, VAR5->VAR16);
    FUN4(VAR6 + 6, VAR5->VAR17);
    FUN5(VAR6 + 8, VAR5->VAR15);
    FUN5(VAR6 + 16, VAR5->VAR13);
    FUN3(VAR6 + 24, VAR5->VAR14);
    VAR8 = FUN6(VAR3, VAR6, sizeof(VAR6));
    if (VAR8 < 0)
    {
        return VAR8;
    }
    if (VAR8 != sizeof(VAR6))
    {
        FUN7("");
        return -VAR19;
    }
    return 0;
}