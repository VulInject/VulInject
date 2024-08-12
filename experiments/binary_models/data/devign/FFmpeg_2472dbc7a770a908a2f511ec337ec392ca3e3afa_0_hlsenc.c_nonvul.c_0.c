static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = strlen(VAR4->VAR6);
    char VAR7[32];
    if (VAR2->VAR8->VAR9 == VAR10)
        return;
    if (VAR4->VAR11 == VAR12)
        return;
    if (VAR2->VAR8->VAR13 == VAR14)
    {
        VAR15 *VAR16 = VAR2->VAR8->VAR17;
        if (VAR16 && (VAR16[0] | VAR16[1] | VAR16[2]) == 0 && VAR16[3] == 1 && (VAR16[4] & 0x1F) == 7)
        {
            snprintf(VAR7, sizeof(VAR7), "", VAR16[5], VAR16[6], VAR16[7]);
        }
        else
        {
            goto VAR18;
        }
    }
    else if (VAR2->VAR8->VAR13 == VAR19)
    {
        snprintf(VAR7, sizeof(VAR7), "");
    }
    else if (VAR2->VAR8->VAR13 == VAR20)
    {
        snprintf(VAR7, sizeof(VAR7), "");
    }
    else if (VAR2->VAR8->VAR13 == VAR21)
    {
        snprintf(VAR7, sizeof(VAR7), "");
    }
    else if (VAR2->VAR8->VAR13 == VAR22)
    {
        snprintf(VAR7, sizeof(VAR7), "");
    }
    else if (VAR2->VAR8->VAR13 == VAR23)
    {
        snprintf(VAR7, sizeof(VAR7), "");
    }
    else
    {
        goto VAR18;
    }
    if (!FUN2(VAR4->VAR6, VAR7))
    {
        snprintf(VAR4->VAR6 + VAR5, sizeof(VAR4->VAR6) - VAR5, "", VAR5 ? "" : "", VAR7);
    }
    return;
VAR18:
    VAR4->VAR6[0] = '';
    VAR4->VAR11 = VAR12;
    return;
}