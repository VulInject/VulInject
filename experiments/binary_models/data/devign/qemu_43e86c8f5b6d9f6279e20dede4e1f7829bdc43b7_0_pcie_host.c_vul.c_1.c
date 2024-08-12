static void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2, VAR3);
    if (!VAR7)
    {
        return;
    }
    FUN3(VAR7, FUN4(VAR3), FUN5(VAR7), VAR4, VAR5);
}