static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6)
{
    int VAR7 = VAR2->VAR8->VAR9;
    int VAR10 = VAR2->VAR8->VAR11;
    if (FUN2(VAR2->VAR8))
    {
        FUN3(VAR4->VAR12, VAR13, "");
        return 0;
    }
    FUN4(VAR2, 33, 1, 90000);
    VAR2->VAR14 = VAR4;
    VAR2->VAR8->VAR9 = VAR15;
    VAR2->VAR8->VAR11 = VAR16;
    VAR2->VAR17 = VAR18;
    VAR4->VAR2 = VAR2;
    VAR4->VAR5 = VAR5;
    FUN3(VAR4->VAR12, VAR13, "", VAR2->VAR19, VAR4->VAR5, VAR4->VAR20, (char *)&VAR6);
    VAR2->VAR8->VAR21 = VAR4->VAR5;
    FUN5(VAR2, VAR4->VAR5, VAR22);
    if ((VAR6 == FUN6("") || VAR6 == FUN6("")) && VAR2->VAR8->VAR11 == VAR16)
    {
        FUN5(VAR2, VAR4->VAR5, VAR23);
        if (VAR4->VAR5 == 0x83)
        {
            VAR1 *VAR24;
            VAR3 *VAR25 = FUN7(sizeof(*VAR25));
            if (!VAR25)
                return FUN8(VAR26);
            memcpy(VAR25, VAR4, sizeof(*VAR25));
            VAR24 = FUN9(VAR4->VAR12, NULL);
            if (!VAR24)
            {
                FUN10(VAR25);
                return FUN8(VAR26);
            }
            VAR24->VAR27 = VAR4->VAR20;
            FUN4(VAR24, 33, 1, 90000);
            VAR24->VAR14 = VAR25;
            VAR24->VAR8->VAR9 = VAR28;
            VAR24->VAR8->VAR11 = VAR29;
            VAR24->VAR17 = VAR18;
            VAR25->VAR24 = VAR4->VAR24 = VAR24;
        }
    }
    if (VAR2->VAR8->VAR11 == VAR16)
        FUN5(VAR2, VAR4->VAR5, VAR30);
    if (VAR2->VAR8->VAR11 == VAR16)
    {
        VAR2->VAR8->VAR11 = VAR10;
        VAR2->VAR8->VAR9 = VAR7;
    }
    return 0;
}