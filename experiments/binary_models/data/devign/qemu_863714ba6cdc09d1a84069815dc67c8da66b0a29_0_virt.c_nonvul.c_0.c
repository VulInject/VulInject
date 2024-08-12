static void FUN1(const VAR1 *VAR2)
{
    void *VAR3 = VAR2->VAR3;
    VAR4 *VAR5 = FUN2(FUN3(0));
    if (FUN4())
    {
        uint32_t VAR6;
        uint32_t VAR7;
        uint32_t VAR8;
        uint32_t VAR9;
        FUN5(VAR3, "");
        if (VAR5->VAR10 == 2)
        {
            const char VAR11[] = "";
            FUN6(VAR3, "", "", VAR11, sizeof(VAR11));
            VAR7 = VAR12;
            if (FUN7(&VAR5->VAR13, VAR14))
            {
                VAR6 = VAR15;
                VAR8 = VAR16;
                VAR9 = VAR17;
            }
            else
            {
                VAR6 = VAR18;
                VAR8 = VAR19;
                VAR9 = VAR20;
            }
        }
        else
        {
            FUN8(VAR3, "", "", "");
            VAR6 = VAR21;
            VAR7 = VAR22;
            VAR8 = VAR23;
            VAR9 = VAR24;
        }
        FUN8(VAR3, "", "", "");
        FUN9(VAR3, "", "", VAR6);
        FUN9(VAR3, "", "", VAR7);
        FUN9(VAR3, "", "", VAR8);
        FUN9(VAR3, "", "", VAR9);
    }
}