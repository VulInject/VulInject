static void FUN1(void)
{
    int VAR1, VAR2[8] = {
               VAR3,
               VAR4,
               VAR5,
               VAR6,
               VAR7,
               VAR8,
               VAR9,
               VAR10,
           };
    FUN2();
    FUN3();
    FUN4(VAR11, VAR12);
    FUN5(VAR11, VAR13);
    FUN6();
    FUN7(VAR11, VAR13);
    FUN8();
    FUN9();
    FUN10(VAR11, VAR12);
    for (VAR1 = 0; VAR1 < 64; VAR1++)
        FUN11(VAR1, VAR2[VAR1 & 7], VAR2[VAR1 >> 3]);
}