static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9, VAR10;
    if (FUN2(VAR3, "", NULL))
    {
        kern_return_t VAR11;
        io_iterator_t VAR12;
        char VAR13[VAR14];
        int VAR8;
        VAR11 = FUN3(&VAR12);
        VAR11 = FUN4(VAR12, VAR13, sizeof(VAR13));
        if (VAR13[0] != '')
        {
            strcat(VAR13, "");
            VAR8 = open(VAR13, VAR15 | VAR16 | VAR17);
            if (VAR8 < 0)
            {
                VAR13[strlen(VAR13) - 1] = '';
            }
            else
            {
                close(VAR8);
            }
            VAR3 = VAR13;
        }
        if (VAR12)
            FUN5(VAR12);
    }
    VAR9 = VAR16;
    if ((VAR4 & VAR18) == VAR19)
    {
        VAR9 |= VAR19;
    }
    else
    {
        VAR9 |= VAR15;
        VAR2->VAR20 = 1;
    }
    VAR6->VAR21 = VAR22;
    if (FUN2(VAR3, "", NULL))
    {
        VAR9 |= VAR23;
        VAR6->VAR21 = VAR24;
    }
    else if (FUN2(VAR3, "", NULL))
    {
        VAR6->VAR21 = VAR25;
        VAR6->VAR26 = VAR9;
        VAR9 |= VAR23;
    }
    VAR8 = open(VAR3, VAR9, 0644);
    if (VAR8 < 0)
    {
        VAR10 = -VAR27;
        if (VAR10 == -VAR28)
            VAR10 = -VAR29;
        return VAR10;
    }
    VAR6->VAR8 = VAR8;
    if (VAR6->VAR21 == VAR25)
    {
        close(VAR6->VAR8);
        VAR6->VAR8 = -1;
        VAR6->VAR30 = 1;
    }
    return 0;
}