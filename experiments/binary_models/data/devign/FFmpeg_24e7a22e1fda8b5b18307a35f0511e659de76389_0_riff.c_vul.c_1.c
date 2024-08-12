int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6;
    VAR6 = FUN2(VAR2);
    VAR4->VAR7 = VAR8;
    VAR4->VAR9 = FUN2(VAR2);
    VAR4->VAR10 = FUN3(VAR2);
    VAR4->VAR11 = FUN3(VAR2) * 8;
    VAR4->VAR12 = FUN2(VAR2);
    if (VAR5 == 14)
    {
        VAR4->VAR13 = 8;
    }
    else
        VAR4->VAR13 = FUN2(VAR2);
    if (VAR6 == 0xFFFE)
    {
        VAR4->VAR14 = 0;
    }
    else
    {
        VAR4->VAR14 = VAR6;
        VAR4->VAR15 = FUN4(VAR6, VAR4->VAR13);
    }
    if (VAR5 >= 18)
    {
        int VAR16 = FUN2(VAR2);
        VAR5 -= 18;
        VAR16 = FUN5(VAR5, VAR16);
        if (VAR16 >= 22 && VAR6 == 0xfffe)
        {
            ff_asf_guid VAR17;
            VAR4->VAR13 = FUN2(VAR2);
            VAR4->VAR18 = FUN3(VAR2);
            FUN6(VAR2, &VAR17);
            if (!memcmp(VAR17 + 4, (const VAR19[]){VAR20}, 12))
            {
                VAR4->VAR14 = FUN7(VAR17);
                VAR4->VAR15 = FUN4(VAR4->VAR14, VAR4->VAR13);
            }
            else
            {
                VAR4->VAR15 = FUN8(VAR21, VAR17);
                if (!VAR4->VAR15)
                    FUN9(VAR4, VAR22, "" VAR23 "", FUN10(VAR17));
            }
            VAR16 -= 22;
            VAR5 -= 22;
        }
        VAR4->VAR24 = VAR16;
        if (VAR16 > 0)
        {
            FUN11(VAR4->VAR25);
            VAR4->VAR25 = FUN12(VAR4->VAR24 + VAR26);
            if (!VAR4->VAR25)
                return FUN13(VAR27);
            FUN14(VAR2, VAR4->VAR25, VAR4->VAR24);
            VAR5 -= VAR16;
        }
        if (VAR5 > 0)
            FUN15(VAR2, VAR5);
    }
    if (VAR4->VAR15 == VAR28)
    {
        VAR4->VAR9 = 0;
        VAR4->VAR10 = 0;
    }
    if (VAR4->VAR15 == VAR29)
        VAR4->VAR13 = VAR4->VAR11 / VAR4->VAR10;
    return 0;
}