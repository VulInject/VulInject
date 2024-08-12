static void FUN1(void)
{
    int VAR1;
    struct
    {
        const char *VAR2;
        LiteralQObject VAR3;
    } VAR4[] = {{
                          .VAR2 = ""VAR5\""VAR6\""hello VAR7\"",
                          .VAR3 = FUN2(((VAR8[]){{"", FUN3(42)}, {"", FUN4("")}, {}})),
                      },
                      {
                          .VAR2 = "",
                          .VAR3 = FUN2(((VAR8[]){{}})),
                      },
                      {
                          .VAR2 = ""VAR5\"",
                          .VAR3 = FUN2(((VAR8[]){{"", FUN3(43)}, {}})),
                      },
                      {}};
    for (VAR1 = 0; VAR4[VAR1].VAR2; VAR1++)
    {
        VAR9 *VAR10;
        VAR11 *VAR12;
        VAR10 = FUN5(VAR4[VAR1].VAR2);
        FUN6(FUN7(&VAR4[VAR1].VAR3, VAR10) == 1);
        VAR12 = FUN8(VAR10);
        FUN9(VAR10);
        VAR10 = FUN5(FUN10(VAR12));
        FUN6(FUN7(&VAR4[VAR1].VAR3, VAR10) == 1);
        FUN9(VAR10);
        FUN11(VAR12);
    }
}