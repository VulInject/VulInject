int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    AVFrame VAR5;
    int VAR6;
    assert(VAR2->VAR7 == VAR8);
    if (VAR4->VAR9[0] && (VAR4->VAR10 != VAR2->VAR10 || VAR4->VAR11 != VAR2->VAR11 || VAR4->VAR12 != VAR2->VAR13))
    {
        FUN2(VAR2, VAR14, "", VAR4->VAR10, VAR4->VAR11, FUN3(VAR4->VAR12), VAR2->VAR10, VAR2->VAR11, FUN3(VAR2->VAR13));
        VAR2->FUN4(VAR2, VAR4);
    }
    FUN5(VAR2, VAR4);
    if (VAR4->VAR9[0] == NULL)
    {
        VAR4->VAR15 |= VAR16;
        return VAR2->FUN6(VAR2, VAR4);
    }
    if (VAR4->VAR17 == VAR18)
    {
        return 0;
    }
    VAR5 = *VAR4;
    for (VAR6 = 0; VAR6 < VAR19; VAR6++)
        VAR4->VAR9[VAR6] = VAR4->VAR20[VAR6] = NULL;
    VAR4->VAR21 = NULL;
    if (VAR2->FUN6(VAR2, VAR4))
        return -1;
    FUN7((VAR22 *)VAR4, (VAR22 *)&VAR5, VAR2->VAR13, VAR2->VAR10, VAR2->VAR11);
    VAR2->FUN4(VAR2, &VAR5);
    return 0;
}