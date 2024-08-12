static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2, VAR4->VAR4.VAR7.VAR8);
    VAR9 *VAR10, *VAR11;
    VAR12 *VAR13;
    int VAR14;
    VAR4->VAR15.VAR7.VAR16 = VAR17;
    FUN3(&VAR4->VAR4.VAR7.VAR18);
    switch (VAR4->VAR4.VAR7.VAR18)
    {
    case VAR19:
    case VAR20:
        if (!VAR6)
        {
            goto VAR21;
        }
        if (VAR6->VAR8 != FUN4(VAR4->VAR4.VAR7.VAR8))
        {
            goto VAR22;
        }
        FUN5(VAR10, &VAR6->VAR23, VAR11, VAR11)
        {
            VAR3 *VAR24 = VAR10->VAR25;
            if (VAR24 && VAR24->VAR4.VAR26.VAR27 == VAR4->VAR4.VAR7.VAR27)
            {
                break;
            }
        }
        if (VAR10)
        {
            assert(VAR10->VAR25);
            if (VAR4->VAR4.VAR7.VAR18 == VAR20)
            {
                VAR4->VAR15.VAR7.VAR16 = VAR28;
            }
            else
            {
                FUN6(VAR10);
            }
        }
        break;
    case VAR29:
        if (!VAR6)
        {
            goto VAR21;
        }
        if (VAR6->VAR8 != FUN4(VAR4->VAR4.VAR7.VAR8))
        {
            goto VAR22;
        }
        VAR2->VAR30++;
        FUN7(&VAR6->VAR31);
        VAR2->VAR30--;
        break;
    case VAR32:
    case VAR33:
    case VAR34:
        if (!VAR6)
        {
            goto VAR21;
        }
        if (VAR6->VAR8 != FUN4(VAR4->VAR4.VAR7.VAR8))
        {
            goto VAR22;
        }
        FUN5(VAR10, &VAR6->VAR23, VAR11, VAR11)
        {
            if (VAR10->VAR25)
            {
                if (VAR4->VAR4.VAR7.VAR18 == VAR34)
                {
                    VAR4->VAR15.VAR7.VAR16 = VAR28;
                    break;
                }
                else
                {
                    FUN6(VAR10);
                }
            }
        }
        break;
    case VAR35:
        VAR14 = VAR4->VAR4.VAR7.VAR8[1];
        VAR2->VAR30++;
        FUN8(VAR13, &VAR2->VAR36.VAR37.VAR38, VAR39)
        {
            VAR6 = FUN9(VAR5, VAR31, VAR13->VAR40);
            if (VAR6->VAR41 == 0 && VAR6->VAR42 == VAR14)
            {
                FUN7(&VAR6->VAR31);
            }
        }
        VAR2->VAR30--;
        break;
    case VAR43:
    default:
        VAR4->VAR15.VAR7.VAR16 = VAR44;
        break;
    }
    return;
VAR22:
    VAR4->VAR15.VAR7.VAR16 = VAR45;
    return;
VAR21:
    VAR4->VAR15.VAR7.VAR16 = VAR46;
}