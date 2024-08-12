static VAR1 *FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    VAR9 *VAR10 = VAR8->VAR10;
    VAR11 *VAR12 = VAR8->VAR12;
    VAR13 *VAR14;
    if (VAR6 < 0)
    {
        for (VAR6 = VAR4->VAR15; VAR6 < FUN3(VAR4->VAR16); VAR6 += VAR17)
        {
            if (!VAR4->VAR16[VAR6])
                goto VAR18;
        }
        FUN4("", VAR5);
        return NULL;
    VAR18:;
    }
    else if (VAR4->VAR16[VAR6])
    {
        FUN4("", FUN5(VAR6), FUN6(VAR6), VAR5, VAR4->VAR16[VAR6]->VAR5);
        return NULL;
    }
    VAR2->VAR4 = VAR4;
    VAR14 = FUN7(VAR2);
    FUN8(&VAR2->VAR19, FUN9(VAR2), "", VAR14->VAR20, 0, FUN10(VAR14->VAR20));
    FUN11(&VAR2->VAR19, false);
    FUN12(&VAR2->VAR21, &VAR2->VAR19, VAR5);
    VAR2->VAR6 = VAR6;
    FUN13(VAR2->VAR5, sizeof(VAR2->VAR5), VAR5);
    VAR2->VAR22 = 0;
    FUN14(VAR2);
    FUN15(VAR2->VAR23, VAR8->VAR24);
    FUN16(VAR2->VAR23, VAR8->VAR25);
    FUN17(VAR2->VAR23, VAR8->VAR26);
    FUN18(VAR2->VAR23, VAR8->VAR27);
    if (!VAR8->VAR28)
    {
        if (VAR8->VAR29 || VAR8->VAR30)
        {
            FUN19(VAR2->VAR23 + VAR31, VAR8->VAR29);
            FUN19(VAR2->VAR23 + VAR32, VAR8->VAR30);
        }
        else
        {
            FUN20(VAR2);
        }
    }
    else
    {
        assert(!VAR8->VAR29);
        assert(!VAR8->VAR30);
    }
    FUN21(VAR2);
    FUN22(VAR2);
    FUN23(VAR2);
    if (VAR8->VAR28)
    {
        FUN24(VAR2);
    }
    if (FUN25(VAR4, VAR2))
    {
        FUN26(VAR2);
        return NULL;
    }
    if (!VAR10)
        VAR10 = VAR33;
    if (!VAR12)
        VAR12 = VAR34;
    VAR2->VAR10 = VAR10;
    VAR2->VAR12 = VAR12;
    VAR4->VAR16[VAR6] = VAR2;
    VAR2->VAR35 = 2;
    return VAR2;
}