static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    int VAR7, VAR8 = 0;
    uint8_t VAR9 = VAR4->VAR10->VAR11;
    struct VAR12 *VAR13;
    uint8_t VAR14[2];
    int VAR15, VAR16;
    switch (VAR4->VAR17)
    {
    case VAR18:
        if (VAR9 != 2)
            goto VAR19;
        for (VAR7 = 0; VAR7 < VAR4->VAR13.VAR20; VAR7++)
        {
            VAR13 = VAR4->VAR13.VAR13 + VAR7;
            FUN2(VAR6->VAR21, VAR13->VAR22, VAR13->VAR23);
        }
        break;
    case VAR24:
        if (VAR9 != 1)
            goto VAR19;
        VAR15 = VAR25 - VAR6->VAR26;
        VAR16 = VAR4->VAR13.VAR27;
        if (VAR16 <= 2)
        {
            VAR8 = VAR28;
            break;
        }
        VAR14[0] = FUN3(VAR6) | 1;
        if (VAR6->VAR29 && VAR6->VAR29 & VAR30)
        {
            VAR6->VAR29 &= ~VAR30;
            VAR14[1] = VAR30;
            FUN4(VAR4, VAR14, 2);
            VAR8 = 2;
            break;
        }
        else
        {
            VAR14[1] = 0;
        }
        VAR16 -= 2;
        if (VAR16 > VAR6->VAR31)
            VAR16 = VAR6->VAR31;
        if (!VAR16)
        {
            VAR8 = VAR28;
            break;
        }
        if (VAR15 > VAR16)
            VAR15 = VAR16;
        FUN4(VAR4, VAR14, 2);
        FUN4(VAR4, VAR6->VAR32 + VAR6->VAR26, VAR15);
        if (VAR16 > VAR15)
            FUN4(VAR4, VAR6->VAR32, VAR16 - VAR15);
        VAR6->VAR31 -= VAR16;
        VAR6->VAR26 = (VAR6->VAR26 + VAR16) % VAR25;
        VAR8 = VAR16 + 2;
        break;
    default:
        FUN5("");
    VAR19:
        VAR8 = VAR33;
        break;
    }
    return VAR8;
}