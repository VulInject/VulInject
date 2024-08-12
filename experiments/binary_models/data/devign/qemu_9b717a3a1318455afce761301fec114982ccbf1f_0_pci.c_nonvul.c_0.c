static VAR1 *FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, int VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    VAR11 *VAR12 = VAR10->VAR12;
    VAR13 *VAR14 = VAR10->VAR14;
    VAR7 *VAR15 = NULL;
    VAR16 *VAR17 = FUN3(VAR2);
    VAR2->VAR4 = VAR4;
    if (FUN4(VAR4) && VAR4->VAR18 && !VAR10->VAR19)
    {
        FUN5(VAR8, "", VAR4->VAR18->VAR5);
        return NULL;
    }
    if (VAR6 < 0)
    {
        for (VAR6 = VAR4->VAR20; VAR6 < FUN6(VAR4->VAR21); VAR6 += VAR22)
        {
            if (FUN7(VAR4, VAR6))
            {
                goto VAR23;
            }
        }
        FUN5(VAR8, "", VAR5);
        return NULL;
    VAR23:;
    }
    else if (!FUN7(VAR4, VAR6))
    {
        FUN5(VAR8, ""
                         "",
                   FUN8(VAR6), FUN9(VAR6), VAR5, VAR4->VAR21[VAR6]->VAR5);
        return NULL;
    }
    else if (VAR17->VAR24 && FUN10(VAR2))
    {
        FUN5(VAR8, ""
                         "",
                   FUN8(FUN10(VAR2)->VAR6), FUN10(VAR2)->VAR5, VAR5);
        return NULL;
    }
    VAR2->VAR6 = VAR6;
    VAR2->VAR25 = FUN11(VAR2);
    FUN12(&VAR2->VAR26, FUN13(VAR2), "", VAR27);
    FUN14(&VAR2->VAR28, &VAR2->VAR26, VAR2->VAR5);
    if (VAR29)
    {
        FUN15(VAR2);
    }
    FUN16(VAR2->VAR5, sizeof(VAR2->VAR5), VAR5);
    VAR2->VAR30 = 0;
    FUN17(VAR2);
    FUN18(VAR2->VAR31, VAR10->VAR32);
    FUN19(VAR2->VAR31, VAR10->VAR33);
    FUN20(VAR2->VAR31, VAR10->VAR34);
    FUN21(VAR2->VAR31, VAR10->VAR35);
    if (!VAR10->VAR19)
    {
        if (VAR10->VAR36 || VAR10->VAR37)
        {
            FUN22(VAR2->VAR31 + VAR38, VAR10->VAR36);
            FUN22(VAR2->VAR31 + VAR39, VAR10->VAR37);
        }
        else
        {
            FUN23(VAR2);
        }
    }
    else
    {
        assert(!VAR10->VAR36);
        assert(!VAR10->VAR37);
    }
    FUN24(VAR2);
    FUN25(VAR2);
    FUN26(VAR2);
    if (VAR10->VAR19)
    {
        FUN27(VAR2);
    }
    FUN28(VAR4, VAR2, &VAR15);
    if (VAR15)
    {
        FUN29(VAR8, VAR15);
        FUN30(VAR2);
        return NULL;
    }
    if (!VAR12)
        VAR12 = VAR40;
    if (!VAR14)
        VAR14 = VAR41;
    VAR2->VAR12 = VAR12;
    VAR2->VAR14 = VAR14;
    VAR4->VAR21[VAR6] = VAR2;
    VAR2->VAR42 = 2;
    return VAR2;
}