static void FUN1(void)
{
    VAR1 *VAR2;
    void *VAR3;
    size_t VAR4;
    char *VAR5;
    int VAR6;
    VAR7 *VAR8;
    VAR8 = FUN2();
    VAR2 = FUN3(VAR8);
    VAR3 = ((VAR9 *)VAR2->VAR10)->VAR3 + FUN4(false);
    VAR4 = FUN5(VAR2->VAR10, (VAR11)(VAR12)VAR3);
    FUN6(VAR4, ==, strlen(VAR13));
    VAR3 += sizeof(VAR14);
    VAR5 = FUN7(VAR4);
    for (VAR6 = 0; VAR6 < VAR4; VAR6++)
    {
        VAR5[VAR6] = FUN8(VAR2->VAR10, (VAR11)(VAR12)VAR3 + VAR6);
    }
    FUN9(VAR5, VAR4, VAR13, VAR4);
    FUN10(VAR5);
    FUN11(VAR2);
    FUN12(VAR8);
}