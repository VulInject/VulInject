int FUN1(VAR1 *VAR2, int VAR3, const VAR4 *VAR5, void *VAR6, int VAR7, int VAR8, VAR9 **VAR10)
{
    VAR11 *VAR12;
    assert(VAR7 == -1 || VAR8 >= VAR5->VAR13);
    VAR12 = FUN2(VAR11, 1);
    VAR12->VAR14 = VAR5->VAR14;
    VAR12->VAR15 = VAR16.VAR17++;
    VAR12->VAR6 = VAR6;
    VAR12->VAR5 = VAR5;
    VAR12->VAR7 = VAR7;
    if (VAR2)
    {
        char *VAR18 = FUN3(VAR2);
        if (VAR18)
        {
            if (snprintf(VAR12->VAR19, sizeof(VAR12->VAR19), "", VAR18) >= sizeof(VAR12->VAR19))
            {
                FUN4(VAR10, "", VAR18);
                FUN5(VAR12);
                return -1;
            }
            VAR12->VAR20 = FUN2(VAR21, 1);
            FUN6(VAR12->VAR20->VAR19, sizeof(VAR12->VAR20->VAR19), VAR5->VAR22);
            VAR12->VAR20->VAR3 = VAR3 == -1 ? FUN7(VAR5->VAR22) : VAR3;
            VAR3 = -1;
        }
    }
    FUN8(VAR12->VAR19, sizeof(VAR12->VAR19), VAR5->VAR22);
    if (VAR3 == -1)
    {
        VAR12->VAR3 = FUN9(VAR12->VAR19);
    }
    else
    {
        VAR12->VAR3 = VAR3;
    }
    assert(!VAR12->VAR20 || VAR12->VAR3 == 0);
    FUN10(VAR12);
    return 0;