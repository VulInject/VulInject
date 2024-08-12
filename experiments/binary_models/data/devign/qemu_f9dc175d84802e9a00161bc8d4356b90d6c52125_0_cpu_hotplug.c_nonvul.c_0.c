static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR4);
    int64_t VAR9;
    VAR9 = VAR8->FUN3(VAR4);
    if ((VAR9 / 8) >= VAR10)
    {
        FUN4(VAR2->VAR11, false, "", &VAR12);
        return;
    }
    VAR2->VAR13[VAR9 / 8] |= (1 << (VAR9 % 8));
}