static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR2, VAR2);
    VAR7 *VAR8 = FUN2(VAR7, VAR2, VAR4);
    int VAR9;
    FUN3(VAR6->VAR10, sizeof(VAR6->VAR10), VAR8->VAR10);
    VAR6->VAR8 = VAR8;
    VAR6->VAR11 = 1;
    FUN4(&VAR6->VAR12);
    VAR9 = FUN5(VAR6);
    if (VAR9 == 0)
    {
        VAR9 = VAR6->VAR8->FUN6(VAR6);
    }
    if (VAR9 == 0 && VAR6->VAR11)
    {
        VAR9 = FUN7(VAR6);
    }
    return VAR9;
}