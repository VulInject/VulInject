static int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    LONG VAR7, VAR8;
    DWORD VAR9;
    VAR7 = VAR3;
    VAR8 = VAR3 >> 32;
    VAR9 = FUN2(VAR5->VAR10, VAR7, &VAR8, VAR11);
    if (VAR9 == VAR12 && FUN3() != VAR13)
    {
        fprintf(VAR14, "", FUN3());
        return -VAR15;
    }
    if (FUN4(VAR5->VAR10) == 0)
    {
        fprintf(VAR14, "", FUN3());
        return -VAR15;
    }
    return 0;
}