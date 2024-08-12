int FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    uint64_t VAR6;
    int VAR7;
    IOIntCode VAR8;
    hwaddr VAR9;
    int VAR10;
    uint8_t VAR11;
    FUN2("");
    VAR6 = FUN3(VAR5, VAR3, &VAR11);
    if (VAR6 & 3)
    {
        FUN4(VAR5, VAR12, 4);
        return -VAR13;
    }
    VAR7 = VAR6 ? 0 : 1;
    VAR9 = VAR7 ? 8 : 12;
    VAR10 = FUN5(&VAR8, VAR7);
    if (VAR10 == 1)
    {
        FUN6(VAR2, VAR7 ? 184 : VAR6, VAR11, &VAR8, VAR9);
    }
    return VAR10;
}