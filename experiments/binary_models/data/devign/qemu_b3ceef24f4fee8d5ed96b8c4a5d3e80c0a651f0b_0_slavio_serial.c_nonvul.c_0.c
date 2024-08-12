static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    VAR6 *VAR7;
    uint32_t VAR8;
    uint32_t VAR9;
    int VAR10;
    VAR8 = (VAR3 & 3) >> 1;
    VAR10 = (VAR3 & VAR11) >> 2;
    VAR7 = &VAR5->VAR12[VAR10];
    switch (VAR8)
    {
    case 0:
        FUN2("", FUN3(VAR7), VAR7->VAR13, VAR7->VAR14[VAR7->VAR13]);
        VAR9 = VAR7->VAR14[VAR7->VAR13];
        VAR7->VAR13 = 0;
        return VAR9;
    case 1:
        VAR7->VAR14[0] &= ~1;
        FUN4(VAR7);
        if (VAR7->VAR15 == VAR16 || VAR7->VAR15 == VAR17)
            VAR9 = FUN5(VAR7);
        else
            VAR9 = VAR7->VAR18;
        FUN2("", FUN3(VAR7), VAR9);
        return VAR9;
    default:
        break;
    }
    return 0;
}