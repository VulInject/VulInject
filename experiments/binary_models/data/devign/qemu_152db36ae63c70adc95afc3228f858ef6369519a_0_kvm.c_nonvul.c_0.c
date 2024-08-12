void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    if (!VAR5 && VAR4->VAR6 & (1 << VAR7))
    {
        fprintf(VAR8, "");
        VAR4->VAR6 &= ~(1 << VAR7);
    }
    FUN2("", VAR9);
}