static void FUN1(VAR1 *VAR2)
{
    char VAR3[3] = {0, 0, 0};
    FUN2(VAR2, VAR2->VAR4 * 8);
    if (VAR2->VAR4 == 4)
        FUN2(VAR2, 24);
    else
        FUN2(VAR2, VAR2->VAR4 * 8);
    FUN2(VAR2, 1);
    FUN2(VAR2, 0);
    FUN2(VAR2, 1);
    if (VAR2->VAR4 == 4)
    {
        FUN3(VAR2, 0xFF);
        FUN3(VAR2, 0xFF);
        FUN3(VAR2, 0xFF);
        FUN2(VAR2, 16);
        FUN2(VAR2, 8);
        FUN2(VAR2, 0);
        VAR2->VAR5 = VAR6;
    }
    else if (VAR2->VAR4 == 2)
    {
        FUN3(VAR2, 31);
        FUN3(VAR2, 63);
        FUN3(VAR2, 31);
        FUN2(VAR2, 11);
        FUN2(VAR2, 5);
        FUN2(VAR2, 0);
        VAR2->VAR5 = VAR7;
    }
    else if (VAR2->VAR4 == 1)
    {
        FUN3(VAR2, 7);
        FUN3(VAR2, 7);
        FUN3(VAR2, 3);
        FUN2(VAR2, 5);
        FUN2(VAR2, 2);
        FUN2(VAR2, 0);
        VAR2->VAR5 = VAR8;
    }
    VAR2->VAR9 = VAR2->VAR10;
    VAR2->VAR11 = VAR2->VAR12;
    VAR2->VAR13 = VAR2->VAR14;
    VAR2->VAR15 = VAR2->VAR16;
    VAR2->VAR17 = VAR2->VAR18;
    VAR2->VAR19 = VAR2->VAR20;
    VAR2->VAR21 = VAR2->VAR4 * 8;
    VAR2->VAR22 = VAR23;
    FUN4(VAR2, VAR3, 3);
}