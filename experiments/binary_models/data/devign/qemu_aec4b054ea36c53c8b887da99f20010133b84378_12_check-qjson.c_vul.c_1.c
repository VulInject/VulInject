static void FUN1(void)
{
    int VAR1;
    struct
    {
        const char *VAR2;
        LiteralQObject VAR3;
    } VAR4[] = {{
                          .VAR2 = "",
                          .VAR3 = FUN2(((VAR5[]){FUN3(43), FUN3(42), {}})),
                      },
                      {
                          .VAR2 = "",
                          .VAR3 = FUN2(((VAR5[]){FUN3(43), FUN4(((VAR6[]){{"", FUN5("")}, {}})), FUN2(((VAR5[]){{}})), FUN3(42), {}})),
                      },
                      {
                          .VAR2 = "",
                          .VAR3 = FUN2(((VAR5[]){FUN3(43), FUN4(((VAR6[]){{"", FUN5("")}, {"", FUN3(32)}, {}})), FUN2(((VAR5[]){{}})), FUN3(42), {}})),
                      },
                      {}};
    for (VAR1 = 0; VAR4[VAR1].VAR2; VAR1++)
    {
        VAR7 *VAR8;
        VAR9 *VAR10;
        VAR8 = FUN6(VAR4[VAR1].VAR2, NULL);
        FUN7(FUN8(&VAR4[VAR1].VAR3, VAR8) == 1);
        VAR10 = FUN9(VAR8);
        FUN10(VAR8);
        VAR8 = FUN6(FUN11(VAR10), NULL);
        FUN7(FUN8(&VAR4[VAR1].VAR3, VAR8) == 1);
        FUN10(VAR8);
        FUN12(VAR10);
    }
}