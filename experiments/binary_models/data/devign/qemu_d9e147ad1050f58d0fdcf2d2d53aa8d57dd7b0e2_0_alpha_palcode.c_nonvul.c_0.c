void FUN1(VAR1 *VAR2, int VAR3)
{
    target_long VAR4;
    if (VAR5 != NULL)
        fprintf(VAR5, "", VAR6, VAR3);
    switch (VAR3)
    {
    case 0x83:
        if (VAR5 != NULL)
            fprintf(VAR5, "" VAR7 "", VAR2->VAR8[0]);
        VAR4 = FUN2(VAR2, VAR2->VAR8[VAR9], VAR2->VAR8[VAR10], VAR2->VAR8[VAR11], VAR2->VAR8[VAR12], VAR2->VAR8[VAR13], VAR2->VAR8[VAR14], VAR2->VAR8[VAR15]);
        if (VAR4 >= 0)
        {
            VAR2->VAR8[VAR13] = 0;
            VAR2->VAR8[VAR9] = VAR4;
        }
        else
        {
            VAR2->VAR8[VAR13] = 1;
            VAR2->VAR8[VAR9] = -VAR4;
        }
        break;
    case 0x9E:
        VAR2->VAR8[VAR9] = VAR2->VAR16;
        if (VAR5 != NULL)
            fprintf(VAR5, "" VAR17 "", VAR2->VAR16);
        break;
    case 0x9F:
        VAR2->VAR16 = VAR2->VAR8[VAR10];
        if (VAR5 != NULL)
            fprintf(VAR5, "" VAR17 "", VAR2->VAR16);
        break;
    default:
        if (VAR5 != NULL)
            fprintf(VAR5, "", VAR6, VAR3);
        FUN3(1);
    }
}