VAR1 *FUN1(VAR2 *VAR3, uint32_t VAR4, uint32_t VAR5, VAR6 *VAR7, void *VAR8)
{
    VAR9 *VAR10 = FUN2(VAR9, VAR11, VAR3->VAR12.VAR13);
    VAR1 *VAR14;
    SCSICommand VAR15;
    if (FUN3(&VAR15, VAR3, VAR7) != 0)
    {
        FUN4(VAR3->VAR16, VAR5, VAR4, VAR7[0]);
        VAR14 = FUN5(&VAR17, VAR3, VAR4, VAR5, VAR8);
    }
    else
    {
        FUN6(VAR3->VAR16, VAR5, VAR4, VAR7[0], VAR15.VAR18, VAR15.VAR19);
        if (VAR14->VAR15.VAR20 != -1)
        {
            FUN7(VAR3->VAR16, VAR5, VAR4, VAR7[0], VAR15.VAR20);
        }
        if ((VAR3->VAR21.VAR22 == VAR23 || VAR10->VAR21.VAR22 == VAR23) && (VAR7[0] != VAR24 && VAR7[0] != VAR25 && VAR7[0] != VAR26 && VAR7[0] != VAR27))
        {
            VAR14 = FUN5(&VAR28, VAR3, VAR4, VAR5, VAR8);
        }
        else if (VAR5 != VAR3->VAR5 || VAR7[0] == VAR25 || VAR7[0] == VAR29)
        {
            VAR14 = FUN5(&VAR30, VAR3, VAR4, VAR5, VAR8);
        }
        else
        {
            VAR14 = VAR3->VAR31->FUN8(VAR3, VAR4, VAR5, VAR8);
        }
    }
    VAR14->VAR15 = VAR15;
    switch (VAR7[0])
    {
    case VAR24:
        FUN9(VAR3->VAR16, VAR5, VAR4, VAR15.VAR7[1], VAR15.VAR7[2]);
        break;
    case VAR32:
        FUN10(VAR3->VAR16, VAR5, VAR4);
        break;
    case VAR25:
        FUN11(VAR3->VAR16, VAR5, VAR4);
        break;
    case VAR29:
        FUN12(VAR3->VAR16, VAR5, VAR4);
        break;
    default:
        break;
    }
    return VAR14;
}