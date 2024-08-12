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
    VAR12 = VAR9;
    while (VAR6 < VAR4->VAR7 + strlen(VAR4->VAR7))
    {
        if (*VAR6 == '')
            continue;
        else if (VAR12 == VAR9 && !FUN2(VAR6, "", 3))
        {
            VAR4->VAR13 = FUN3(VAR4->VAR13, sizeof(*VAR4->VAR13) * ++VAR4->VAR14);
            if (VAR4->VAR13 == NULL)
                return -1;
            VAR4->VAR13[VAR4->VAR14 - 1].VAR15 = 0;
            VAR4->VAR13[VAR4->VAR14 - 1].VAR16 = NULL;
            VAR6 += 3;
            VAR8 = VAR4->VAR13[VAR4->VAR14 - 1].VAR17;
            while (*VAR6 != '')
                *VAR8++ = *VAR6++;
            *VAR8 = 0;
            VAR6++;
            VAR12 = VAR10;
        }
        else if (VAR12 == VAR10 && !FUN2(VAR6, "", 8))
        {
            VAR6 += 8;
            VAR12 = VAR11;
        }
        else if (VAR12 == VAR11)
        {
            struct VAR18 *VAR13 = &VAR4->VAR13[VAR4->VAR14 - 1];
            VAR8 = VAR6;
            while (*VAR8 != '' && *VAR8 != '' && *VAR8 != '')
                VAR8++;
            VAR13->VAR16 = FUN3(VAR13->VAR16, sizeof(*VAR13->VAR16) * ++VAR13->VAR15);
            if (VAR13->VAR16 == NULL)
                return -1;
            VAR13->VAR16[VAR13->VAR15 - 1] = FUN4(VAR6, VAR8 - VAR6 + 1);
            if (VAR13->VAR16[VAR13->VAR15 - 1] < 0)
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