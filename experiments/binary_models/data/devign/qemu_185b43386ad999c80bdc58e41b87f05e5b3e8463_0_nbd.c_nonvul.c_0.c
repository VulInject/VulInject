static VAR1 FUN1(int VAR2, struct VAR3 *VAR4)
{
    uint8_t VAR5[4 + 4 + 8 + 8 + 4];
    uint32_t VAR6;
    ssize_t VAR7;
    VAR7 = FUN2(VAR2, VAR5, sizeof(VAR5));
    if (VAR7 < 0)
    {
        return VAR7;
    }
    if (VAR7 != sizeof(VAR5))
    {
        FUN3("");
        return -VAR8;
    }
    VAR6 = FUN4((VAR9 *)VAR5);
    VAR4->VAR10 = FUN4((VAR9 *)(VAR5 + 4));
    VAR4->VAR11 = FUN5((VAR12 *)(VAR5 + 8));
    VAR4->VAR13 = FUN5((VAR12 *)(VAR5 + 16));
    VAR4->VAR14 = FUN4((VAR9 *)(VAR5 + 24));
    FUN6(""
          "" VAR15 "",
          VAR6, VAR4->VAR10, VAR4->VAR13, VAR4->VAR14);
    if (VAR6 != VAR16)
    {
        FUN3("", VAR6);
        return -VAR8;
    }
    return 0;
}