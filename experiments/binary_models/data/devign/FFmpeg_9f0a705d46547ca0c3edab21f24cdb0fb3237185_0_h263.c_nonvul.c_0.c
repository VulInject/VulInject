static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    char VAR5[256];
    int VAR6;
    int VAR7;
    int VAR8 = 0, VAR9 = 0, VAR10 = 0, VAR11 = 0;
    char VAR12;
    for (VAR6 = 0; VAR6 < 255 && FUN2(VAR4) < VAR4->VAR13; VAR6++)
    {
        if (FUN3(VAR4, 23) == 0)
            break;
        VAR5[VAR6] = FUN4(VAR4, 8);
    }
    VAR5[VAR6] = 0;
    VAR7 = sscanf(VAR5, "", &VAR8, &VAR9, &VAR12);
    if (VAR7 < 2)
        VAR7 = sscanf(VAR5, "", &VAR8, &VAR9, &VAR12);
    if (VAR7 >= 2)
    {
        VAR2->VAR14 = VAR8;
        VAR2->VAR15 = VAR9;
        VAR2->VAR16 = VAR7 == 3 && VAR12 == '';
        if (VAR2->VAR16 && !VAR2->VAR17)
        {
            FUN5(VAR2->VAR18, VAR19, "");
            VAR2->VAR17 = 1;
        }
    }
    VAR7 = sscanf(VAR5, "", &VAR9) + 3;
    if (VAR7 != 4)
        VAR7 = sscanf(VAR5, "", &VAR8, &VAR10, &VAR11, &VAR9);
    if (VAR7 != 4)
    {
        VAR7 = sscanf(VAR5, "", &VAR8, &VAR10, &VAR11) + 1;
        if (VAR7 > 1)
            VAR9 = (VAR8 << 16) + (VAR10 << 8) + VAR11;
    }
    if (VAR7 != 4)
    {
        if (strcmp(VAR5, "") == 0)
        {
            VAR2->VAR20 = 4600;
        }
    }
    if (VAR7 == 4)
    {
        VAR2->VAR20 = VAR9;
    }
    VAR7 = sscanf(VAR5, "", &VAR9);
    if (VAR7 == 1)
    {
        VAR2->VAR21 = VAR9;
    }
    return 0;
}