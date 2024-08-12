static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8;
    MultiReqBuffer VAR9 = {};
    if (VAR6->VAR10 && !VAR6->VAR11)
    {
        FUN3(VAR6->VAR10);
        return;
    }
    FUN4(VAR6->VAR12);
    while ((VAR8 = FUN5(VAR6)))
    {
        FUN6(VAR8, &VAR9);
    }
    if (VAR9.VAR13)
    {
        FUN7(VAR6->VAR12, &VAR9);
    }
    FUN8(VAR6->VAR12);
}