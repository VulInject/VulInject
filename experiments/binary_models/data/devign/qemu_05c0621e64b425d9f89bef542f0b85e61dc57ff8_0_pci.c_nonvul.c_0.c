VAR1 FUN1(VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6;
    do
    {
        VAR6 = VAR3->VAR6;
        VAR4 = VAR6->FUN2(VAR3, VAR4);
        VAR3 = VAR6->VAR7;
    } while (VAR3);
    if (!VAR6->VAR8)
    {
        FUN3("", FUN4(FUN5(VAR6->VAR9.VAR10)));
        return (VAR1){VAR11, -1};
    }
    return VAR6->FUN6(VAR6->VAR12, VAR4);
}