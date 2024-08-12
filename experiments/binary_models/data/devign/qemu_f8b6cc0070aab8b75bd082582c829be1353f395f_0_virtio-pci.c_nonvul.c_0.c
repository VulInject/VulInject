static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6;
    if (VAR4->VAR7 != VAR8 && VAR4->VAR7 != VAR9)
        VAR4->VAR7 = VAR8;
    if (!VAR4->VAR10.VAR11)
    {
        FUN3("");
        return -1;
    }
    VAR6 = FUN4(&VAR2->VAR12, &VAR4->VAR10);
    VAR6->VAR13 = VAR4->VAR13;
    FUN5(VAR4, VAR6, VAR14, VAR15, VAR4->VAR7, 0x00);
    VAR4->VAR13 = VAR6->VAR13;
    return 0;
}