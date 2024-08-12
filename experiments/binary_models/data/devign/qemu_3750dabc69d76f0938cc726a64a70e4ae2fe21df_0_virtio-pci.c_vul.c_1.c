static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR7 *VAR8 = FUN2(&VAR6->VAR9);
    switch (VAR2)
    {
    case VAR10:
        VAR6->VAR11 = VAR3;
        break;
    case VAR12:
        VAR6->VAR13 = VAR3;
        break;
    case VAR14:
        if (VAR6->VAR13 <= FUN3(VAR6->VAR15))
        {
            VAR6->VAR15[VAR6->VAR13] = VAR3;
            FUN4(VAR8, (((VAR16)VAR6->VAR15[1]) << 32) | VAR6->VAR15[0]);
        }
        break;
    case VAR17:
        FUN5(&VAR6->VAR18, VAR8->VAR19);
        if (FUN6(&VAR6->VAR18, VAR3) < 0)
        {
            VAR3 = VAR20;
        }
        VAR8->VAR19 = VAR3;
        break;
    case VAR21:
        if (!(VAR3 & VAR22))
        {
            FUN7(VAR6);
        }
        FUN8(VAR8, VAR3 & 0xFF);
        if (VAR3 & VAR22)
        {
            FUN9(VAR6);
        }
        if (VAR8->VAR23 == 0)
        {
            FUN10(VAR8);
            FUN11(&VAR6->VAR18);
        }
        break;
    case VAR24:
        if (VAR3 < VAR25)
        {
            VAR8->VAR26 = VAR3;
        }
        break;
    case VAR27:
        VAR6->VAR28[VAR8->VAR26].VAR29 = VAR3;
        break;
    case VAR30:
        FUN5(&VAR6->VAR18, FUN12(VAR8, VAR8->VAR26));
        if (FUN6(&VAR6->VAR18, VAR3) < 0)
        {
            VAR3 = VAR20;
        }
        FUN13(VAR8, VAR8->VAR26, VAR3);
        break;
    case VAR31:
        FUN14(VAR8, VAR8->VAR26, VAR6->VAR28[VAR8->VAR26].VAR29);
        FUN15(VAR8, VAR8->VAR26, ((VAR16)VAR6->VAR28[VAR8->VAR26].VAR32[1]) << 32 | VAR6->VAR28[VAR8->VAR26].VAR32[0], ((VAR16)VAR6->VAR28[VAR8->VAR26].VAR33[1]) << 32 | VAR6->VAR28[VAR8->VAR26].VAR33[0], ((VAR16)VAR6->VAR28[VAR8->VAR26].VAR34[1]) << 32 | VAR6->VAR28[VAR8->VAR26].VAR34[0]);
        break;
    case VAR35:
        VAR6->VAR28[VAR8->VAR26].VAR32[0] = VAR3;
        break;
    case VAR36:
        VAR6->VAR28[VAR8->VAR26].VAR32[1] = VAR3;
        break;
    case VAR37:
        VAR6->VAR28[VAR8->VAR26].VAR33[0] = VAR3;
        break;
    case VAR38:
        VAR6->VAR28[VAR8->VAR26].VAR33[1] = VAR3;
        break;
    case VAR39:
        VAR6->VAR28[VAR8->VAR26].VAR34[0] = VAR3;
        break;
    case VAR40:
        VAR6->VAR28[VAR8->VAR26].VAR34[1] = VAR3;
        break;
    default:
        break;
    }
}