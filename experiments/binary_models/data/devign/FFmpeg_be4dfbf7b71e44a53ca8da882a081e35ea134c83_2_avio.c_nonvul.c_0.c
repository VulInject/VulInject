int FUN1(VAR1 *VAR2)
{
    if (!VAR2 || !VAR2->VAR3 || !VAR2->VAR3->VAR4)
        return -1;
    return VAR2->VAR3->FUN2(VAR2);
}