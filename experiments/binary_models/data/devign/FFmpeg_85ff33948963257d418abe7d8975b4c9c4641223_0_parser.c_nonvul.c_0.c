VAR1 *FUN1(int VAR2)
{
    VAR1 *VAR3;
    VAR4 *VAR5;
    int VAR6;
    if (VAR2 == VAR7)
        return NULL;
    for (VAR5 = VAR8; VAR5 != NULL; VAR5 = VAR5->VAR9)
    {
        if (VAR5->VAR10[0] == VAR2 || VAR5->VAR10[1] == VAR2 || VAR5->VAR10[2] == VAR2 || VAR5->VAR10[3] == VAR2 || VAR5->VAR10[4] == VAR2)
            goto VAR11;
    }
    return NULL;
VAR11:
    VAR3 = FUN2(sizeof(VAR1));
    if (!VAR3)
        return NULL;
    VAR3->VAR5 = VAR5;
    VAR3->VAR12 = FUN2(VAR5->VAR13);
    if (!VAR3->VAR12)
    {
        FUN3(VAR3);
        return NULL;
    }
    if (VAR5->VAR14)
    {
        VAR6 = VAR5->FUN4(VAR3);
        if (VAR6 != 0)
        {
            FUN3(VAR3->VAR12);
            FUN3(VAR3);
            return NULL;
        }
    }
    VAR3->VAR15 = 1;
    VAR3->VAR16 = VAR17;
    VAR3->VAR18 = -1;
    VAR3->VAR19 = 0;
    VAR3->VAR20 = VAR21;
    VAR3->VAR22 = VAR21;
    VAR3->VAR23 = VAR21;
    return VAR3;
}