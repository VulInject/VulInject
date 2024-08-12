void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    const int VAR5 = VAR4->VAR6 > 8;
    VAR2->VAR7 = VAR8;
    if (!VAR5)
    {
        switch (FUN2())
        {
        case 32:
            VAR2->VAR9 = VAR10;
            break;
        case 128:
            VAR2->VAR9 = VAR11;
            break;
        default:
            break;
        }
    }
    if (VAR12)
        FUN3(VAR2, VAR4);
    if (FUN4() & VAR13)
    {
        FUN5(VAR2, VAR4);
        FUN6(VAR2, VAR4);
        FUN7(VAR2, VAR4);
        VAR2->VAR14 = VAR15;
        if (VAR4->VAR6 <= 8 && (VAR4->VAR16 == VAR17 || VAR4->VAR16 == VAR18))
        {
            VAR2->VAR19 = VAR20;
        }
        if (VAR4->VAR6 <= 8)
        {
            if ((VAR4->VAR21 == VAR22) || (VAR4->VAR21 == VAR23))
            {
                VAR2->VAR24 = VAR25;
                VAR2->VAR26 = VAR27;
                VAR2->VAR28 = VAR29;
            }
        }
    }
}