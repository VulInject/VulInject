static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    uint8_t VAR7 = VAR4->VAR8->VAR9;
    struct VAR10 *VAR11;
    uint8_t VAR12[2];
    int VAR13, VAR14, VAR15;
    switch (VAR4->VAR16)
    {
    case VAR17:
        if (VAR7 != 2)
            goto VAR18;
        for (VAR13 = 0; VAR13 < VAR4->VAR11.VAR19; VAR13++)
        {
            VAR11 = VAR4->VAR11.VAR11 + VAR13;
            FUN2(VAR6->VAR20, VAR11->VAR21, VAR11->VAR22);
        }
        VAR4->VAR23 = VAR4->VAR11.VAR24;
        break;
    case VAR25:
        if (VAR7 != 1)
            goto VAR18;
        VAR14 = VAR26 - VAR6->VAR27;
        VAR15 = VAR4->VAR11.VAR24;
        if (VAR15 <= 2)
        {
            VAR4->VAR28 = VAR29;
            break;
        }
        VAR12[0] = FUN3(VAR6) | 1;
        if (VAR6->VAR30 && VAR6->VAR30 & VAR31)
        {
            VAR6->VAR30 &= ~VAR31;
            VAR12[1] = VAR31;
            FUN4(VAR4, VAR12, 2);
            break;
        }
        else
        {
            VAR12[1] = 0;
        }
        VAR15 -= 2;
        if (VAR15 > VAR6->VAR32)
            VAR15 = VAR6->VAR32;
        if (!VAR15)
        {
            VAR4->VAR28 = VAR29;
            break;
        }
        if (VAR14 > VAR15)
            VAR14 = VAR15;
        FUN4(VAR4, VAR12, 2);
        FUN4(VAR4, VAR6->VAR33 + VAR6->VAR27, VAR14);
        if (VAR15 > VAR14)
            FUN4(VAR4, VAR6->VAR33, VAR15 - VAR14);
        VAR6->VAR32 -= VAR15;
        VAR6->VAR27 = (VAR6->VAR27 + VAR15) % VAR26;
        break;
    default:
        FUN5("");
    VAR18:
        VAR4->VAR28 = VAR34;
        break;
    }
}