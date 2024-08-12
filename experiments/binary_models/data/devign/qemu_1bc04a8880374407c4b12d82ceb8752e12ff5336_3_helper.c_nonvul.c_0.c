static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint64_t VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = *(VAR8 **)FUN3(VAR2, VAR4);
    if (!VAR9)
    {
        return;
    }
    VAR9 += VAR2->VAR10.VAR11[VAR12];
    FUN4(FUN5(VAR7));
    *VAR9 = VAR5;
}