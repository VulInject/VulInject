static int FUN1(void *VAR1, const VAR2 *VAR3, const char *VAR4, const char *VAR5)
{
    void *VAR6 = VAR3->VAR7 & (VAR8 | VAR9) ? (VAR10 *)VAR1 + VAR3->VAR11.VAR12 : VAR3->VAR11.VAR13;
    int *VAR14;
    if (VAR3->VAR7 & VAR9)
    {
        VAR15 **VAR16 = VAR6;
        char *VAR17 = strchr(VAR4, '');
        char *VAR18;
        VAR14 = (int *)(VAR16 + 1);
        *VAR16 = FUN2(*VAR16, sizeof(**VAR16), VAR14, *VAR14 + 1);
        VAR18 = FUN3(VAR17 ? VAR17 + 1 : "");
        if (!VAR18)
            return FUN4(VAR19);
        (*VAR16)[*VAR14 - 1].VAR20 = VAR18;
        VAR6 = &(*VAR16)[*VAR14 - 1].VAR11;
    }
    if (VAR3->VAR7 & VAR21)
    {
        char *VAR18;
        VAR18 = FUN3(VAR5);
        FUN5(VAR6);
        if (!VAR18)
            return FUN4(VAR19);
        *(char **)VAR6 = VAR18;
    }
    else if (VAR3->VAR7 & VAR22 || VAR3->VAR7 & VAR23)
    {
        *(int *)VAR6 = FUN6(VAR4, VAR5, VAR24, VAR25, VAR26);
    }
    else if (VAR3->VAR7 & VAR24)
    {
        *(VAR27 *)VAR6 = FUN6(VAR4, VAR5, VAR24, VAR28, VAR29);
    }
    else if (VAR3->VAR7 & VAR30)
    {
        *(VAR27 *)VAR6 = FUN7(VAR4, VAR5, 1);
    }
    else if (VAR3->VAR7 & VAR31)
    {
        *(float *)VAR6 = FUN6(VAR4, VAR5, VAR31, -VAR32, VAR32);
    }
    else if (VAR3->VAR7 & VAR33)
    {
        *(double *)VAR6 = FUN6(VAR4, VAR5, VAR33, -VAR32, VAR32);
    }
    else if (VAR3->VAR11.VAR34)
    {
        int VAR35 = VAR3->VAR11.FUN8(VAR1, VAR4, VAR5);
        if (VAR35 < 0)
        {
            FUN9(NULL, VAR36, "", VAR5, VAR4);
            return VAR35;
        }
    }
    if (VAR3->VAR7 & VAR37)
        FUN10(0);
    return 0;
}