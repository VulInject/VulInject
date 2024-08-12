static inline void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    int VAR5 = FUN2(VAR4->VAR6);
    VAR2->VAR6 = VAR5;
    VAR2->VAR7 = 0;
    VAR2->VAR8 = VAR4->VAR8;
    if (VAR5 == VAR9 || VAR5 == VAR10 || VAR5 == VAR11 || VAR5 == VAR12 || VAR5 == VAR13)
    {
        VAR2->VAR14.VAR15.VAR16 = 0;
    }
    else if (VAR5 == VAR17)
    {
        VAR2->VAR14.VAR18.VAR19 = VAR4->VAR20;
        VAR2->VAR14.VAR18.VAR21 = VAR4->VAR22;
    }
    else if (VAR5 == VAR23)
    {
        VAR2->VAR14.VAR24.VAR25 = VAR4->VAR26;
        VAR2->VAR14.VAR24.VAR27 = VAR4->VAR28;
        VAR2->VAR14.VAR24.VAR29 = FUN3(VAR4->VAR30);
        VAR2->VAR14.VAR24.VAR31 = VAR4->VAR32;
        VAR2->VAR14.VAR24.VAR33 = VAR4->VAR34;
    }
    else if (VAR5 >= VAR35)
    {
        VAR2->VAR14.VAR36.VAR25 = VAR4->VAR26;
        VAR2->VAR14.VAR36.VAR27 = VAR4->VAR28;
        VAR2->VAR14.VAR36.VAR37.VAR38 = (VAR39)(unsigned long)VAR4->VAR40.VAR38;
    }
}