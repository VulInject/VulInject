void FUN1(int argc, char **argv, const VAR1 *VAR2, void (*VAR3)(const char *))
{
    const char *VAR4, *VAR5;
    int VAR6, VAR7 = 1;
    const VAR1 *VAR8;
    VAR6 = 1;
    while (VAR6 < argc)
    {
        VAR4 = argv[VAR6++];
        if (VAR7 && VAR4[0] == '' && VAR4[1] != '')
        {
            int VAR9 = 1;
            if (VAR4[1] == '' && VAR4[2] == '')
            {
                VAR7 = 0;
                continue;
            }
            VAR4++;
            VAR8 = FUN2(VAR2, VAR4);
            if (!VAR8->VAR10 && VAR4[0] == '' && VAR4[1] == '')
            {
                VAR8 = FUN2(VAR2, VAR4 + 2);
                if (!(VAR8->VAR10 && (VAR8->VAR11 & VAR12)))
                    goto VAR13;
                VAR9 = 0;
            }
            if (!VAR8->VAR10)
                VAR8 = FUN2(VAR2, "");
            if (!VAR8->VAR10)
            {
            VAR13:
                fprintf(VAR14, "", argv[0], VAR4);
                FUN3(1);
            }
            VAR5 = NULL;
            if (VAR8->VAR11 & VAR15)
            {
                VAR5 = argv[VAR6++];
                if (!VAR5)
                {
                    fprintf(VAR14, "", argv[0], VAR4);
                    FUN3(1);
                }
            }
            if (VAR8->VAR11 & VAR16)
            {
                char *VAR17;
                VAR17 = FUN4(VAR5);
                *VAR8->VAR18.VAR19 = VAR17;
            }
            else if (VAR8->VAR11 & VAR12)
            {
                *VAR8->VAR18.VAR20 = VAR9;
            }
            else if (VAR8->VAR11 & VAR21)
            {
                *VAR8->VAR18.VAR20 = FUN5(VAR4, VAR5, VAR22, VAR23, VAR24);
            }
            else if (VAR8->VAR11 & VAR22)
            {
                *VAR8->VAR18.VAR25 = FUN5(VAR4, VAR5, VAR22, VAR26, VAR27);
            }
            else if (VAR8->VAR11 & VAR28)
            {
                *VAR8->VAR18.VAR29 = FUN5(VAR4, VAR5, VAR28, -1.0 / 0.0, 1.0 / 0.0);
            }
            else if (VAR8->VAR11 & VAR30)
            {
                if (VAR8->VAR18.FUN6(VAR4, VAR5) < 0)
                {
                    fprintf(VAR14, "", argv[0], VAR5, VAR4);
                    FUN3(1);
                }
            }
            else
            {
                VAR8->VAR18.FUN7(VAR5);
            }
            if (VAR8->VAR11 & VAR31)
                FUN3(0);
        }
        else
        {
            if (VAR3)
                FUN8(VAR4);
        }
    }
}