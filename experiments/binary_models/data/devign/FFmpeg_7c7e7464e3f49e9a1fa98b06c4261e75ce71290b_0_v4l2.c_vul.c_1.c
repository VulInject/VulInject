static int FUN1(struct VAR1 *VAR2, void *VAR3, VAR4 *VAR5)
{
    struct v4l2_buffer VAR6;
    int VAR7;
    memset(&VAR6, 0, sizeof(struct VAR8));
    VAR6.VAR9 = VAR10;
    VAR6.VAR11 = VAR12;
    while ((VAR7 = FUN2(VAR2->VAR13, VAR14, &VAR6)) < 0 && ((VAR15 == VAR16) || (VAR15 == VAR17)))
        ;
    if (VAR7 < 0)
    {
        FUN3(NULL, VAR18, "", strerror(VAR15));
        return -1;
    }
    assert(VAR6.VAR19 < VAR2->VAR20);
    assert(VAR6.VAR21 == VAR2->VAR22);
    memcpy(VAR3, VAR2->VAR23[VAR6.VAR19], VAR6.VAR21);
    *VAR5 = VAR6.VAR24.VAR25 * FUN4(1000000) + VAR6.VAR24.VAR26;
    VAR7 = FUN2(VAR2->VAR13, VAR27, &VAR6);
    if (VAR7 < 0)
    {
        FUN3(NULL, VAR18, "");
        return -1;
    }
    return VAR2->VAR28[VAR6.VAR19];
}