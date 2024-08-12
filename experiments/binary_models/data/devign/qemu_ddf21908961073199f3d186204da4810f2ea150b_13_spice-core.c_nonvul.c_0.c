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
        assert(VAR5->VAR16->VAR17 & VAR18);
        VAR8 = FUN3(sizeof(*VAR8));
        VAR8->VAR19 = FUN3(sizeof(*VAR8->VAR19));
        VAR14 = (struct VAR13 *)&VAR5->VAR16->VAR20;
        VAR15 = VAR5->VAR16->VAR21;
        getnameinfo(VAR14, VAR15, VAR9, sizeof(VAR9), VAR11, sizeof(VAR11), VAR22 | VAR23);
        VAR8->VAR19->VAR9 = FUN4(VAR9);
        VAR8->VAR19->VAR11 = FUN4(VAR11);
        VAR8->VAR19->VAR24 = FUN5(VAR14->VAR25);
        VAR8->VAR19->VAR26 = VAR5->VAR16->VAR26;
        VAR8->VAR19->VAR27 = VAR5->VAR16->VAR28;
        VAR8->VAR19->VAR29 = VAR5->VAR16->VAR30;
        VAR8->VAR19->VAR31 = VAR5->VAR16->VAR17 & VAR32;
        if (!VAR2)
        {
            VAR3 = VAR2 = VAR8;
        }
        else
        {
            VAR2->VAR33 = VAR8;
            VAR2 = VAR8;
        }
    }
    return VAR3;
}