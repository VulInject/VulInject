void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = FUN2(VAR3, VAR6) + sizeof(VAR4->VAR6);
    VAR4->VAR7.VAR8 = &VAR4->VAR8;
    if (VAR2->VAR9 != VAR10 && VAR2->VAR9 != VAR11 && VAR2->VAR9 != VAR12)
        FUN3(VAR2->VAR13, &VAR4->VAR7);
    else
        FUN4(&VAR4->VAR8);
    FUN5(&VAR4->VAR14);
    if (VAR4->VAR15)
        FUN6(VAR4);
    memset((VAR16 *)VAR4 + VAR5, 0, sizeof(*VAR4) - VAR5);
}