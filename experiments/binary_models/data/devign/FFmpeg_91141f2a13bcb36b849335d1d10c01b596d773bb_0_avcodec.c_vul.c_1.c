int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR2->VAR5 = VAR4->VAR5;
    VAR2->VAR6 = FUN2(VAR4);
    VAR2->VAR7 = VAR4->VAR7;
    switch (VAR2->VAR8)
    {
    case VAR9:
        VAR2->VAR10->VAR11 = VAR4->VAR12;
        VAR2->VAR10->VAR13 = VAR4->VAR14;
        VAR2->VAR10->VAR15 = VAR4->VAR15;
        VAR2->VAR10->VAR16 = VAR4->VAR17;
        VAR2->VAR10->VAR18 = VAR4->VAR18;
        VAR2->VAR10->VAR19 = VAR4->VAR19;
        VAR2->VAR10->VAR20 = VAR4->VAR20;
        FUN3(&VAR2->VAR10->VAR21);
        VAR2->VAR10->VAR22 = 0;
        if (VAR4->VAR23)
        {
            int VAR24 = VAR4->VAR25 ? VAR4->VAR25 * ((VAR4->VAR14 + 15) / 16) : (VAR4->VAR12 + 15) / 16;
            VAR2->VAR10->VAR21 = FUN4(VAR24);
            if (!VAR2->VAR10->VAR21)
                return FUN5(VAR26);
            VAR2->VAR10->VAR22 = VAR4->VAR25;
            memcpy(VAR2->VAR10->VAR21, VAR4->VAR23, VAR24);
        }
        break;
    case VAR27:
        VAR2->VAR28->VAR29 = VAR4->VAR29;
        VAR2->VAR28->VAR30 = VAR4->VAR30;
        break;
    default:
        return FUN5(VAR31);
    }
    return 0;