static int FUN1(VAR1 *VAR2)
{
    EHCIqtd VAR3;
    VAR4 *VAR5;
    int VAR6 = 0;
    FUN2(VAR2->VAR7, FUN3(VAR2->VAR8), (VAR9 *)&VAR3, sizeof(VAR10) >> 2);
    FUN4(VAR2, FUN3(VAR2->VAR8), &VAR3);
    VAR5 = FUN5(&VAR2->VAR11);
    if (VAR5 != NULL)
    {
        if (VAR5->VAR8 != VAR2->VAR8 || (!FUN6(VAR5->VAR3.VAR12) && (VAR5->VAR3.VAR12 != VAR3.VAR12)) || (!FUN6(VAR5->VAR3.VAR13) && (VAR5->VAR3.VAR13 != VAR3.VAR13)) || VAR5->VAR3.VAR14[0] != VAR3.VAR14[0])
        {
            FUN7(VAR2);
            FUN8(VAR2->VAR7, "");
            VAR5 = NULL;
        }
        else
        {
            VAR5->VAR3 = VAR3;
            FUN9(VAR2);
        }
    }
    if (!(VAR3.VAR15 & VAR16))
    {
        if (VAR5 != NULL)
        {
            FUN7(VAR2);
            VAR5 = NULL;
        }
        FUN10(VAR2->VAR7, VAR2->VAR17, VAR18);
        VAR6 = 1;
    }
    else if (VAR5 != NULL)
    {
        switch (VAR5->VAR17)
        {
        case VAR19:
            FUN10(VAR2->VAR7, VAR2->VAR17, VAR20);
            break;
        case VAR21:
            FUN10(VAR2->VAR7, VAR2->VAR17, VAR18);
            break;
        case VAR22:
            FUN10(VAR2->VAR7, VAR2->VAR17, VAR23);
            break;
        }
        VAR6 = 1;
    }
    else
    {
        VAR5 = FUN11(VAR2);
        VAR5->VAR8 = VAR2->VAR8;
        VAR5->VAR3 = VAR3;
        FUN10(VAR2->VAR7, VAR2->VAR17, VAR20);
        VAR6 = 1;
    }
    return VAR6;
}