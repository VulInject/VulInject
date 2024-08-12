static void FUN1(void *VAR1, int VAR2)
{
    int VAR3;
    VAR4 *VAR5 = (VAR4 *)VAR1;
    VAR5->VAR6.VAR7 = NULL;
    if (VAR5->VAR6.VAR8)
    {
        goto VAR9;
    }
    if (VAR5->VAR10.VAR11 & VAR12)
    {
        VAR5->VAR6.VAR13 = VAR5->VAR10.VAR14;
    }
    if (VAR2 != 0)
    {
        switch (VAR2)
        {
        case -VAR15:
            VAR3 = VAR16;
            break;
        case -VAR17:
            VAR3 = VAR18;
            FUN2(&VAR5->VAR6, FUN3(VAR19));
            break;
        default:
            VAR3 = VAR18;
            FUN2(&VAR5->VAR6, FUN3(VAR20));
            break;
        }
    }
    else
    {
        if (VAR5->VAR10.VAR21 == VAR22 || VAR5->VAR10.VAR21 == VAR23 || VAR5->VAR10.VAR21 == VAR24 || (VAR5->VAR10.VAR11 & VAR25))
        {
            VAR3 = VAR26;
            FUN4("");
        }
        else if (VAR5->VAR10.VAR21)
        {
            VAR3 = VAR18;
            FUN2(&VAR5->VAR6, FUN3(VAR27));
        }
        else if (VAR5->VAR10.VAR3)
        {
            VAR3 = VAR5->VAR10.VAR3;
        }
        else if (VAR5->VAR10.VAR11 & VAR12)
        {
            VAR3 = VAR18;
        }
        else
        {
            VAR3 = VAR28;
        }
    }
    FUN5("", VAR5, VAR5->VAR6.VAR29, VAR3);
    FUN6(&VAR5->VAR6, VAR3);
VAR9:
    FUN7(&VAR5->VAR6);
}