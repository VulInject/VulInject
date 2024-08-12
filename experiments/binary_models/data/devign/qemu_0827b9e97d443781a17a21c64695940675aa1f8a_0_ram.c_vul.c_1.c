static int FUN1(void)
{
    int64_t VAR1;
    VAR2 = 0;
    VAR3 = 0;
    FUN2();
    FUN3(&VAR4);
    if (FUN4())
    {
        FUN5();
        VAR5 = FUN6(VAR6);
        VAR7.VAR8 = FUN7(FUN8() / VAR6, VAR6);
        if (!VAR7.VAR8)
        {
            FUN9();
            FUN10("");
            return -1;
        }
        FUN9();
        VAR7.VAR9 = FUN11(VAR6);
        if (!VAR7.VAR9)
        {
            FUN10("");
            return -1;
        }
        VAR7.VAR10 = FUN12(VAR6);
        if (!VAR7.VAR10)
        {
            FUN10("");
            FUN13(VAR7.VAR9);
            VAR7.VAR9 = NULL;
            return -1;
        }
        FUN14();
    }
    FUN15();
    FUN16();
    FUN17();
    VAR11 = 0;
    FUN18();
    VAR1 = FUN19() >> VAR12;
    VAR13 = FUN20(struct VAR14, 1);
    VAR13->VAR15 = FUN21(VAR1);
    FUN22(VAR13->VAR15, 0, VAR1);
    if (FUN23())
    {
        VAR13->VAR16 = FUN21(VAR1);
        FUN22(VAR13->VAR16, 0, VAR1);
    }
    VAR17 = FUN24() >> VAR12;
    FUN25();
    FUN26();
    FUN27();
    FUN28();
    FUN29();
    return 0;
}