int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *new = FUN2(VAR2->VAR6, &VAR2->VAR7, sizeof(*VAR2->VAR6) * (VAR2->VAR8 + 1));
    if (!new)
        return FUN3(VAR9);
    VAR2->VAR6 = new;
    new += VAR2->VAR8;
    new->VAR10 = VAR4->VAR11;
    new->VAR10 += VAR2->VAR12;
    if (VAR4->VAR13 != VAR14)
    {
        new->VAR13 = FUN4(VAR4->VAR13, VAR2->VAR15->VAR16, (VAR17){1, VAR2->VAR15->VAR18});
        new->VAR13 -= VAR2->VAR12;
        if (VAR2->VAR8 && new[-1].VAR13 >= new->VAR13)
            FUN5(VAR2->VAR15, VAR19, "");
    }
    else
    {
        new->VAR13 = VAR14;
    }
    VAR2->VAR12 = 0;
    VAR2->VAR20 += VAR4->VAR11;
    VAR2->VAR8++;
    return 0;
}