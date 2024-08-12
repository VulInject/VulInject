static void FUN1(void *VAR1, struct VAR2 *VAR3)
{
    int VAR4, VAR5 = 0;
    int64_t VAR6, VAR7, VAR8 = 0;
    for (VAR4 = 0; VAR4 < VAR3->VAR9; VAR4++)
        VAR5 += VAR3->VAR10[VAR4].VAR11.VAR12 == '';
    if (VAR5 == VAR3->VAR9)
    {
        VAR6 = 0;
        if (VAR3->VAR13 != VAR14)
            FUN2(VAR1, VAR15, "");
    }
    else if (VAR5 == 0 && VAR3->VAR13 != VAR14 || VAR3->VAR16)
    {
        if (VAR3->VAR13 == VAR14)
            VAR3->VAR13 = VAR3->VAR10[0].VAR11.VAR17;
        VAR6 = VAR3->VAR13;
    }
    else
    {
        time_t VAR18;
        struct VAR19 *VAR19, VAR20;
        FUN2(VAR1, VAR15, ""
                                    "");
        FUN3(&VAR18);
        VAR19 = FUN4(&VAR18, &VAR20);
        VAR6 = VAR19 ? VAR19->VAR21 * 3600 + VAR19->VAR22 * 60 + VAR19->VAR23 : VAR18 % VAR24;
        FUN2(VAR1, VAR25, "", (int)(VAR6 / 3600), (int)(VAR6 / 60) % 60, (int)VAR6 % 60);
        VAR6 *= VAR26;
        for (VAR4 = 0; VAR4 < VAR3->VAR9; VAR4++)
        {
            if (VAR3->VAR10[VAR4].VAR11.VAR12 == '')
            {
                VAR3->VAR10[VAR4].VAR11.VAR17 += VAR6;
                VAR3->VAR10[VAR4].VAR11.VAR12 = '';
            }
        }
    }
    if (VAR3->VAR13 == VAR14)
        VAR3->VAR13 = (VAR3->VAR16 && VAR3->VAR10) ? VAR3->VAR10[0].VAR11.VAR17 : VAR6;
    VAR3->VAR27 = VAR3->VAR28 ? VAR3->VAR13 + VAR3->VAR28 : VAR14;
    VAR7 = VAR6;
    for (VAR4 = 0; VAR4 < VAR3->VAR9; VAR4++)
    {
        if (VAR3->VAR10[VAR4].VAR11.VAR17 + VAR8 < VAR7)
            VAR8 += VAR29;
        VAR7 = VAR3->VAR10[VAR4].VAR11.VAR17 += VAR8;
    }
}