static int FUN1(struct VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6;
    enum FLACExtradataFormat VAR7;
    int64_t VAR8;
    if (!FUN2(VAR2->VAR9[0]->VAR10, &VAR7, &VAR6))
        return -1;
    if (!FUN3(VAR4))
    {
        VAR8 = FUN4(VAR4);
        FUN5(VAR4, 8, VAR11);
        FUN6(VAR4, VAR6, VAR12);
        FUN5(VAR4, VAR8, VAR11);
        FUN7(VAR4);
    }
    else
    {
        FUN8(VAR2, VAR13, "");
    }
    return 0;
}