static VAR1 *FUN1(void)
{
    VAR1 *VAR2 = NULL, *VAR3 = NULL;
    VAR4 *VAR5;
    FUN2(VAR5, &VAR6, VAR7)
    {
        VAR1 *VAR8;
        char VAR9[VAR10], VAR11[VAR12];
        struct VAR13 *VAR14;
        socklen_t VAR15;
        if (!(VAR5->VAR16->VAR17 & VAR18))
        {
            FUN3("");
            return NULL;
        }
        VAR8 = FUN4(sizeof(*VAR8));
        VAR8->VAR19 = FUN4(sizeof(*VAR8->VAR19));
        VAR8->VAR19->VAR20 = FUN4(sizeof(*VAR8->VAR19->VAR20));
        VAR14 = (struct VAR13 *)&VAR5->VAR16->VAR21;
        VAR15 = VAR5->VAR16->VAR22;
        getnameinfo(VAR14, VAR15, VAR9, sizeof(VAR9), VAR11, sizeof(VAR11), VAR23 | VAR24);
        VAR8->VAR19->VAR20->VAR9 = FUN5(VAR9);
        VAR8->VAR19->VAR20->VAR11 = FUN5(VAR11);
        VAR8->VAR19->VAR20->VAR25 = FUN6(VAR14->VAR26);
        VAR8->VAR19->VAR27 = VAR5->VAR16->VAR27;
        VAR8->VAR19->VAR28 = VAR5->VAR16->VAR29;
        VAR8->VAR19->VAR30 = VAR5->VAR16->VAR31;
        VAR8->VAR19->VAR32 = VAR5->VAR16->VAR17 & VAR33;
        if (!VAR2)
        {
            VAR3 = VAR2 = VAR8;
        }
        else
        {
            VAR2->VAR34 = VAR8;
            VAR2 = VAR8;
        }
    }
    return VAR3;
}