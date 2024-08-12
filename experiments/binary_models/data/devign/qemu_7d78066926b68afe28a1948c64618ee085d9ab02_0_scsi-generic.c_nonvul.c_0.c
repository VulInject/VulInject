static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7)
{
    int VAR8;
    VAR4->VAR9.VAR10 = '';
    VAR4->VAR9.VAR11 = VAR5;
    VAR4->VAR9.VAR12 = VAR4->VAR13;
    VAR4->VAR9.VAR14 = VAR4->VAR15;
    VAR4->VAR9.VAR16 = VAR4->VAR17;
    VAR4->VAR9.VAR18 = VAR4->VAR19;
    VAR4->VAR9.VAR20 = sizeof(VAR4->VAR21->VAR22);
    VAR4->VAR9.VAR23 = VAR4->VAR21->VAR22;
    VAR4->VAR9.VAR24 = VAR25;
    VAR4->VAR9.VAR26 = VAR4;
    VAR4->VAR9.VAR27 |= VAR28;
    VAR8 = FUN2(VAR2, &VAR4->VAR9, sizeof(VAR4->VAR9));
    if (VAR8 < 0)
    {
        FUN3("", VAR29);
        return -1;
    }
    if (VAR7 == NULL)
    {
        int VAR8;
        VAR4->VAR30 = NULL;
        while ((VAR8 = FUN4(VAR2, &VAR4->VAR9, sizeof(VAR4->VAR9))) < 0 && VAR8 == -VAR31)
            ;
        if (VAR8 < 0)
        {
            FUN3("");
            return -1;
        }
        return 0;
    }
    VAR4->VAR30 = FUN5(VAR2, (VAR32 *)&VAR4->VAR9, sizeof(VAR4->VAR9), VAR7, VAR4);
    if (VAR4->VAR30 == NULL)
    {
        FUN3("");
        return -1;
    }
    return 0;
}