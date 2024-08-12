static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    static const OptionGroupDef VAR6 = {""};
    int VAR7;
    memset(VAR2, 0, sizeof(*VAR2));
    VAR2->VAR5 = VAR5;
    VAR2->VAR4 = FUN2(sizeof(*VAR2->VAR4) * VAR2->VAR5);
    if (!VAR2->VAR4)
        FUN3(1);
    for (VAR7 = 0; VAR7 < VAR2->VAR5; VAR7++)
        VAR2->VAR4[VAR7].VAR8 = &VAR4[VAR7];
    VAR2->VAR9.VAR8 = &VAR6;
    VAR2->VAR9.VAR10 = "";
    FUN4();
}