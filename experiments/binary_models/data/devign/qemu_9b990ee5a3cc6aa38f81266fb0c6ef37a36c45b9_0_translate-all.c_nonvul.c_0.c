void FUN1(VAR1 *VAR2, uintptr_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8;
    uint32_t VAR9;
    FUN2();
    VAR8 = FUN3(VAR3);
    if (!VAR8)
    {
        FUN4(VAR2, "", (void *)VAR3);
    }
    VAR9 = VAR2->VAR10.VAR11.VAR12 + VAR8->VAR13;
    FUN5(VAR2, VAR8, VAR3);
    VAR9 = VAR9 - VAR2->VAR10.VAR11.VAR12;
    VAR9++;
    if ((VAR5->VAR14 & VAR15) != 0 && VAR9 > 1)
    {
        VAR5->VAR16.VAR17 -= (VAR5->VAR14 & VAR18 ? 2 : 4);
        VAR2->VAR10.VAR11.VAR12++;
        VAR5->VAR14 &= ~VAR15;
    }
    if ((VAR5->VAR19 & ((VAR20 | VAR21))) != 0 && VAR9 > 1)
    {
        VAR5->VAR22 -= 2;
        VAR2->VAR10.VAR11.VAR12++;
        VAR5->VAR19 &= ~(VAR20 | VAR21);
    }
    if (VAR9 > VAR23)
    {
        FUN4(VAR2, "");
    }
    VAR2->VAR24 = FUN6() | VAR25 | VAR9;
    if (VAR8->VAR26 & VAR27)
    {
        if (VAR8->VAR28)
        {
            FUN7(VAR8->VAR28, -1);
        }
        FUN8(VAR8);
    }
    FUN9(VAR2);
}