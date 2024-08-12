static int FUN1(VAR1 *VAR2, char *VAR3, uint32_t VAR4, char *VAR5, VAR6 *VAR7, int VAR8)
{
    int VAR9, VAR10;
    SheepdogVdiReq VAR11;
    VAR12 *VAR13 = (VAR12 *)&VAR11;
    unsigned int VAR14, VAR15 = 0;
    char VAR16[VAR17 + VAR18];
    VAR10 = FUN2(VAR2->VAR19, VAR2->VAR20);
    if (VAR10 < 0)
    {
        return VAR10;
    }
    memset(VAR16, 0, sizeof(VAR16));
    strncpy(VAR16, VAR3, VAR17);
    strncpy(VAR16 + VAR17, VAR5, VAR18);
    memset(&VAR11, 0, sizeof(VAR11));
    if (VAR8)
    {
        VAR11.VAR21 = VAR22;
    }
    else
    {
        VAR11.VAR21 = VAR23;
    }
    VAR14 = VAR17 + VAR18;
    VAR11.VAR24 = VAR25;
    VAR11.VAR26 = VAR14;
    VAR11.VAR4 = VAR4;
    VAR11.VAR27 = VAR28;
    VAR9 = FUN3(VAR10, (VAR29 *)&VAR11, VAR16, &VAR14, &VAR15);
    if (VAR9)
    {
        goto VAR30;
    }
    if (VAR13->VAR31 != VAR32)
    {
        FUN4("", FUN5(VAR13->VAR31), VAR3, VAR4, VAR5);
        if (VAR13->VAR31 == VAR33)
        {
            VAR9 = -VAR34;
        }
        else
        {
            VAR9 = -VAR35;
        }
        goto VAR30;
    }
    *VAR7 = VAR13->VAR36;
    VAR9 = 0;
VAR30:
    FUN6(VAR10);
    return VAR9;
}