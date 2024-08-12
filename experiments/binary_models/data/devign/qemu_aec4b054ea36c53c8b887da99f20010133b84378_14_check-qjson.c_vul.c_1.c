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
                          .VAR3 = FUN2(((VAR5[]){FUN3(43), {}})),
                      },
                      {
                          .VAR2 = "",
                          .VAR3 = FUN2(((VAR5[]){{}})),
                      },
                      {
                          .VAR2 = "",
                          .VAR3 = FUN2(((VAR5[]){
                              FUN4(((VAR6[]){
                                  {},
                              })),
                              {},
                          })),
                      },
                      {}};
    for (VAR1 = 0; VAR4[VAR1].VAR2; VAR1++)
    {
        VAR7 *VAR8;
        VAR9 *VAR10;
        VAR8 = FUN5(VAR4[VAR1].VAR2, NULL);
        FUN6(FUN7(&VAR4[VAR1].VAR3, VAR8) == 1);
        VAR10 = FUN8(VAR8);
        FUN9(VAR8);
        VAR8 = FUN5(FUN10(VAR10), NULL);
        FUN6(FUN7(&VAR4[VAR1].VAR3, VAR8) == 1);
        FUN9(VAR8);
        FUN11(VAR10);
    }
}