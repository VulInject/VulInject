int FUN1(VAR1 *VAR2, int VAR3)
{
    if (!VAR2 || !VAR2->VAR4 || !VAR2->VAR4->VAR5)
        return FUN2(VAR6);
    return VAR2->VAR4->FUN3(VAR2, VAR3);
}