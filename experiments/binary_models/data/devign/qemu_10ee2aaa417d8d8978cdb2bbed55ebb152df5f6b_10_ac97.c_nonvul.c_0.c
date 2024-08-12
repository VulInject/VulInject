static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7 = NULL;
    uint32_t VAR8 = VAR2 - VAR5->VAR9[1];
    switch (VAR8)
    {
    case VAR10:
    case VAR11:
    case VAR12:
        VAR7 = &VAR5->VAR13[FUN2(VAR8)];
        VAR7->VAR14 = VAR3 & ~3;
        FUN3("", FUN2(VAR8), VAR3, VAR7->VAR14);
        break;
    case VAR15:
        if (VAR3 & VAR16)
            FUN4(VAR5);
        if (VAR3 & VAR17)
            FUN5(VAR5);
        if (!(VAR3 & (VAR16 | VAR17)))
            VAR5->VAR18 = VAR3 & VAR19;
        FUN3("", VAR3, VAR5->VAR18);
        break;
    case VAR20:
        VAR5->VAR21 &= ~(VAR3 & VAR22);
        VAR5->VAR21 |= (VAR3 & ~(VAR22 | VAR23)) & VAR24;
        FUN3("", VAR3, VAR5->VAR21);
        break;
    default:
        FUN3("", VAR2, VAR3);
        break;
    }
}