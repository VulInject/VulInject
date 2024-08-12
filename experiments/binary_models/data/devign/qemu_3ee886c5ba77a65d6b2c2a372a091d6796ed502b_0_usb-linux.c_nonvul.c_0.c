static int FUN1(void *VAR1, int VAR2, int VAR3, char *VAR4, int VAR5, int VAR6, int VAR7, const char *VAR8, int VAR9)
{
    struct VAR10 *VAR11;
    struct VAR12 *VAR13;
    if (VAR5 == 9)
        return 0;
    FUN2(VAR13, &VAR14, VAR15)
    {
        VAR11 = &VAR13->VAR16;
        if (VAR11->VAR2 > 0 && VAR11->VAR2 != VAR2)
        {
            continue;
        }
        if (VAR11->VAR3 > 0 && VAR11->VAR3 != VAR3)
        {
            continue;
        }
        if (VAR11->VAR4 != NULL && (VAR4 == NULL || strcmp(VAR11->VAR4, VAR4) != 0))
        {
            continue;
        }
        if (VAR11->VAR6 > 0 && VAR11->VAR6 != VAR6)
        {
            continue;
        }
        if (VAR11->VAR7 > 0 && VAR11->VAR7 != VAR7)
        {
            continue;
        }
        VAR13->VAR17++;
        if (VAR13->VAR18 >= 3)
        {
            return 0;
        }
        if (VAR13->VAR19 != -1)
        {
            return 0;
        }
        FUN3("", VAR2, VAR3);
        if (FUN4(VAR13, VAR2, VAR3, VAR4, VAR8, VAR9) < 0)
        {
            VAR13->VAR18++;
        }
        break;
    }
    return 0;
}