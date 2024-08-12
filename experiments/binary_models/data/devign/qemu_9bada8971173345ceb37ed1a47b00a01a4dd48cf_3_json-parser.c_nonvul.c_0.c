static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5;
    VAR5 = FUN2(VAR3);
    assert(VAR5);
    switch (VAR5->VAR6)
    {
    case VAR7:
        return FUN3(FUN4(VAR3, VAR5));
    case VAR8:
    {
        int64_t VAR9;
        VAR10 = 0;
        VAR9 = FUN5(VAR5->VAR11, NULL, 10);
        if (VAR10 != VAR12)
        {
            return FUN3(FUN6(VAR9));
        }
    }
    case VAR13:
        return FUN3(FUN7(FUN8(VAR5->VAR11, NULL)));
    default:
        FUN9();
    }
}