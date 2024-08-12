static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7[0]->VAR8;
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12, VAR13;
    int VAR14;
    int VAR15;
    int VAR16;
    int VAR17;
    int VAR18;
    int VAR19;
    switch (VAR6->VAR8->VAR20)
    {
    case VAR21:
    case VAR22:
        if (VAR10->VAR23)
        {
            if (VAR6->VAR24)
            {
                VAR15 = FUN2(VAR6->VAR24 + 0);
                VAR16 = FUN2(VAR6->VAR24 + 4);
                VAR17 = FUN2(VAR6->VAR24 + 8);
                VAR18 = FUN2(VAR6->VAR24 + 12);
            }
            else
            {
                FUN3(VAR6, VAR25, "");
                return FUN4(VAR26);
            }
            VAR14 = VAR17 / VAR15;
            if (VAR4->VAR27)
                VAR19 = VAR15;
            else
                VAR19 = VAR10->VAR28;
            for (VAR12 = 0; VAR12 < VAR19; VAR12++)
            {
                if (VAR4->VAR27)
                {
                    FUN5(VAR2->VAR29, VAR4->VAR27 + VAR14 * VAR12, VAR14);
                }
                else
                {
                    for (VAR13 = 0; VAR13 < VAR14; VAR13++)
                        FUN6(VAR2->VAR29, 0);
                }
                if (VAR10->VAR30.VAR27)
                {
                    FUN5(VAR2->VAR29, VAR10->VAR30.VAR27 + VAR17 + VAR18 * VAR12, VAR18);
                }
                else
                {
                    for (VAR13 = 0; VAR13 < VAR18; VAR13++)
                        FUN6(VAR2->VAR29, 0);
                }
            }
            if (VAR4->VAR27)
            {
                FUN7(&VAR10->VAR30, VAR4->VAR31);
                memcpy(VAR10->VAR30.VAR27, VAR4->VAR27, VAR4->VAR31);
            }
            VAR10->VAR28 = VAR16;
            break;
        }
    default:
        if (VAR4)
            FUN5(VAR2->VAR29, VAR4->VAR27, VAR4->VAR31);
        break;
    }
    FUN8(VAR2->VAR29);
    return 0;
}