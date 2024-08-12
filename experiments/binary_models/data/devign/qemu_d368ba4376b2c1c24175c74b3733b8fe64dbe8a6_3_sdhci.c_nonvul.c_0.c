static inline void FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    switch (VAR3)
    {
    case VAR4:
        FUN2(VAR2);
        break;
    case VAR5:
        VAR2->VAR6 &= ~VAR7;
        VAR2->VAR8 &= ~VAR9;
        break;
    case VAR10:
        VAR2->VAR11 = 0;
        VAR2->VAR6 &= ~(VAR12 | VAR13 | VAR14 | VAR15 | VAR16 | VAR17);
        VAR2->VAR18 &= ~(VAR19 | VAR20);
        VAR2->VAR21 = VAR22;
        VAR2->VAR8 &= ~(VAR23 | VAR24 | VAR25 | VAR26 | VAR27);
        break;
    }
}