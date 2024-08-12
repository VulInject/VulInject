static VAR1 FUN1(int VAR2, struct VAR3 *VAR4)
{
    uint8_t VAR5[4 + 4 + 8];
    ssize_t VAR6;
    FUN2((VAR7 *)VAR5, VAR8);
    FUN2((VAR7 *)(VAR5 + 4), VAR4->VAR9);
    FUN3((VAR10 *)(VAR5 + 8), VAR4->VAR11);
    FUN4("");
    VAR6 = FUN5(VAR2, VAR5, sizeof(VAR5));
    if (VAR6 < 0)
    {
        return VAR6;
    }
    if (VAR6 != sizeof(VAR5))
    {
        FUN6("");
        return -VAR12;
    }
    return 0;
}