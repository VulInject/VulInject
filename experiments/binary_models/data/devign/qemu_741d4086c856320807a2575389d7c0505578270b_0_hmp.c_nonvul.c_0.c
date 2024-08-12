void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR6 = FUN2(NULL);
    if (VAR6)
    {
        assert(VAR6->VAR7);
        FUN3(VAR2, "", FUN4(VAR8), VAR6->VAR9);
        assert(VAR6->VAR10);
        FUN3(VAR2, "", FUN4(VAR11), VAR6->VAR12);
        assert(VAR6->VAR13);
        FUN3(VAR2, "", FUN4(VAR14), VAR6->VAR15);
        assert(VAR6->VAR16);
        FUN3(VAR2, "", FUN4(VAR17), VAR6->VAR18);
        assert(VAR6->VAR19);
        FUN3(VAR2, "", FUN4(VAR20), VAR6->VAR21);
        assert(VAR6->VAR22);
        FUN3(VAR2, "", FUN4(VAR23), VAR6->VAR24);
        assert(VAR6->VAR25);
        FUN3(VAR2, "", FUN4(VAR26), VAR6->VAR27);
        assert(VAR6->VAR28);
        FUN3(VAR2, "" VAR29 "", FUN4(VAR30), VAR6->VAR31);
        assert(VAR6->VAR32);
        FUN3(VAR2, "" VAR29 "", FUN4(VAR33), VAR6->VAR34);
        assert(VAR6->VAR35);
        FUN3(VAR2, "", FUN4(VAR36), VAR6->VAR37);
        assert(VAR6->VAR38);
        FUN3(VAR2, "", FUN4(VAR39), VAR6->VAR40 ? "" : "");
        FUN3(VAR2, "", FUN4(VAR41), VAR6->VAR42);
        FUN3(VAR2, "", FUN4(VAR43), VAR6->VAR44);
        FUN3(VAR2, "" VAR29 "", FUN4(VAR45), VAR6->VAR46);
    }
    FUN5(VAR6);
}