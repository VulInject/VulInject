static VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4)
{
    VAR5 *VAR6 = FUN2(VAR3);
    uint32_t VAR7 = 0;
    switch (VAR6->VAR8)
    {
    case VAR9:
        FUN3(1, "" VAR10 "" VAR11 "", VAR6->VAR12, (VAR13)VAR4);
        FUN4(VAR6, VAR6->VAR12, (VAR13)VAR4);
        VAR6->VAR12++;
        break;
    case VAR14:
        VAR7 = VAR6->VAR15[VAR6->VAR12];
        FUN3(1, "" VAR10 "" VAR11 "", VAR6->VAR12, (VAR13)VAR7);
        VAR6->VAR12 = (VAR6->VAR12 + 1) % VAR6->VAR16;
        break;
    case VAR17:
    case VAR18:
        VAR6->VAR19[VAR6->VAR20] = (VAR13)VAR4;
        VAR6->VAR20++;
        if (VAR6->VAR20 == VAR6->VAR21)
        {
            FUN5(VAR6);
        }
        break;
    case VAR22:
        VAR7 = VAR6->VAR19[VAR6->VAR23];
        VAR6->VAR23++;
        if (VAR6->VAR23 == VAR6->VAR20)
        {
            VAR6->VAR23 = 0;
            VAR6->VAR8 = VAR24;
        }
        break;
    default:
    case VAR24:
        FUN6(VAR6, (VAR13)VAR4);
        break;
    }
    return VAR7;
}