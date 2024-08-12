VAR1 FUN1(int VAR2, struct VAR3 *VAR4)
{
    uint8_t VAR5[VAR6];
    uint32_t VAR7;
    ssize_t VAR8;
    VAR8 = FUN2(VAR2, VAR5, sizeof(VAR5));
    if (VAR8 < 0)
    {
        return VAR8;
    }
    if (VAR8 != sizeof(VAR5))
    {
        FUN3("");
        return -VAR9;
    }
    VAR7 = FUN4((VAR10 *)VAR5);
    VAR4->VAR11 = FUN4((VAR10 *)(VAR5 + 4));
    VAR4->VAR12 = FUN5((VAR13 *)(VAR5 + 8));
    FUN6(""
          "" VAR14 "",
          VAR7, VAR4->VAR11, VAR4->VAR12);
    if (VAR7 != VAR15)
    {
        FUN3("", VAR7);
        return -VAR9;
    }
    return 0;
}