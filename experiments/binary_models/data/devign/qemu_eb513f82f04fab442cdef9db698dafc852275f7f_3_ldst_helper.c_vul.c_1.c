void FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4)
{
    CPU_QuadU VAR5;
    FUN2(VAR2, VAR3, 7);
    switch (VAR4)
    {
    case VAR6:
        VAR5.VAR7 = VAR8;
        FUN3(VAR2, VAR3, VAR5.VAR9.VAR10);
        FUN3(VAR2, VAR3 + 8, VAR5.VAR9.VAR11);
        break;
    case VAR12:
        VAR5.VAR7 = VAR8;
        FUN4(VAR2, VAR3, VAR5.VAR9.VAR10);
        FUN4(VAR2, VAR3 + 8, VAR5.VAR9.VAR11);
        break;
    case VAR13:
        VAR5.VAR7 = VAR8;
        FUN5(VAR2, VAR3, VAR5.VAR9.VAR10);
        FUN5(VAR2, VAR3 + 8, VAR5.VAR9.VAR11);
        break;
    default:
        FUN6("", VAR4);
        break;
    }
    VAR5.VAR7 = VAR8;
    FUN7(FUN8(VAR2, VAR3), VAR5.VAR9.VAR10);
    FUN7(FUN8(VAR2, VAR3 + 8), VAR5.VAR9.VAR11);
}