int FUN1(VAR1 *VAR2)
{
    if (!VAR2 || !VAR2->VAR3 || !VAR2->VAR3->VAR4)
        return FUN2(VAR5);
    return VAR2->VAR3->FUN3(VAR2);
}