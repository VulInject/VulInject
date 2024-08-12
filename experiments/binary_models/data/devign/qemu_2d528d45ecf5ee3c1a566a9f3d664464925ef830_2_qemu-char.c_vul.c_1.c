static VAR1 *FUN1(VAR2 *VAR3)
{
    const char *VAR4 = VAR3->VAR5;
    VAR1 *VAR6;
    VAR7 *VAR8;
    VAR6 = FUN2();
    VAR8 = FUN3(sizeof(VAR7));
    VAR6->VAR9 = VAR8;
    VAR6->VAR10 = VAR11;
    VAR6->VAR12 = VAR13;
    if (FUN4(VAR6, VAR4) < 0)
    {
        FUN5(VAR8);
        FUN5(VAR6);
        return NULL;
    }
    return VAR6;
}