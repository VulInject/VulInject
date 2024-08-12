static VAR1 *FUN1(const VAR2 *VAR3, bool VAR4)
{
    VAR1 *VAR5;
    VAR5 = FUN2(sizeof(*VAR5));
    if (FUN3(VAR3)[0])
    {
        VAR5->VAR6 = true;
        VAR5->VAR7 = FUN4(FUN3(VAR3));
    }
    if (FUN5(VAR3)[0])
    {
        VAR5->VAR8 = true;
        VAR5->VAR9 = FUN4(FUN5(VAR3));
    }
    VAR5->VAR10 = FUN2(sizeof(*VAR5->VAR10));
    if (VAR3->VAR11)
    {
        VAR12 *VAR10 = FUN6(VAR3->VAR11);
        VAR5->VAR10->VAR13 = VAR10->VAR14[VAR15];
        VAR5->VAR10->VAR16 = VAR10->VAR14[VAR17];
        VAR5->VAR10->VAR18 = VAR10->VAR19[VAR15];
        VAR5->VAR10->VAR20 = VAR10->VAR19[VAR17];
        VAR5->VAR10->VAR21 = VAR10->VAR22[VAR15];
        VAR5->VAR10->VAR23 = VAR10->VAR22[VAR17];
        VAR5->VAR10->VAR24 = VAR10->VAR22[VAR25];
        VAR5->VAR10->VAR26 = VAR10->VAR27[VAR15];
        VAR5->VAR10->VAR28 = VAR10->VAR27[VAR17];
        VAR5->VAR10->VAR29 = VAR10->VAR27[VAR25];
        VAR5->VAR10->VAR30 = VAR10->VAR31[VAR15];
        VAR5->VAR10->VAR32 = VAR10->VAR31[VAR17];
        VAR5->VAR10->VAR33 = VAR10->VAR19[VAR25];
        VAR5->VAR10->VAR34 = VAR10->VAR35[VAR17];
        VAR5->VAR10->VAR36 = VAR10->VAR35[VAR15];
        VAR5->VAR10->VAR37 = VAR10->VAR35[VAR25];
        VAR5->VAR10->VAR38 = VAR10->VAR39 > 0;
        if (VAR5->VAR10->VAR38)
        {
            VAR5->VAR10->VAR40 = FUN7(VAR10);
        }
    }
    VAR5->VAR10->VAR41 = VAR3->VAR41;
    if (VAR3->VAR42)
    {
        VAR5->VAR43 = true;
        VAR5->VAR44 = FUN1(VAR3->VAR42->VAR3, VAR4);
    }
    if (VAR4 && VAR3->VAR45)
    {
        VAR5->VAR46 = true;
        VAR5->VAR45 = FUN1(VAR3->VAR45->VAR3, VAR4);
    }
    return VAR5;