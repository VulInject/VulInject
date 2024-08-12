static int FUN1(VAR1 *VAR2, bool VAR3)
{
    PageSearchStatus VAR4;
    int VAR5 = 0;
    bool VAR6, VAR7;
    ram_addr_t VAR8;
    if (!FUN2())
    {
        return VAR5;
    }
    VAR4.VAR9 = VAR2->VAR10;
    VAR4.VAR11 = VAR2->VAR12;
    VAR4.VAR13 = false;
    if (!VAR4.VAR9)
    {
        VAR4.VAR9 = FUN3(&VAR14.VAR15);
    }
    do
    {
        VAR6 = true;
        VAR7 = FUN4(VAR2, &VAR4, &VAR8);
        if (!VAR7)
        {
            VAR7 = FUN5(VAR2, &VAR4, &VAR6, &VAR8);
        }
        if (VAR7)
        {
            VAR5 = FUN6(VAR2, &VAR4, VAR3, VAR8);
        }
    } while (!VAR5 && VAR6);
    VAR2->VAR10 = VAR4.VAR9;
    VAR2->VAR12 = VAR4.VAR11;
    return VAR5;
}