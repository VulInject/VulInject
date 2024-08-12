int FUN1(VAR1 *VAR2)
{
    FUN2(, VAR3)
    VAR4 = FUN3(VAR4);
    VAR3 *VAR5, *VAR6;
    uint8_t VAR7;
    unsigned int VAR8;
    int VAR9;
    VAR8 = FUN4(VAR2);
    if (VAR8 != VAR10)
        return -VAR11;
    VAR8 = FUN4(VAR2);
    if (VAR8 == VAR12)
    {
        fprintf(VAR13, "");
        return -VAR14;
    }
    if (VAR8 != VAR15)
        return -VAR14;
    while ((VAR7 = FUN5(VAR2)) != VAR16)
    {
        uint32_t VAR17, VAR18, VAR19;
        VAR20 *VAR21;
        char VAR22[257];
        int VAR23;
        switch (VAR7)
        {
        case VAR24:
        case VAR25:
            VAR19 = FUN4(VAR2);
            VAR23 = FUN5(VAR2);
            FUN6(VAR2, (VAR26 *)VAR22, VAR23);
            VAR22[VAR23] = 0;
            VAR17 = FUN4(VAR2);
            VAR18 = FUN4(VAR2);
            VAR21 = FUN7(VAR22, VAR17);
            if (VAR21 == NULL)
            {
                fprintf(VAR13, "", VAR22, VAR17);
                VAR9 = -VAR11;
                goto VAR27;
            }
            if (VAR18 > VAR21->VAR18)
            {
                fprintf(VAR13, "", VAR18, VAR22, VAR21->VAR18);
                VAR9 = -VAR11;
                goto VAR27;
            }
            VAR5 = FUN8(sizeof(*VAR5));
            VAR5->VAR21 = VAR21;
            VAR5->VAR19 = VAR19;
            VAR5->VAR18 = VAR18;
            FUN9(&VAR4, VAR5, VAR28);
            VAR9 = FUN10(VAR2, VAR5->VAR21, VAR5->VAR18);
            if (VAR9 < 0)
            {
                fprintf(VAR13, "", VAR17, VAR22);
                goto VAR27;
            }
            break;
        case VAR29:
        case VAR30:
            VAR19 = FUN4(VAR2);
            FUN11(VAR5, &VAR4, VAR28)
            {
                if (VAR5->VAR19 == VAR19)
                {
                    break;
                }
            }
            if (VAR5 == NULL)
            {
                fprintf(VAR13, "", VAR19);
                VAR9 = -VAR11;
                goto VAR27;
            }
            VAR9 = FUN10(VAR2, VAR5->VAR21, VAR5->VAR18);
            if (VAR9 < 0)
            {
                fprintf(VAR13, "", VAR19);
                goto VAR27;
            }
            break;
        default:
            fprintf(VAR13, "", VAR7);
            VAR9 = -VAR11;
            goto VAR27;
        }
    }
    VAR9 = 0;
VAR27:
    FUN12(VAR5, &VAR4, VAR28, VAR6)
    {
        FUN13(VAR5, VAR28);
        FUN14(VAR5);
    }
    if (FUN15(VAR2))
        VAR9 = -VAR31;
    return VAR9;
}