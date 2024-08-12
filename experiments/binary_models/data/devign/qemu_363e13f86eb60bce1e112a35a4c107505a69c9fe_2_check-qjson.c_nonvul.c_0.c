static void FUN1(void)
{
    int VAR1;
    struct
    {
        const char *VAR2;
        const char *VAR3;
        int VAR4;
    } VAR5[] = {{""\\VAR6\"", ""}, {""\\VAR7\"", ""}, {""\\VAR8\"", ""}, {""\\VAR9\"", ""}, {""\\VAR10\"", ""}, {""/\"", ""}, {""\\/\"", "", .VAR4 = 1}, {""\\\\\"", ""}, {""\\\""""\""}, {""hello VAR11 \\\""\"", ""embedded VAR12\""}, {""hello VAR11\\nwith new VAR13\"", ""}, {""single byte VAR14-8 \\VAR15\"", "", .VAR4 = 1}, {""double byte VAR14-8 \\VAR16\"", ""}, {""triple byte VAR14-8 \\VAR17\"", ""}, {"", "", .VAR4 = 1}, {"", "", .VAR4 = 1}, {"", "", .VAR4 = 1}, {"", "", .VAR4 = 1}, {"", "", .VAR4 = 1}, {"", "", .VAR4 = 1}, {"", "", .VAR4 = 1}, {}};
    for (VAR1 = 0; VAR5[VAR1].VAR2; VAR1++)
    {
        VAR18 *VAR19;
        VAR20 *VAR21;
        VAR19 = FUN2(VAR5[VAR1].VAR2);
        VAR21 = FUN3(VAR19);
        FUN4(VAR21);
        FUN5(FUN6(VAR21), ==, VAR5[VAR1].VAR3);
        if (VAR5[VAR1].VAR4 == 0)
        {
            VAR21 = FUN7(VAR19);
            FUN5(FUN6(VAR21), ==, VAR5[VAR1].VAR2);
            FUN8(VAR19);
        }
        FUN9(VAR21);
    }
}