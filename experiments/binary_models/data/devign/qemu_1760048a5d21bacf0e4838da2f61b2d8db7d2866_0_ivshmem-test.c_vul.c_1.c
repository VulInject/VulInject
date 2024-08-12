static void FUN1(void)
{
    IVState VAR1, *VAR2;
    uint32_t VAR3[1024];
    int VAR4;
    FUN2(&VAR1);
    VAR2 = &VAR1;
    FUN3(VAR2, VAR5, 0);
    FUN4(VAR2, VAR6);
    FUN4(VAR2, VAR7);
    FUN3(VAR2, VAR5, 0xffffffff);
    FUN5(FUN4(VAR2, VAR5), ==, 0xffffffff);
    FUN3(VAR2, VAR6, 1);
    FUN5(FUN4(VAR2, VAR6), ==, 1);
    FUN3(VAR2, VAR7, 1);
    FUN3(VAR2, VAR8, 8 << 16);
    for (VAR4 = 0; VAR4 < FUN6(VAR3); VAR4++)
    {
        VAR3[VAR4] = VAR4;
    }
    FUN7(VAR2->VAR9, (VAR10)VAR2->VAR11, VAR3, sizeof(VAR3));
    for (VAR4 = 0; VAR4 < FUN6(VAR3); VAR4++)
    {
        FUN5(((VAR12 *)VAR13)[VAR4], ==, VAR4);
    }
    memset(VAR3, 0, sizeof(VAR3));
    FUN8(VAR2->VAR9, (VAR10)VAR2->VAR11, VAR3, sizeof(VAR3));
    for (VAR4 = 0; VAR4 < FUN6(VAR3); VAR4++)
    {
        FUN5(VAR3[VAR4], ==, VAR4);
    }
    FUN9(VAR2->VAR9);
}