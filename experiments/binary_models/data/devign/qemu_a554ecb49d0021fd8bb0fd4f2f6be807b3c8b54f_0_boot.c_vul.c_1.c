static int FUN1(hwaddr VAR1, const struct VAR2 *VAR3, hwaddr VAR4)
{
    void *VAR5 = NULL;
    int VAR6, VAR7;
    uint32_t VAR8, VAR9;
    if (VAR3->VAR10)
    {
        char *VAR11;
        VAR11 = FUN2(VAR12, VAR3->VAR10);
        if (!VAR11)
        {
            fprintf(VAR13, "", VAR3->VAR10);
            goto VAR14;
        }
        VAR5 = FUN3(VAR11, &VAR6);
        if (!VAR5)
        {
            fprintf(VAR13, "", VAR11);
            FUN4(VAR11);
            goto VAR14;
        }
        FUN4(VAR11);
    }
    else if (VAR3->VAR15)
    {
        VAR5 = VAR3->FUN5(VAR3, &VAR6);
        if (!VAR5)
        {
            fprintf(VAR13, "");
            goto VAR14;
        }
    }
    if (VAR4 > VAR1 && VAR6 > (VAR4 - VAR1))
    {
        FUN4(VAR5);
        return 0;
    }
    VAR8 = FUN6(VAR5, "", "");
    VAR9 = FUN6(VAR5, "", "");
    if (VAR8 == 0 || VAR9 == 0)
    {
        fprintf(VAR13, "");
        goto VAR14;
    }
    if (VAR9 < 2 && VAR3->VAR16 >= (1ULL << 32))
    {
        fprintf(VAR13, ""
                        "");
        goto VAR14;
    }
    VAR7 = FUN7(VAR5, "", "", VAR8, VAR3->VAR17, VAR9, VAR3->VAR16);
    if (VAR7 < 0)
    {
        fprintf(VAR13, "");
        goto VAR14;
    }
    if (VAR3->VAR18 && *VAR3->VAR18)
    {
        VAR7 = FUN8(VAR5, "", "", VAR3->VAR18);
        if (VAR7 < 0)
        {
            fprintf(VAR13, "");
            goto VAR14;
        }
    }
    if (VAR3->VAR19)
    {
        VAR7 = FUN9(VAR5, "", "", VAR3->VAR20);
        if (VAR7 < 0)
        {
            fprintf(VAR13, "");
            goto VAR14;
        }
        VAR7 = FUN9(VAR5, "", "", VAR3->VAR20 + VAR3->VAR19);
        if (VAR7 < 0)
        {
            fprintf(VAR13, "");
            goto VAR14;
        }
    }
    if (VAR3->VAR21)
    {
        VAR3->FUN10(VAR3, VAR5);
    }
    FUN11(VAR5, VAR6);
    FUN12("", VAR5, VAR6, VAR1);
    FUN4(VAR5);
    return VAR6;
VAR14:
    FUN4(VAR5);
    return -1;
}