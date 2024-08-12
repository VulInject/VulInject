void FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR5 **VAR6)
{
    VAR3 *VAR7 = FUN2(sizeof(*VAR7));
    VAR1 *VAR8;
    VAR9 **VAR10;
    VAR5 *VAR11 = NULL;
    VAR7->VAR12 = FUN3(VAR2->VAR13);
    VAR7->VAR14 = FUN3("");
    VAR7->VAR15 = FUN4(VAR2);
    VAR7->VAR16 = FUN5(VAR2);
    if (FUN5(VAR2))
    {
        VAR7->VAR17 = true;
        VAR7->VAR18 = FUN6(VAR2);
    }
    if (FUN7(VAR2))
    {
        VAR7->VAR19 = true;
        VAR7->VAR20 = VAR2->VAR21;
    }
    if (VAR2->VAR22)
    {
        VAR7->VAR23 = true;
        VAR7->VAR24 = FUN2(sizeof(*VAR7->VAR24));
        VAR7->VAR24->VAR25 = FUN8(VAR2) * VAR26;
        VAR7->VAR24->VAR27 = ((VAR28)VAR26 << FUN9(VAR2->VAR22));
    }
    if (VAR2->VAR29)
    {
        VAR7->VAR30 = true;
        VAR7->VAR31 = FUN2(sizeof(*VAR7->VAR31));
        VAR7->VAR31->VAR32 = FUN3(VAR2->VAR33);
        VAR7->VAR31->VAR34 = VAR2->VAR35;
        VAR7->VAR31->VAR29 = FUN3(VAR2->VAR29->VAR36);
        VAR7->VAR31->VAR37 = VAR2->VAR37;
        VAR7->VAR31->VAR38 = FUN10(VAR2);
        if (VAR2->VAR39[0])
        {
            VAR7->VAR31->VAR40 = true;
            VAR7->VAR31->VAR39 = FUN3(VAR2->VAR39);
        }
        VAR7->VAR31->VAR41 = FUN11(VAR2);
        if (VAR2->VAR42)
        {
            ThrottleConfig VAR43;
            FUN12(&VAR2->VAR44, &VAR43);
            VAR7->VAR31->VAR45 = VAR43.VAR46[VAR47].VAR48;
            VAR7->VAR31->VAR49 = VAR43.VAR46[VAR50].VAR48;
            VAR7->VAR31->VAR51 = VAR43.VAR46[VAR52].VAR48;
            VAR7->VAR31->VAR53 = VAR43.VAR46[VAR54].VAR48;
            VAR7->VAR31->VAR55 = VAR43.VAR46[VAR56].VAR48;
            VAR7->VAR31->VAR57 = VAR43.VAR46[VAR58].VAR48;
        }
        VAR8 = VAR2;
        VAR10 = &VAR7->VAR31->VAR59;
        while (1)
        {
            FUN13(VAR8, VAR10, &VAR11);
            if (FUN14(&VAR11))
            {
                FUN15(VAR6, VAR11);
                goto VAR60;
            }
            if (VAR8->VAR29 && VAR8->VAR61)
            {
                VAR8 = VAR8->VAR61;
                (*VAR10)->VAR62 = true;
                VAR10 = &((*VAR10)->VAR63);
            }
            else
            {
                break;
            }
        }
    }
    *VAR4 = VAR7;
    return;
VAR60:
    FUN16(VAR7);