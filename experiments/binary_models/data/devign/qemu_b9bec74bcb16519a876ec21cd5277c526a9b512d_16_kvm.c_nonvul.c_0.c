static int FUN1(VAR1 *VAR2)
{
    struct kvm_sregs VAR3;
    uint32_t VAR4;
    int VAR5, VAR6, VAR7;
    VAR7 = FUN2(VAR2, VAR8, &VAR3);
    if (VAR7 < 0)
    {
        return VAR7;
    }
    VAR2->VAR9 = -1;
    for (VAR6 = 0; VAR6 < FUN3(VAR3.VAR10); VAR6++)
    {
        if (VAR3.VAR10[VAR6])
        {
            VAR5 = FUN4(VAR3.VAR10[VAR6]);
            VAR2->VAR9 = VAR6 * 64 + VAR5;
            break;
        }
    }
    FUN5(&VAR2->VAR11[VAR12], &VAR3.VAR13);
    FUN5(&VAR2->VAR11[VAR14], &VAR3.VAR15);
    FUN5(&VAR2->VAR11[VAR16], &VAR3.VAR17);
    FUN5(&VAR2->VAR11[VAR18], &VAR3.VAR19);
    FUN5(&VAR2->VAR11[VAR20], &VAR3.VAR21);
    FUN5(&VAR2->VAR11[VAR22], &VAR3.VAR23);
    FUN5(&VAR2->VAR24, &VAR3.VAR24);
    FUN5(&VAR2->VAR25, &VAR3.VAR25);
    VAR2->VAR26.VAR27 = VAR3.VAR26.VAR27;
    VAR2->VAR26.VAR28 = VAR3.VAR26.VAR28;
    VAR2->VAR29.VAR27 = VAR3.VAR29.VAR27;
    VAR2->VAR29.VAR28 = VAR3.VAR29.VAR28;
    VAR2->VAR30[0] = VAR3.VAR31;
    VAR2->VAR30[2] = VAR3.VAR32;
    VAR2->VAR30[3] = VAR3.VAR33;
    VAR2->VAR30[4] = VAR3.VAR34;
    FUN6(VAR2->VAR35, VAR3.VAR36);
    VAR2->VAR37 = VAR3.VAR37;
    ~(VAR38 | VAR39 | VAR40 | VAR41 | VAR42 | VAR43 | VAR44 | VAR45 | VAR46 | VAR47 | VAR48 | VAR49 | VAR50 | VAR51) VAR4 = (VAR2->VAR11[VAR12].VAR52 >> VAR53) & VAR38;
    VAR4 |= (VAR2->VAR30[0] & VAR54) << (VAR55 - VAR56);
    VAR4 |= (VAR2->VAR30[0] << (VAR57 - VAR58)) & (VAR40 | VAR41 | VAR42);
    VAR4 |= (VAR2->VAR59 & (VAR43 | VAR44 | VAR45));
    VAR4 |= (VAR2->VAR30[4] & VAR60) << (VAR61 - VAR62);
    if (VAR2->VAR37 & VAR63)
    {
        VAR4 |= VAR47;
    }
    if ((VAR4 & VAR47) && (VAR2->VAR11[VAR12].VAR52 & VAR64))
    {
        VAR4 |= VAR48 | VAR49 | VAR50;
    }
    else
    {
        VAR4 |= (VAR2->VAR11[VAR12].VAR52 & VAR65) >> (VAR66 - VAR67);
        VAR4 |= (VAR2->VAR11[VAR22].VAR52 & VAR65) >> (VAR66 - VAR68);
        if (!(VAR2->VAR30[0] & VAR54) || (VAR2->VAR59 & VAR69) || !(VAR4 & VAR48))
        {
            VAR4 |= VAR51;
        }
        else
        {
            VAR4 |= ((VAR2->VAR11[VAR14].VAR28 | VAR2->VAR11[VAR16].VAR28 | VAR2->VAR11[VAR22].VAR28) != 0) << VAR70;
        }
    }
    VAR2->VAR4 = (VAR2->VAR4 & VAR71) | VAR4;
    return 0;
}