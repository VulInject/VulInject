int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7;
    FUN2();
    FUN3(VAR6, &VAR8, VAR9)
    {
        if (VAR6->VAR10 == NULL)
            continue;
        FUN4(VAR4, VAR11);
        FUN5(VAR4, VAR6->VAR12);
        VAR7 = VAR6->FUN6(VAR2, VAR4, VAR11, VAR6->VAR13);
        if (VAR7 < 0)
        {
            return VAR7;
        }
    }
    FUN3(VAR6, &VAR8, VAR9)
    {
        int VAR14;
        if (VAR6->VAR15 == NULL && VAR6->VAR16 == NULL)
            continue;
        FUN4(VAR4, VAR17);
        FUN5(VAR4, VAR6->VAR12);
        VAR14 = strlen(VAR6->VAR18);
        FUN4(VAR4, VAR14);
        FUN7(VAR4, (VAR19 *)VAR6->VAR18, VAR14);
        FUN5(VAR4, VAR6->VAR20);
        FUN5(VAR4, VAR6->VAR21);
        FUN8(VAR4, VAR6);
    }
    FUN4(VAR4, VAR22);
    return FUN9(VAR4);
}