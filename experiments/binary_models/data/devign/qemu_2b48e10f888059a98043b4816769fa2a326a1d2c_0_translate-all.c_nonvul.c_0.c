static VAR1 *FUN1(target_ulong VAR2)
{
    VAR1 *VAR3;
    VAR4 *VAR5;
    FUN2();
    VAR3 = FUN3(&VAR6);
    if (FUN4(VAR3 == NULL))
    {
        return NULL;
    }
    VAR5 = &VAR6.VAR7;
    if (FUN4(VAR5->VAR8 == VAR5->VAR9))
    {
        VAR5->VAR9 *= 2;
        VAR5->VAR10 = FUN5(VAR1 *, VAR5->VAR10, VAR5->VAR9);
    }
    VAR5->VAR10[VAR5->VAR8++] = VAR3;
    return VAR3;
}