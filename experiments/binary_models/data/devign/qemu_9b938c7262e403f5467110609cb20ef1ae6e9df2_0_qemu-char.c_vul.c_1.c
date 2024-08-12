static void FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    struct VAR8 *VAR9;
    for (VAR9 = FUN2(VAR4); VAR9; VAR9 = FUN3(VAR4, VAR9))
    {
        int VAR10;
        if (VAR9->VAR11 != FUN4(sizeof(int)) || VAR9->VAR12 != VAR13 || VAR9->VAR14 != VAR15)
            continue;
        VAR10 = *((int *)FUN5(VAR9));
        if (VAR10 < 0)
            continue;
        FUN6(VAR10);
        if (VAR6->VAR16 != -1)
            close(VAR6->VAR16);
        VAR6->VAR16 = VAR10;
    }