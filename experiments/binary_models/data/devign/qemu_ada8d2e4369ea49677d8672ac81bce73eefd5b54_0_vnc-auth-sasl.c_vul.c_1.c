long FUN1(VAR1 *VAR2)
{
    long VAR3;
    FUN2(""
              "",
              VAR2->VAR4.VAR5, VAR2->VAR4.VAR6, VAR2->VAR4.VAR7, VAR2->VAR8.VAR9, VAR2->VAR8.VAR10, VAR2->VAR8.VAR11);
    if (!VAR2->VAR8.VAR9)
    {
        int VAR12;
        VAR12 = FUN3(VAR2->VAR8.VAR13, (char *)VAR2->VAR4.VAR5, VAR2->VAR4.VAR7, (const char **)&VAR2->VAR8.VAR9, &VAR2->VAR8.VAR10);
        if (VAR12 != VAR14)
            return FUN4(VAR2, -1, NULL);
        VAR2->VAR8.VAR15 = VAR2->VAR4.VAR7;
        VAR2->VAR8.VAR11 = 0;
        VAR3 = FUN5(VAR2, VAR2->VAR8.VAR9 + VAR2->VAR8.VAR11, VAR2->VAR8.VAR10 - VAR2->VAR8.VAR11);
        if (!VAR3)
            return 0;
        VAR2->VAR8.VAR11 += VAR3;
        if (VAR2->VAR8.VAR11 == VAR2->VAR8.VAR10)
        {
            VAR2->VAR4.VAR7 -= VAR2->VAR8.VAR15;
            VAR2->VAR8.VAR9 = NULL;
            VAR2->VAR8.VAR11 = VAR2->VAR8.VAR10 = 0;
            if (VAR2->VAR4.VAR7 == 0)
            {
                if (VAR2->VAR16)
                {
                    FUN6(VAR2->VAR16);
                    VAR2->VAR16 = FUN7(VAR2->VAR17, VAR18, VAR19, VAR2, NULL);
                    return VAR3;