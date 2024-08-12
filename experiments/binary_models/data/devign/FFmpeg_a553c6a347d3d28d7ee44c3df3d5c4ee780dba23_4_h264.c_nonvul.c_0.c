static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = FUN2(VAR3, VAR6) + sizeof(VAR4->VAR6);
    int VAR7;
    if (!VAR4->VAR8.VAR9[0])
        return;
    FUN3(VAR2->VAR10, &VAR4->VAR6);
    FUN4(&VAR4->VAR11);
    FUN4(&VAR4->VAR12);
    FUN4(&VAR4->VAR13);
    for (VAR7 = 0; VAR7 < 2; VAR7++)
    {
        FUN4(&VAR4->VAR14[VAR7]);
        FUN4(&VAR4->VAR15[VAR7]);
    }
    memset((VAR16 *)VAR4 + VAR5, 0, sizeof(*VAR4) - VAR5);
}