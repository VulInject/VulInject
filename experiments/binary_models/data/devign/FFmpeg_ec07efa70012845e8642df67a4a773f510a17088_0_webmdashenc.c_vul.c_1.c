static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    char *VAR6 = VAR4->VAR7;
    char *VAR8;
    enum
    {
        VAR9,
        VAR10,
        VAR11
    } VAR12;
    if (!VAR4->VAR7)
    {
        FUN2(VAR2, VAR13, "");
        return FUN3(VAR14);
    }
    VAR12 = VAR9;
    while (VAR6 < VAR4->VAR7 + strlen(VAR4->VAR7))
    {
        if (*VAR6 == '')
            continue;
        else if (VAR12 == VAR9 && !FUN4(VAR6, "", 3))
        {
            void *VAR15 = FUN5(VAR4->VAR16, sizeof(*VAR4->VAR16) * (VAR4->VAR17 + 1));
            if (VAR15 == NULL)
                return FUN3(VAR18);
            VAR4->VAR16 = VAR15;
            ++VAR4->VAR17;
            VAR4->VAR16[VAR4->VAR17 - 1].VAR19 = 0;
            VAR4->VAR16[VAR4->VAR17 - 1].VAR20 = NULL;
            VAR6 += 3;
            VAR8 = VAR4->VAR16[VAR4->VAR17 - 1].VAR21;
            while (*VAR6 != '')
                *VAR8++ = *VAR6++;
            *VAR8 = 0;
            VAR6++;
            VAR12 = VAR10;
        }
        else if (VAR12 == VAR10 && !FUN4(VAR6, "", 8))
        {
            VAR6 += 8;
            VAR12 = VAR11;
        }
        else if (VAR12 == VAR11)
        {
            struct VAR22 *VAR16 = &VAR4->VAR16[VAR4->VAR17 - 1];
            VAR8 = VAR6;
            while (*VAR8 != '' && *VAR8 != '' && *VAR8 != '')
                VAR8++;
            VAR16->VAR20 = FUN5(VAR16->VAR20, sizeof(*VAR16->VAR20) * ++VAR16->VAR19);
            if (VAR16->VAR20 == NULL)
                return FUN3(VAR18);
            VAR16->VAR20[VAR16->VAR19 - 1] = FUN6(VAR6, VAR8 - VAR6 + 1);
            if (VAR16->VAR20[VAR16->VAR19 - 1] < 0)
                return -1;
            if (*VAR8 == '')
                break;
            if (*VAR8 == '')
                VAR12 = VAR9;
            VAR6 = ++VAR8;
        }
        else
        {
            return -1;
        }
    }
    return 0;
}