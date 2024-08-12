VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    VAR6 **VAR7;
    VAR2 *VAR8;
    VAR1 *VAR9 = FUN2(sizeof(*VAR9));
    VAR9->VAR10 = FUN3(VAR3->VAR11);
    VAR9->VAR12 = VAR3->VAR13;
    VAR9->VAR14 = FUN3(VAR3->VAR14->VAR15);
    VAR9->VAR16 = VAR3->VAR16;
    VAR9->VAR17 = FUN4(VAR3);
    VAR9->VAR18 = FUN5(VAR19, 1);
    *VAR9->VAR18 = (VAR19){
        .VAR20 = FUN6(VAR3),
        .VAR21 = !!(VAR3->VAR22 & VAR23),
        .VAR24 = !!(VAR3->VAR22 & VAR25),
    };
    if (VAR3->VAR26[0])
    {
        VAR9->VAR27 = true;
        VAR9->VAR26 = FUN3(VAR3->VAR26);
    }
    if (VAR3->VAR28[0])
    {
        VAR9->VAR29 = true;
        VAR9->VAR28 = FUN3(VAR3->VAR28);
    }
    VAR9->VAR30 = FUN7(VAR3);
    VAR9->VAR31 = VAR3->VAR31;
    if (VAR3->VAR32)
    {
        ThrottleConfig VAR33;
        FUN8(VAR3, &VAR33);
        VAR9->VAR34 = VAR33.VAR35[VAR36].VAR37;
        VAR9->VAR38 = VAR33.VAR35[VAR39].VAR37;
        VAR9->VAR40 = VAR33.VAR35[VAR41].VAR37;
        VAR9->VAR42 = VAR33.VAR35[VAR43].VAR37;
        VAR9->VAR44 = VAR33.VAR35[VAR45].VAR37;
        VAR9->VAR46 = VAR33.VAR35[VAR47].VAR37;
        VAR9->VAR48 = VAR33.VAR35[VAR36].VAR49;
        VAR9->VAR50 = VAR33.VAR35[VAR36].VAR49;
        VAR9->VAR51 = VAR33.VAR35[VAR39].VAR49;
        VAR9->VAR52 = VAR33.VAR35[VAR39].VAR49;
        VAR9->VAR53 = VAR33.VAR35[VAR41].VAR49;
        VAR9->VAR54 = VAR33.VAR35[VAR41].VAR49;
        VAR9->VAR55 = VAR33.VAR35[VAR43].VAR49;
        VAR9->VAR56 = VAR33.VAR35[VAR43].VAR49;
        VAR9->VAR57 = VAR33.VAR35[VAR45].VAR49;
        VAR9->VAR58 = VAR33.VAR35[VAR45].VAR49;
        VAR9->VAR59 = VAR33.VAR35[VAR47].VAR49;
        VAR9->VAR60 = VAR33.VAR35[VAR47].VAR49;
        VAR9->VAR61 = VAR33.VAR62;
        VAR9->VAR63 = VAR33.VAR62;
        VAR9->VAR64 = true;
        VAR9->VAR65 = FUN3(FUN9(VAR3));
    }
    VAR9->VAR66 = FUN10(VAR3);
    VAR8 = VAR3;
    VAR7 = &VAR9->VAR67;
    while (1)
    {
        VAR4 *VAR68 = NULL;
        FUN11(VAR8, VAR7, &VAR68);
        if (VAR68)
        {
            FUN12(VAR5, VAR68);
            FUN13(VAR9);
            return NULL;
        }
        if (VAR8->VAR14 && VAR8->VAR69)
        {
            VAR8 = VAR8->VAR69->VAR3;
            (*VAR7)->VAR70 = true;
            VAR7 = &((*VAR7)->VAR71);
        }
        else
        {
            break;
        }
    }
    return VAR9;
}