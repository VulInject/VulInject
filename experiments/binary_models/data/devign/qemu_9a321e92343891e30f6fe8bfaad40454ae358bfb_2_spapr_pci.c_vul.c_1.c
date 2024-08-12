static void FUN1(VAR1 *VAR2, hwaddr VAR3, bool VAR4, unsigned VAR5, unsigned VAR6)
{
    unsigned VAR7;
    MSIMessage VAR8 = {.VAR9 = VAR3, .VAR10 = VAR5};
    if (!VAR4)
    {
        FUN2(VAR2, VAR8);
        FUN3(VAR2->VAR11, 0, VAR8.VAR9);
        return;
    }
    for (VAR7 = 0; VAR7 < VAR6; ++VAR7, ++VAR8.VAR10)
    {
        FUN4(VAR2, VAR7, VAR8);
        FUN3(VAR2->VAR11, VAR7, VAR8.VAR9);
    }
}