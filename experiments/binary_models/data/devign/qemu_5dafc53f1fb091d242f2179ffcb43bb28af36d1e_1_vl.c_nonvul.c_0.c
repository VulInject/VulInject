void FUN1(VAR1 *VAR2)
{
    if (!VAR2->VAR3)
        return;
    if (VAR2->VAR4 > 0)
    {
        VAR2->FUN2(VAR2->VAR5, VAR2->VAR6, VAR2->VAR7, VAR2->VAR4);
        VAR2->VAR7 += VAR2->VAR4;
        VAR2->VAR4 = 0;
    }
}