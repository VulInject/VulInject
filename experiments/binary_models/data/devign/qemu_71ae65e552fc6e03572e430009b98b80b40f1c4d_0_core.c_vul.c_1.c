static int FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR6 = FUN2(FUN3(FUN4(VAR4)));
    if ((VAR6->VAR9 == VAR4->VAR10) || (VAR6->VAR11))
    {
        VAR8 = FUN5(sizeof(struct VAR7));
        VAR8->VAR12 = VAR4;
        FUN6(&VAR6->VAR13, VAR8, VAR14);
    }
    return 0;
}