static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned int VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR2 &= 0x3f;
    FUN2(VAR2, VAR3);
    switch (VAR2)
    {
    case VAR7:
        VAR6->VAR8 = (VAR3 <= VAR9) ? VAR3 : 0;
        VAR6->VAR10 = 0;
        break;
    case VAR11:
        if (VAR3 & VAR12)
        {
            VAR6->VAR13 &= ~VAR12;
        }
        else if (VAR3 & VAR14)
        {
            VAR6->VAR13 &= ~VAR14;
        }
        else if (VAR3 & VAR15)
        {
            FUN3(VAR6);
            VAR6->VAR13 |= VAR15;
        }
        else if (!VAR3)
        {
        }
        VAR6->VAR16 = !!VAR6->VAR13;
        FUN4(VAR6);
        if (FUN5(VAR6->VAR17->VAR18))
        {
            FUN6(FUN7(VAR6->VAR17));
        }
        break;
    case VAR19:
        VAR6->VAR20[VAR6->VAR10++] = VAR3;
        if ((VAR6->VAR10 >= VAR9) || (VAR6->VAR10 == VAR6->VAR8))
        {
            FUN8(VAR6->VAR10);
            FUN9(FUN7(VAR6->VAR17), VAR6->VAR20, VAR6->VAR10);
            VAR6->VAR8 = VAR6->VAR10 = 0;
            VAR6->VAR13 |= VAR12;
            VAR6->VAR16 = 1;
            FUN4(VAR6);
        }
        break;
    case VAR21:
    case VAR22:
    case VAR23:
    case VAR24:
    case VAR25:
    default:
        break;
    }
}