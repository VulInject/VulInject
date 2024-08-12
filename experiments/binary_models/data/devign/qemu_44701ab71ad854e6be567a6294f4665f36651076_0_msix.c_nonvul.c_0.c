void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    unsigned VAR5 = VAR2->VAR6;
    unsigned int VAR7;
    if (!FUN2(VAR2))
    {
        return;
    }
    FUN3(VAR2);
    FUN4(VAR4, VAR2->VAR8, VAR5 * VAR9);
    FUN4(VAR4, VAR2->VAR8 + VAR10, (VAR5 + 7) / 8);
    FUN5(VAR2);
    for (VAR7 = 0; VAR7 < VAR5; VAR7++)
    {
        FUN6(VAR2, VAR7, true);
    }
}