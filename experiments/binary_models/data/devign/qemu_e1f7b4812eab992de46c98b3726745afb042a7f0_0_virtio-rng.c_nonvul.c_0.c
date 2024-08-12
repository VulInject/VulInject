static void FUN1(VAR1 *VAR2)
{
    size_t VAR3;
    unsigned VAR4;
    if (!FUN2(VAR2))
    {
        return;
    }
    if (VAR2->VAR5 < 0)
    {
        VAR4 = 0;
    }
    else
    {
        VAR4 = FUN3((VAR6)VAR2->VAR5, (VAR6)VAR7);
    }
    VAR3 = FUN4(VAR2->VAR8, VAR4);
    VAR3 = FUN3(VAR2->VAR5, VAR3);
    if (VAR3)
    {
        FUN5(VAR2->VAR9, VAR3, VAR10, VAR2);
    }
}