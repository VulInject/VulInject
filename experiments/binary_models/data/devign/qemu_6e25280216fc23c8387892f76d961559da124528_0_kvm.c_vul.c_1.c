static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, uint16_t VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    uint64_t VAR8;
    uint32_t VAR9;
    int VAR10 = 0;
    FUN2(FUN3(VAR2));
    if (VAR7->VAR11.VAR12 & VAR13)
    {
        FUN4(VAR2, VAR14);
        return 0;
    }
    VAR8 = VAR7->VAR15[VAR5 & 0xf];
    VAR9 = VAR7->VAR15[(VAR5 & 0xf0) >> 4];
    VAR10 = FUN5(VAR8, VAR9);
    if (VAR10 < 0)
    {
        FUN4(VAR2, -VAR10);
    }
    FUN6(VAR2, VAR10);
    return 0;
}