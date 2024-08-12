static void FUN1(VAR1 *VAR2, hwaddr VAR3, uint64_t VAR4, unsigned VAR5)
{
    if (!FUN2(VAR2, VAR3, VAR5, true))
    {
        return;
    }
    FUN3(VAR2, &VAR4, VAR5);
    if (!VAR2->VAR6->write)
    {
        VAR2->VAR6->VAR7.write[FUN4(VAR5)](VAR2->VAR8, VAR3, VAR4);
        return;
    }
    FUN5(VAR3, &VAR4, VAR5, VAR2->VAR6->VAR9.VAR10, VAR2->VAR6->VAR9.VAR11, VAR12, VAR2);
}