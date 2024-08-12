static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    int VAR5 = ~0;
    int VAR6 = 0;
    VAR7 *VAR8 = VAR1;
    FUN2("" VAR9 "", VAR2, (unsigned)VAR3);
    VAR2 >>= 2;
    switch (VAR2)
    {
    case VAR10:
        VAR5 = ~(VAR11 | VAR12);
        if (VAR3 & VAR12)
        {
            VAR6 = 1;
        }
        break;
    case VAR13:
        VAR5 = VAR14;
        VAR8->VAR15[VAR13] &= ~(VAR5 & VAR3);
        goto VAR16;
    case VAR17:
        VAR5 = VAR14;
        VAR8->VAR15[VAR18] &= ~(VAR5 & VAR3);
        goto VAR16;
    case VAR19:
        VAR5 = VAR14;
        VAR8->VAR15[VAR18] |= VAR5 & VAR3;
        goto VAR16;
    case VAR20:
        VAR5 = 0x1;
        break;
    case VAR21:
        VAR5 = 0xFF;
        break;
    case VAR22:
    case VAR18:
    case VAR23:
        VAR5 = 0;
        break;
    case VAR24:
        FUN3(VAR8, (VAR25)VAR3, VAR8->VAR26);
        goto VAR16;
    case VAR27:
        FUN3(VAR8, (VAR25)VAR3, 1);
        goto VAR16;
    case VAR28:
        FUN3(VAR8, (VAR25)VAR3, 2);
        goto VAR16;
    case VAR29:
        FUN3(VAR8, (VAR25)VAR3, 3);
        goto VAR16;
    }
    VAR8->VAR15[VAR2] = (VAR8->VAR15[VAR2] & ~VAR5) | (VAR3 & VAR5);
VAR16:
    FUN4(VAR8);
    if ((VAR6 && VAR8->VAR15[VAR10] & VAR30) || (FUN5(&VAR8->VAR31) && VAR8->VAR15[VAR10] & VAR30))
    {
        FUN6(VAR8);
    }
    FUN4(VAR8);
    FUN7(VAR8);
}