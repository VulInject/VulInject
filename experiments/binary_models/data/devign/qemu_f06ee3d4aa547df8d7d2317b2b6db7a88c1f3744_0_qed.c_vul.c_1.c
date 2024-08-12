static void FUN1(void *VAR1, int VAR2, uint64_t VAR3, size_t VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR7 *VAR8 = FUN2(VAR6);
    VAR9 *VAR10 = VAR6->VAR11.VAR10;
    VAR3 += FUN3(VAR8, VAR6->VAR12);
    FUN4(VAR8, VAR6, VAR2, VAR3, VAR4);
    if (VAR2 < 0)
    {
        goto VAR13;
    }
    FUN5(&VAR6->VAR14, VAR6->VAR15, VAR6->VAR16, VAR4);
    if (VAR2 == VAR17)
    {
        FUN6(&VAR6->VAR14, 0, 0, VAR6->VAR14.VAR18);
        FUN7(VAR6, 0);
        return;
    }
    else if (VAR2 != VAR19)
    {
        FUN8(VAR8, VAR6->VAR12, &VAR6->VAR14, VAR20, VAR6);
        return;
    }
    FUN9(VAR10->VAR21, VAR22);
    FUN10(VAR10->VAR21, VAR3 / VAR23, &VAR6->VAR14, VAR6->VAR14.VAR18 / VAR23, VAR20, VAR6);
    return;
VAR13:
    FUN11(VAR6, VAR2);
}