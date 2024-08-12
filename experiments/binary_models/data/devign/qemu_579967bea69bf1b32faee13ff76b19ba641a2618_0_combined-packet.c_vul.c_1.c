void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, *VAR5, *VAR6, *VAR7 = NULL, *VAR8 = NULL;
    VAR9 *VAR10 = VAR2->VAR11->VAR10;
    int VAR12;
    assert(VAR2->VAR13);
    assert(VAR2->VAR14 == VAR15);
    FUN2(VAR4, &VAR2->VAR16, VAR16, VAR6)
    {
        if (VAR2->VAR17)
        {
            VAR4->VAR18 = VAR19;
            VAR10->VAR20->FUN3(VAR10, VAR4);
            continue;
        }
        if (VAR4->VAR21 == VAR22)
        {
            VAR7 = VAR4;
            continue;
        }
        FUN4(VAR4, VAR23);
        if (VAR7 && VAR7->VAR24)
        {
            break;
        }
        if (VAR8)
        {
            if (VAR8->VAR25 == NULL)
            {
                VAR26 *VAR25 = FUN5(VAR26, 1);
                VAR25->VAR8 = VAR8;
                FUN6(&VAR25->VAR27);
                FUN7(&VAR25->VAR28, 2);
                FUN8(VAR25, VAR8);
            }
            FUN8(VAR8->VAR25, VAR4);
        }
        else
        {
            VAR8 = VAR4;
        }
        if ((VAR4->VAR28.VAR29 % VAR2->VAR30) != 0 || !VAR4->VAR24 || VAR6 == NULL)
        {
            VAR12 = FUN9(VAR2->VAR11, VAR8);
            assert(VAR12 == VAR31);
            if (VAR8->VAR25)
            {
                FUN10(VAR5, &VAR8->VAR25->VAR27, VAR32) { FUN11(VAR5, VAR22); }
            }
            else
            {
                FUN11(VAR8, VAR22);
            }
            VAR8 = NULL;
            VAR7 = VAR4;
        }
    }
}