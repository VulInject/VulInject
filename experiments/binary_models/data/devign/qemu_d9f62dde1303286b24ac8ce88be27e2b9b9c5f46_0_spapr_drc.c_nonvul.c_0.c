static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, void *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    VAR7 *VAR11 = NULL;
    int VAR12, VAR13, VAR14;
    void *VAR15;
    if (!VAR10->VAR15)
    {
        FUN3(VAR4, NULL, VAR8);
        return;
    }
    VAR15 = VAR10->VAR15;
    VAR13 = VAR10->VAR16;
    VAR14 = 0;
    do
    {
        const char *VAR5 = NULL;
        const struct VAR17 *VAR18 = NULL;
        int VAR19 = 0, VAR20 = 0;
        uint32_t VAR21;
        VAR21 = FUN4(VAR15, VAR13, &VAR12);
        switch (VAR21)
        {
        case VAR22:
            VAR14++;
            VAR5 = FUN5(VAR15, VAR13, &VAR20);
            FUN6(VAR4, VAR5, NULL, 0, &VAR11);
            if (VAR11)
            {
                FUN7(VAR8, VAR11);
                return;
            }
            break;
        case VAR23:
            FUN8(VAR14 > 0);
            FUN9(VAR4, &VAR11);
            FUN10(VAR4);
            if (VAR11)
            {
                FUN7(VAR8, VAR11);
                return;
            }
            VAR14--;
            break;
        case VAR24:
        {
            int VAR25;
            VAR18 = FUN11(VAR15, VAR13, &VAR19);
            VAR5 = FUN12(VAR15, FUN13(VAR18->VAR26));
            FUN14(VAR4, VAR5, NULL, 0, &VAR11);
            if (VAR11)
            {
                FUN7(VAR8, VAR11);
                return;
            }
            for (VAR25 = 0; VAR25 < VAR19; VAR25++)
            {
                FUN15(VAR4, NULL, (VAR27 *)&VAR18->VAR28[VAR25], &VAR11);
                if (VAR11)
                {
                    FUN7(VAR8, VAR11);
                    return;
                }
            }
            FUN16(VAR4);
            break;
        }
        default:
            FUN17(&VAR29, "", VAR21);
        }
        VAR13 = VAR12;
    } while (VAR14 != 0);
}