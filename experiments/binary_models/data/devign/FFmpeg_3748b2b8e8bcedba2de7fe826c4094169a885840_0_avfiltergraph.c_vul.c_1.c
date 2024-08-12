int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR2->VAR5 = FUN2(VAR2->VAR5, sizeof(VAR3 *) * ++VAR2->VAR6);
    if (!VAR2->VAR5)
        return FUN3(VAR7);
    VAR2->VAR5[VAR2->VAR6 - 1] = VAR4;
    return 0;
}