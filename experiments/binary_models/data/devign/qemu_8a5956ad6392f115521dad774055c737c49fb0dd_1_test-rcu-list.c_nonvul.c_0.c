static void *FUN1(void *VAR1)
{
    int VAR2, VAR3;
    long long VAR4 = 0;
    long long VAR5 = 0;
    long long VAR6 = 0;
    struct VAR7 *VAR8, *VAR9;
    *(struct VAR10 **)VAR1 = &VAR11;
    FUN2(&VAR12);
    while (VAR13 == VAR14)
    {
        FUN3(1000);
    }
    while (VAR13 == VAR15)
    {
        VAR3 = FUN4(VAR16);
        VAR2 = 0;
        FUN5(VAR9, &VAR17, VAR18, VAR8)
        {
            VAR2++;
            if (VAR3 == VAR2)
            {
                FUN6(VAR9, VAR18);
                FUN7(&VAR9->VAR19, VAR20);
                VAR6++;
                break;
            }
        }
        if (VAR13 == VAR21)
        {
            break;
        }
        VAR3 = FUN4(VAR16);
        VAR2 = 0;
        FUN8(VAR8, &VAR17, VAR18)
        {
            VAR2++;
            if (VAR3 == VAR2)
            {
                VAR9 = FUN9(struct VAR7, 1);
                VAR22 += VAR4;
                FUN10(VAR8, VAR9, VAR18);
                break;
            }
        }
        VAR5 += 2;
        FUN11();
    }
    FUN11();
    FUN12(&VAR23);
    VAR22 += VAR4;
    VAR24 += VAR5;
    VAR25 += VAR6;
    FUN13(&VAR23);
    return NULL;
}