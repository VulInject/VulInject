static void FUN1(struct VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6)
{
    int VAR7;
    VAR4 *VAR8;
    switch (VAR3)
    {
    case VAR9:
        if (VAR6 >= 18 + 8 && VAR5[12] == 0x01 && VAR5[13] == 0x00)
        {
            VAR7 = 18;
            VAR2->VAR10.VAR11[0] = VAR5[VAR7 + 7];
            VAR2->VAR10.VAR11[1] = VAR5[VAR7 + 6];
            VAR2->VAR10.VAR11[2] = VAR5[VAR7 + 4];
            VAR2->VAR10.VAR11[3] = VAR5[VAR7 + 0];
            VAR2->VAR10.VAR11[4] = VAR5[VAR7 + 3];
            VAR2->VAR10.VAR11[5] = VAR5[VAR7 + 2];
            VAR2->VAR12->FUN2(VAR2->VAR12, VAR2->VAR10.VAR11);
            fprintf(VAR13, ""
                            "",
                    VAR14, VAR2->VAR10.VAR11[0], VAR2->VAR10.VAR11[1], VAR2->VAR10.VAR11[2], VAR2->VAR10.VAR11[3], VAR2->VAR10.VAR11[4], VAR2->VAR10.VAR11[5]);
        }
        VAR8 = FUN3(VAR2, VAR15, 11);
        VAR8[9] = 0x00;
        VAR8[10] = 0x00;
        break;
    default:
        fprintf(VAR13, "", VAR14);
        return;
    }
    FUN4(VAR2);
}