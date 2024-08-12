FUN1(VAR1 *VAR2)
{
    register struct VAR3 *VAR4;
    int VAR5 = 0;
    FUN2("");
    if (VAR2->VAR6.VAR7 == &VAR2->VAR6)
    {
        VAR4 = (struct VAR3 *)malloc(VAR8);
        if (VAR4 == NULL)
            goto VAR9;
        VAR2->VAR10++;
        if (VAR2->VAR10 > VAR11)
            VAR5 = VAR12;
        VAR4->VAR2 = VAR2;
    }
    else
    {
        VAR4 = VAR2->VAR6.VAR7;
        FUN3(VAR4);
    }
    FUN4(VAR4, &VAR2->VAR13);
    VAR4->VAR14 = (VAR5 | VAR15);
    VAR4->VAR16 = VAR8 - sizeof(struct VAR17);
    VAR4->VAR18 = VAR4->VAR19;
    VAR4->VAR20 = 0;
    VAR4->VAR21 = NULL;
    VAR4->VAR22 = NULL;
VAR9:
    FUN5("", (long)VAR4);
    return VAR4;
}