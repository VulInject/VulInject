static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8 = 0;
    int VAR9;
    VAR10 = VAR6;
    FUN2(if (VAR11 == NULL)
         {
             VAR11 = fopen("", "");
             FUN3(VAR11, NULL);
         })
    VAR6->VAR2 = VAR2;
    VAR6->VAR12 = 16;
    VAR6->VAR13 = 0x10;
    VAR2->VAR14 = 1024;
    VAR2->VAR15 = 16;
    VAR2->VAR16 = 63;
    VAR6->VAR17 = 0xffffffff;
    VAR6->VAR18 = 0x40;
    VAR2->VAR19 = 1;
    VAR6->VAR20 = VAR6->VAR21 = NULL;
    VAR6->VAR22 = NULL;
    VAR6->VAR23 = NULL;
    VAR6->VAR24 = 1;
    if (!FUN4(VAR3, "", NULL))
        return -1;
    if (strstr(VAR3, ""))
    {
        VAR8 = 1;
        VAR6->VAR12 = 12;
        VAR6->VAR18 = 1;
        VAR6->VAR13 = 2;
        VAR2->VAR14 = 80;
        VAR2->VAR15 = 2;
        VAR2->VAR16 = 36;
    }
    if (strstr(VAR3, ""))
    {
        fprintf(VAR11, "");
        VAR6->VAR12 = 32;
    }
    else if (strstr(VAR3, ""))
    {
        VAR6->VAR12 = 16;
    }
    else if (strstr(VAR3, ""))
    {
        VAR6->VAR12 = 12;
        VAR2->VAR16 = 18;
    }
    VAR6->VAR25 = VAR2->VAR14 * VAR2->VAR15 * VAR2->VAR16 - (VAR6->VAR18 - 1);
    if (strstr(VAR3, ""))
    {
        if (FUN5(VAR6))
            return -1;
        VAR2->VAR19 = 0;
    }
    VAR9 = strrchr(VAR3, '') - VAR3;
    assert(VAR9 >= 3);
    if (VAR3[VAR9 - 2] == '' && FUN6(VAR3[VAR9 - 1]))
        VAR3 += VAR9 - 1;
    else
        VAR3 += VAR9 + 1;
    VAR2->VAR26 = VAR2->VAR14 * VAR2->VAR15 * VAR2->VAR16;
    if (FUN7(VAR6, VAR3))
        return -1;
    VAR6->VAR25 = VAR6->VAR27 + VAR6->VAR13 * VAR6->VAR28;
    if (VAR6->VAR18 == 0x40)
        FUN8(VAR6);
    if (VAR8)
        VAR2->VAR15 = VAR2->VAR14 = VAR2->VAR16 = 0;
    FUN9(&VAR6->VAR29);
    return 0;
}