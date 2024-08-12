static int FUN1(VAR1 **VAR2, const VAR3 *VAR4, const char *VAR5, const struct VAR6 *VAR7, int VAR8)
{
    int VAR9, VAR10 = 0;
    if (!(*VAR2 = FUN2(sizeof(VAR1))))
    {
        VAR10 = FUN3(VAR11);
        goto VAR12;
    }
    if (!((*VAR2)->VAR13 = FUN4(VAR4->VAR14)))
    {
        VAR10 = FUN3(VAR11);
        goto VAR12;
    }
    (*VAR2)->class = &VAR15;
    (*VAR2)->VAR4 = VAR4;
    (*VAR2)->VAR16 = -1;
    (*VAR2)->VAR7 = VAR7;
    (*VAR2)->VAR8 = VAR8;
    if (VAR4->VAR17)
    {
        void *VAR18 = (*VAR2)->VAR13;
        *((const VAR19 **)VAR18) = VAR4->VAR17;
        FUN5(VAR18);
        if (VAR5 && (VAR10 = FUN6(VAR18, VAR5, "", "")) < 0)
            goto VAR12;
    }
    for (VAR9 = 0; VAR9 < VAR20; VAR9++)
        FUN7(&(*VAR2)->VAR21[VAR9], 1, VAR22);
    if ((*VAR2)->VAR4->VAR23)
        VAR10 = (*VAR2)->VAR4->FUN8(*VAR2);
    if (VAR10 < 0)
        goto VAR12;
    return 0;
VAR12:
    FUN9(VAR2);
    return VAR10;
}