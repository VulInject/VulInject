VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    VAR8 **VAR9;
    VAR4 *VAR10;
    VAR1 *VAR11 = FUN2(sizeof(*VAR11));
    VAR11->VAR12 = FUN3(VAR5->VAR13);
    VAR11->VAR14 = VAR5->VAR15;
    VAR11->VAR16 = FUN3(VAR5->VAR16->VAR17);
    VAR11->VAR18 = VAR5->VAR18;
    VAR11->VAR19 = false;
    VAR11->VAR20 = FUN4(VAR21, 1);
    *VAR11->VAR20 = (VAR21){
        .VAR22 = VAR3 ? FUN5(VAR3) : true,
        .VAR23 = !!(VAR5->VAR24 & VAR25),
        .VAR26 = !!(VAR5->VAR24 & VAR27),
    };
    if (VAR5->VAR28[0])
    {
        VAR11->VAR29 = true;
        VAR11->VAR28 = FUN3(VAR5->VAR28);
    }
    if (VAR5->VAR30[0])
    {
        VAR11->VAR31 = true;
        VAR11->VAR30 = FUN3(VAR5->VAR30);
    }
    VAR11->VAR32 = VAR5->VAR32;
    if (VAR3 && FUN6(VAR3)->VAR33)
    {
        ThrottleConfig VAR34;
        FUN7(VAR3, &VAR34);
        VAR11->VAR35 = VAR34.VAR36[VAR37].VAR38;
        VAR11->VAR39 = VAR34.VAR36[VAR40].VAR38;
        VAR11->VAR41 = VAR34.VAR36[VAR42].VAR38;
        VAR11->VAR43 = VAR34.VAR36[VAR44].VAR38;
        VAR11->VAR45 = VAR34.VAR36[VAR46].VAR38;
        VAR11->VAR47 = VAR34.VAR36[VAR48].VAR38;
        VAR11->VAR49 = VAR34.VAR36[VAR37].VAR50;
        VAR11->VAR51 = VAR34.VAR36[VAR37].VAR50;
        VAR11->VAR52 = VAR34.VAR36[VAR40].VAR50;
        VAR11->VAR53 = VAR34.VAR36[VAR40].VAR50;
        VAR11->VAR54 = VAR34.VAR36[VAR42].VAR50;
        VAR11->VAR55 = VAR34.VAR36[VAR42].VAR50;
        VAR11->VAR56 = VAR34.VAR36[VAR44].VAR50;
        VAR11->VAR57 = VAR34.VAR36[VAR44].VAR50;
        VAR11->VAR58 = VAR34.VAR36[VAR46].VAR50;
        VAR11->VAR59 = VAR34.VAR36[VAR46].VAR50;
        VAR11->VAR60 = VAR34.VAR36[VAR48].VAR50;
        VAR11->VAR61 = VAR34.VAR36[VAR48].VAR50;
        VAR11->VAR62 = VAR11->VAR49;
        VAR11->VAR63 = VAR34.VAR36[VAR37].VAR64;
        VAR11->VAR65 = VAR11->VAR52;
        VAR11->VAR66 = VAR34.VAR36[VAR40].VAR64;
        VAR11->VAR67 = VAR11->VAR54;
        VAR11->VAR68 = VAR34.VAR36[VAR42].VAR64;
        VAR11->VAR69 = VAR11->VAR56;
        VAR11->VAR70 = VAR34.VAR36[VAR44].VAR64;
        VAR11->VAR71 = VAR11->VAR58;
        VAR11->VAR72 = VAR34.VAR36[VAR46].VAR64;
        VAR11->VAR73 = VAR11->VAR60;
        VAR11->VAR74 = VAR34.VAR36[VAR48].VAR64;
        VAR11->VAR75 = VAR34.VAR76;
        VAR11->VAR77 = VAR34.VAR76;
        VAR11->VAR78 = true;
        VAR11->VAR79 = FUN3(FUN8(VAR3));
    }
    VAR11->VAR80 = FUN9(VAR5);
    VAR10 = VAR5;
    VAR9 = &VAR11->VAR81;
    VAR11->VAR82 = 0;
    while (1)
    {
        VAR6 *VAR83 = NULL;
        FUN10(VAR10, VAR9, &VAR83);
        if (VAR83)
        {
            FUN11(VAR7, VAR83);
            FUN12(VAR11);
            return NULL;
        }
        if (VAR10->VAR16 && VAR10->VAR84)
        {
            VAR11->VAR82++;
            VAR10 = VAR10->VAR84->VAR5;
            (*VAR9)->VAR85 = true;
            VAR9 = &((*VAR9)->VAR86);
        }
        else
        {
            break;
        }
        while (VAR3 && VAR10->VAR16 && VAR10->VAR87)
        {
            VAR10 = FUN13(VAR10);
            assert(VAR10);
        }
    }
    return VAR11;
}