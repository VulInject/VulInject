static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    if (FUN2(VAR3, "", NULL))
    {
        kern_return_t VAR8;
        io_iterator_t VAR9;
        char VAR10[VAR11];
        int VAR12;
        VAR8 = FUN3(&VAR9);
        VAR8 = FUN4(VAR9, VAR10, sizeof(VAR10));
        if (VAR10[0] != '')
        {
            strcat(VAR10, "");
            VAR12 = FUN5(VAR10, VAR13 | VAR14 | VAR15);
            if (VAR12 < 0)
            {
                VAR10[strlen(VAR10) - 1] = '';
            }
            else
            {
                FUN6(VAR12);
            }
            VAR3 = VAR10;
        }
        if (VAR9)
            FUN7(VAR9);
    }
    VAR6->VAR16 = VAR17;
    {
        char VAR18[VAR11], *VAR19;
        VAR19 = FUN8(VAR3, VAR18);
        if (VAR19 && FUN2(VAR19, "", NULL))
        {
            VAR2->VAR20 = 1;
        }
    }
    return FUN9(VAR2, VAR3, VAR4, 0);
}