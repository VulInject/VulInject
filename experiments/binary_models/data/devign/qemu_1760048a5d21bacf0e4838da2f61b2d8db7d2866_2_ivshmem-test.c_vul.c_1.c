static void FUN1(void)
{
    IVState VAR1, VAR2, *VAR3, *VAR4;
    char *VAR5;
    int VAR6;
    FUN2(&VAR1);
    VAR3 = &VAR1;
    FUN2(&VAR2);
    VAR4 = &VAR2;
    VAR5 = FUN3(VAR7);
    memset(VAR8, 0x42, VAR7);
    FUN4(VAR3->VAR9, (VAR10)VAR3->VAR11, VAR5, VAR7);
    for (VAR6 = 0; VAR6 < VAR7; VAR6++)
    {
        FUN5(VAR5[VAR6], ==, 0x42);
    }
    FUN4(VAR4->VAR9, (VAR10)VAR4->VAR11, VAR5, VAR7);
    for (VAR6 = 0; VAR6 < VAR7; VAR6++)
    {
        FUN5(VAR5[VAR6], ==, 0x42);
    }
    memset(VAR5, 0x43, VAR7);
    FUN6(VAR3->VAR9, (VAR10)VAR3->VAR11, VAR5, VAR7);
    memset(VAR5, 0, VAR7);
    FUN4(VAR4->VAR9, (VAR10)VAR4->VAR11, VAR5, VAR7);
    for (VAR6 = 0; VAR6 < VAR7; VAR6++)
    {
        FUN5(VAR5[VAR6], ==, 0x43);
    }
    memset(VAR5, 0x44, VAR7);
    FUN6(VAR4->VAR9, (VAR10)VAR4->VAR11, VAR5, VAR7);
    memset(VAR5, 0, VAR7);
    FUN4(VAR3->VAR9, (VAR10)VAR4->VAR11, VAR5, VAR7);
    for (VAR6 = 0; VAR6 < VAR7; VAR6++)
    {
        FUN5(VAR5[VAR6], ==, 0x44);
    }
    FUN7(VAR3->VAR9);
    FUN7(VAR4->VAR9);
    FUN8(VAR5);
}