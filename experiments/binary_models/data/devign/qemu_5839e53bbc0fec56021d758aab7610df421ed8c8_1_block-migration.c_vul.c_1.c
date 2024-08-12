static void FUN1(void *VAR1, VAR2 *VAR3)
{
    VAR4 *VAR5;
    int64_t VAR6;
    if (!FUN2(VAR3))
    {
        VAR6 = FUN3(VAR3);
        if (VAR6 <= 0)
        {
            return;
        }
        VAR5 = FUN4(sizeof(VAR4));
        VAR5->VAR3 = VAR3;
        VAR5->VAR7 = 0;
        VAR5->VAR8 = VAR6;
        VAR5->VAR9 = 0;
        VAR5->VAR10 = VAR11.VAR10;
        FUN5(VAR5);
        FUN6(&VAR5->VAR12, "");
        FUN7(VAR3, VAR5->VAR12);
        FUN8(VAR3);
        VAR11.VAR13 += VAR6;
        if (VAR5->VAR10)
        {
            FUN9("", VAR3->VAR14);
        }
        else
        {
            FUN9("", VAR3->VAR14);
        }
        FUN10(&VAR11.VAR15, VAR5, VAR16);
    }
}