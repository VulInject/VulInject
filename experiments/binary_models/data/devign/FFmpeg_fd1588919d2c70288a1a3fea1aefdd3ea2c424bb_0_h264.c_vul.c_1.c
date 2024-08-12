void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR2->VAR5 = VAR6;
    VAR2->VAR7 = 1;
    FUN2(VAR2);
    VAR2->VAR8.VAR9 = -1;
    if (VAR2->VAR10)
    {
        VAR2->VAR10->VAR11 = 0;
        for (VAR4 = VAR3 = 0; VAR2->VAR12[VAR3]; VAR3++)
            if (VAR2->VAR12[VAR3] != VAR2->VAR10)
                VAR2->VAR12[VAR4++] = VAR2->VAR12[VAR3];
        VAR2->VAR12[VAR4] = NULL;
    }
    FUN3(VAR2, &VAR2->VAR13);
    VAR2->VAR14 = 0;
    FUN4(&VAR2->VAR15);
    VAR2->VAR16 = -1;
    VAR2->VAR17 = 0;
    VAR2->VAR18 = 0;
    VAR2->VAR19 = 1;
    for (VAR3 = 0; VAR3 < VAR2->VAR20; VAR3++)
        VAR2->VAR21[VAR3].VAR22 = 0;
}