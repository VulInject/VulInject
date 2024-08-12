static int FUN1(VAR1 *VAR2)
{
    static const uint8_t VAR3[] = {4, 12, 16, 24};
    static const uint8_t VAR4[] = {4, 8, 12, 16};
    VAR5 *VAR6 = &VAR2->VAR6;
    unsigned VAR7, VAR8;
    FUN2(VAR6);
    VAR7 = FUN3(VAR6);
    if (VAR7 > 4)
    {
        FUN4(VAR2->VAR9, VAR10, "");
        return -1;
    }
    if (VAR7 == 0)
    {
        VAR2->VAR11[0].VAR12 = FUN3(VAR6);
        VAR2->VAR11[0].VAR13 = FUN3(VAR6);
        VAR2->VAR11[0].VAR14 = FUN3(VAR6);
        VAR2->VAR11[0].VAR15 = FUN3(VAR6);
    }
    else
    {
        VAR2->VAR11[0].VAR12 = VAR3[VAR7 - 1];
        VAR2->VAR11[0].VAR13 = VAR3[VAR7 - 1];
        VAR2->VAR11[0].VAR14 = VAR4[VAR7 - 1];
        VAR2->VAR11[0].VAR15 = VAR4[VAR7 - 1];
    }
    if (VAR2->VAR11[0].VAR14 < VAR2->VAR11[0].VAR12 / 2 || VAR2->VAR11[0].VAR15 < VAR2->VAR11[0].VAR13 / 2)
    {
        FUN4(VAR2->VAR9, VAR10, "");
        return -1;
    }
    if (VAR2->VAR11[0].VAR14 > VAR2->VAR11[0].VAR12 || VAR2->VAR11[0].VAR15 > VAR2->VAR11[0].VAR13)
    {
        FUN4(VAR2->VAR9, VAR10, "");
        return -1;
    }
    if (FUN5(VAR2->VAR11[0].VAR12, VAR2->VAR11[0].VAR13) > VAR16)
    {
        FUN4(VAR2->VAR9, VAR10, "");
        return -1;
    }
    VAR2->VAR17 = FUN3(VAR6);
    if (VAR2->VAR17 > 3)
    {
        FUN4(VAR2->VAR9, VAR10, "");
        return -1;
    }
    VAR2->VAR18 = FUN6(VAR6);
    if (VAR2->VAR18)
    {
        memset(VAR2->VAR19, 0, sizeof(VAR2->VAR19));
        for (VAR8 = 0; VAR8 < VAR2->VAR20; VAR8++)
        {
            if (FUN6(VAR6))
            {
                VAR2->VAR19[VAR8].VAR21[0] = FUN7(VAR6);
                VAR2->VAR19[VAR8].VAR21[1] = FUN7(VAR6);
            }
            if (FUN6(VAR6))
            {
                VAR2->VAR19[VAR8].VAR22 = FUN3(VAR6);
                VAR2->VAR19[VAR8].VAR23[0][0] = FUN7(VAR6);
                VAR2->VAR19[VAR8].VAR23[0][1] = FUN7(VAR6);
                VAR2->VAR19[VAR8].VAR23[1][0] = FUN7(VAR6);
                VAR2->VAR19[VAR8].VAR23[1][1] = FUN7(VAR6);
            }
            else
            {
                VAR2->VAR19[VAR8].VAR23[0][0] = 1;
                VAR2->VAR19[VAR8].VAR23[1][1] = 1;
            }
            if (FUN6(VAR6))
            {
                VAR2->VAR19[VAR8].VAR24 = FUN3(VAR6);
                VAR2->VAR19[VAR8].VAR25[0] = FUN7(VAR6);
                VAR2->VAR19[VAR8].VAR25[1] = FUN7(VAR6);
            }
        }
    }
    if (FUN3(VAR6))
    {
        FUN4(VAR2->VAR9, VAR10, "");
        return -1;
    }
    VAR2->VAR26 = 1;
    VAR2->VAR27[0] = 1;
    VAR2->VAR27[1] = 1;
    if (FUN6(VAR6))
    {
        VAR2->VAR26 = FUN3(VAR6);
        VAR2->VAR27[0] = FUN7(VAR6);
        if (VAR2->VAR20 == 2)
            VAR2->VAR27[1] = FUN7(VAR6);
    }
    return 0;
}