static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    for (VAR3 = 0; VAR3 < VAR2->VAR5##VAR6##VAR7; VAR3++)
    {
        if (VAR2->VAR6##VAR7[VAR3]->VAR8 == VAR9)
        {
            VAR10 *VAR11 = VAR2->VAR6##VAR7[VAR3]->VAR12##VAR13;
            for (VAR4 = 0; VAR4 < VAR11->VAR14; VAR4++)
                if (FUN2(VAR11->VAR15[VAR4]))
                    FUN3(#VAR16 "", VAR3, VAR2->VAR17->VAR6##VAR7[VAR3].VAR18, FUN2(VAR11->VAR15[VAR4]));
        }
        else if (VAR2->VAR6##VAR7[VAR3]->VAR8 == VAR19)
        {
            VAR10 *VAR11;
            VAR20 *VAR21;
            VAR11 = VAR2->VAR6##VAR7[VAR3]->VAR12##VAR13;
            for (VAR4 = 0; VAR4 < VAR11->VAR14; VAR4++)
                FUN3(#VAR16 "", VAR3, VAR2->VAR17->VAR6##VAR7[VAR3].VAR18, FUN4(VAR11->VAR15[VAR4]));
            VAR21 = VAR2->VAR6##VAR7[VAR3]->VAR12##VAR22;
            for (VAR4 = 0; VAR4 < VAR21->VAR23; VAR4++)
            {
                char VAR24[256];
                FUN5(VAR24, sizeof(VAR24), -1, VAR21->VAR25[VAR4]);
                FUN3(#VAR16 "", VAR3, VAR2->VAR17->VAR6##VAR7[VAR3].VAR18, VAR24);
            }
        }
    }
    FUN6(VAR26, VAR27, VAR28);
    FUN6(VAR27, VAR26, VAR29);
}