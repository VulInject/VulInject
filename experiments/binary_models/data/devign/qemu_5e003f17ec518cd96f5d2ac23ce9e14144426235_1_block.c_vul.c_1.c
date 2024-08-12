static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    int64_t VAR7;
    BdrvNextIterator VAR8;
    int VAR9, VAR10 = 0;
    struct
    {
        VAR5 *VAR6;
        VAR3 *VAR4;
    } * VAR11;
    VAR12 *VAR13 = NULL;
    int VAR14;
    VAR15.VAR16 = 0;
    VAR15.VAR17 = 0;
    VAR15.VAR18 = 0;
    VAR15.VAR19 = 0;
    VAR15.VAR20 = -1;
    VAR15.VAR21 = 0;
    VAR15.VAR22 = FUN2();
    for (VAR4 = FUN3(&VAR8); VAR4; VAR4 = FUN4(&VAR8))
    {
        VAR10++;
    }
    VAR11 = FUN5(VAR10 * sizeof(*VAR11));
    for (VAR9 = 0, VAR4 = FUN3(&VAR8); VAR4; VAR4 = FUN4(&VAR8), VAR9++)
    {
        if (FUN6(VAR4))
        {
            continue;
        }
        VAR7 = FUN7(VAR4);
        if (VAR7 <= 0)
        {
            VAR14 = VAR7;
            goto VAR23;
        }
        VAR6 = FUN8(VAR5, 1);
        VAR6->VAR24 = FUN9(VAR25, VAR26);
        VAR6->VAR27 = FUN10(FUN11(VAR4));
        VAR6->VAR21 = 0;
        VAR6->VAR28 = VAR7;
        VAR6->VAR29 = 0;
        VAR6->VAR30 = FUN12();
        assert(VAR9 < VAR10);
        VAR11[VAR9].VAR6 = VAR6;
        VAR11[VAR9].VAR4 = VAR4;
        VAR15.VAR19 += VAR7;
        if (VAR6->VAR30)
        {
            FUN13("", FUN11(VAR4));
        }
        else
        {
            FUN13("", FUN11(VAR4));
        }
        FUN14(&VAR15.VAR31, VAR6, VAR32);
    }
    for (VAR9 = 0; VAR9 < VAR10; VAR9++)
    {
        VAR5 *VAR6 = VAR11[VAR9].VAR6;
        VAR3 *VAR4 = VAR11[VAR9].VAR4;
        if (VAR6)
        {
            VAR14 = FUN15(VAR6->VAR24, VAR4, &VAR13);
            if (VAR14 < 0)
            {
                FUN16(VAR13);
                goto VAR23;
            }
            FUN17(VAR6);
            FUN18(&VAR6->VAR33, "");
            FUN19(VAR4, VAR6->VAR33);
        }
    }
    VAR14 = 0;
VAR23:
    FUN20(VAR11);
    return VAR14;