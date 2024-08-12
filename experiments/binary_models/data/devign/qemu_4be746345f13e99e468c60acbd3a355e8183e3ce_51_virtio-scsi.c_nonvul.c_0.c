static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2, VAR4->VAR4.VAR7.VAR8);
    VAR9 *VAR10, *VAR11;
    VAR12 *VAR13;
    int VAR14;
    int VAR15 = 0;
    if (VAR2->VAR16 && FUN3(VAR6->VAR17.VAR18) != VAR2->VAR19)
    {
        FUN4(VAR2->VAR19);
        FUN5(VAR6->VAR17.VAR18, VAR2->VAR19);
        FUN6(VAR2->VAR19);
    }
    VAR4->VAR20.VAR7.VAR21 = VAR22;
    FUN7(FUN8(VAR2), &VAR4->VAR4.VAR7.VAR23);
    switch (VAR4->VAR4.VAR7.VAR23)
    {
    case VAR24:
    case VAR25:
        if (!VAR6)
        {
            goto VAR26;
        }
        if (VAR6->VAR8 != FUN9(VAR4->VAR4.VAR7.VAR8))
        {
            goto VAR27;
        }
        FUN10(VAR10, &VAR6->VAR28, VAR11, VAR11)
        {
            VAR3 *VAR29 = VAR10->VAR30;
            if (VAR29 && VAR29->VAR4.VAR31.VAR32 == VAR4->VAR4.VAR7.VAR32)
            {
                break;
            }
        }
        if (VAR10)
        {
            assert(VAR10->VAR30);
            if (VAR4->VAR4.VAR7.VAR23 == VAR25)
            {
                VAR4->VAR20.VAR7.VAR21 = VAR33;
            }
            else
            {
                VAR34 *VAR35;
                VAR4->VAR36 = 1;
                VAR35 = FUN11(VAR34);
                VAR35->VAR37 = VAR4;
                VAR35->VAR35.VAR38 = VAR39;
                FUN12(VAR10, &VAR35->VAR35);
                VAR15 = -VAR40;
            }
        }
        break;
    case VAR41:
        if (!VAR6)
        {
            goto VAR26;
        }
        if (VAR6->VAR8 != FUN9(VAR4->VAR4.VAR7.VAR8))
        {
            goto VAR27;
        }
        VAR2->VAR42++;
        FUN13(&VAR6->VAR43);
        VAR2->VAR42--;
        break;
    case VAR44:
    case VAR45:
    case VAR46:
        if (!VAR6)
        {
            goto VAR26;
        }
        if (VAR6->VAR8 != FUN9(VAR4->VAR4.VAR7.VAR8))
        {
            goto VAR27;
        }
        VAR4->VAR36 = 1;
        FUN10(VAR10, &VAR6->VAR28, VAR11, VAR11)
        {
            if (VAR10->VAR30)
            {
                if (VAR4->VAR4.VAR7.VAR23 == VAR46)
                {
                    VAR4->VAR20.VAR7.VAR21 = VAR33;
                    break;
                }
                else
                {
                    VAR34 *VAR35;
                    VAR4->VAR36++;
                    VAR35 = FUN11(VAR34);
                    VAR35->VAR35.VAR38 = VAR39;
                    VAR35->VAR37 = VAR4;
                    FUN12(VAR10, &VAR35->VAR35);
                }
            }
        }
        if (--VAR4->VAR36 > 0)
        {
            VAR15 = -VAR40;
        }
        break;
    case VAR47:
        VAR14 = VAR4->VAR4.VAR7.VAR8[1];
        VAR2->VAR42++;
        FUN14(VAR13, &VAR2->VAR48.VAR49.VAR50, VAR51)
        {
            VAR6 = FUN15(VAR5, VAR43, VAR13->VAR52);
            if (VAR6->VAR53 == 0 && VAR6->VAR54 == VAR14)
            {
                FUN13(&VAR6->VAR43);
            }
        }
        VAR2->VAR42--;
        break;
    case VAR55:
    default:
        VAR4->VAR20.VAR7.VAR21 = VAR56;
        break;
    }
    return VAR15;
VAR27:
    VAR4->VAR20.VAR7.VAR21 = VAR57;
    return VAR15;
VAR26:
    VAR4->VAR20.VAR7.VAR21 = VAR58;
    return VAR15;
}