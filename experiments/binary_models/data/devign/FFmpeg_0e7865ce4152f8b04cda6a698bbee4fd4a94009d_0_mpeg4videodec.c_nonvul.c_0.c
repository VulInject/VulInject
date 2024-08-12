static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR7;
    char VAR8[256];
    int VAR9;
    int VAR10;
    int VAR11 = 0, VAR12 = 0, VAR13 = 0, VAR14 = 0;
    char VAR15;
    for (VAR9 = 0; VAR9 < 255 && FUN2(VAR4) < VAR4->VAR16; VAR9++)
    {
        if (FUN3(VAR4, 23) == 0)
            break;
        VAR8[VAR9] = FUN4(VAR4, 8);
    }
    VAR8[VAR9] = 0;
    VAR10 = sscanf(VAR8, "", &VAR11, &VAR12, &VAR15);
    if (VAR10 < 2)
        VAR10 = sscanf(VAR8, "", &VAR11, &VAR12, &VAR15);
    if (VAR10 >= 2)
    {
        VAR2->VAR17 = VAR11;
        VAR2->VAR18 = VAR12;
        VAR6->VAR19 = VAR10 == 3 && VAR15 == '';
    }
    VAR10 = sscanf(VAR8, "", &VAR12) + 3;
    if (VAR10 != 4)
        VAR10 = sscanf(VAR8, "", &VAR11, &VAR13, &VAR14, &VAR12);
    if (VAR10 != 4)
    {
        VAR10 = sscanf(VAR8, "", &VAR11, &VAR13, &VAR14) + 1;
        if (VAR10 > 1)
        {
            if (VAR11 > 0xFFU || VAR13 > 0xFFU || VAR14 > 0xFFU)
            {
                FUN5(VAR6->VAR20, VAR21, ""
                                                 "",
                       VAR11, VAR13, VAR14);
            }
            VAR12 = ((VAR11 & 0xFF) << 16) + ((VAR13 & 0xFF) << 8) + (VAR14 & 0xFF);
        }
    }
    if (VAR10 != 4)
    {
        if (strcmp(VAR8, "") == 0)
            VAR2->VAR22 = 4600;
    }
    if (VAR10 == 4)
        VAR2->VAR22 = VAR12;
    VAR10 = sscanf(VAR8, "", &VAR12);
    if (VAR10 == 1)
        VAR2->VAR23 = VAR12;
    return 0;
}