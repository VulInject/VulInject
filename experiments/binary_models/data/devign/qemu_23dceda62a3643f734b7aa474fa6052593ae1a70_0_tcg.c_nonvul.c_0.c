void FUN1(VAR1 *VAR2)
{
    size_t VAR3, VAR4;
    void *VAR5, *VAR6;
    VAR5 = VAR2->VAR7;
    VAR2->VAR8 = VAR5;
    VAR2->VAR9 = VAR5;
    VAR2->VAR10 = VAR5;
    FUN2(VAR2);
    VAR6 = VAR2->VAR8;
    FUN3((VAR11)VAR5, (VAR11)VAR6);
    VAR3 = FUN4(VAR2);
    VAR2->VAR12 = VAR6;
    VAR2->VAR7 = VAR6;
    VAR2->VAR9 = VAR6;
    VAR4 = VAR2->VAR13 - VAR3;
    VAR2->VAR13 = VAR4;
    VAR2->VAR14 = VAR2->VAR7 + (VAR4 - 1024);
    FUN5(VAR2->VAR7, VAR4);
    if (FUN6(VAR15))
    {
        FUN7("", VAR3);
        FUN8(VAR5, VAR3);
        FUN7("");
        FUN9();
    }
}