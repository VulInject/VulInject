void FUN1(void)
{
    void *VAR1 = VAR2.VAR3;
    void *VAR4;
    size_t VAR5 = VAR2.VAR6;
    size_t VAR7 = VAR8;
    size_t VAR9;
    size_t VAR10;
    size_t VAR11;
    VAR10 = FUN2();
    VAR4 = FUN3(VAR1, VAR7);
    FUN4(VAR4 < VAR2.VAR3 + VAR5);
    VAR9 = (VAR5 - (VAR4 - VAR1)) / VAR10;
    VAR9 = FUN5(VAR9, VAR7);
    FUN4(VAR9 >= 2 * VAR7);
    FUN6(&VAR12.VAR13);
    VAR12.VAR14 = VAR10;
    VAR12.VAR5 = VAR9 - VAR7;
    VAR12.VAR15 = VAR9;
    VAR12.VAR16 = VAR1;
    VAR12.VAR17 = VAR4;
    VAR12.VAR18 = FUN7(VAR1 + VAR5, VAR7);
    VAR12.VAR18 -= VAR7;
    for (VAR11 = 0; VAR11 < VAR12.VAR14; VAR11++)
    {
        void *VAR16, *VAR18;
        int VAR19;
        FUN8(VAR11, &VAR16, &VAR18);
        VAR19 = FUN9(VAR18, VAR7);
        FUN4(!VAR19);
    }
    {
        bool VAR20 = FUN10(VAR21);
        FUN4(!VAR20);
    }
}