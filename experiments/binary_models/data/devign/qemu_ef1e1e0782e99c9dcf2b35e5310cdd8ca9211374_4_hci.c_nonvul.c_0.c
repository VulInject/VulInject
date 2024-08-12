static void FUN1(struct VAR1 *VAR2)
{
    VAR2->VAR3 = 0;
    VAR2->VAR4 = 0;
    VAR2->VAR5.VAR6 = 0;
    VAR2->VAR7[0] = 0xff;
    VAR2->VAR7[1] = 0xff;
    VAR2->VAR7[2] = 0xff;
    VAR2->VAR7[3] = 0xff;
    VAR2->VAR7[4] = 0xff;
    VAR2->VAR7[5] = 0x1f;
    VAR2->VAR7[6] = 0x00;
    VAR2->VAR7[7] = 0x00;
    VAR2->VAR8.VAR9 = 0;
    VAR2->VAR8.VAR10 = 0;
    FUN2((void *)VAR2->VAR8.VAR11);
    VAR2->VAR8.VAR11 = NULL;
    VAR2->VAR8.class[0] = 0x00;
    VAR2->VAR8.class[1] = 0x00;
    VAR2->VAR8.class[2] = 0x00;
    VAR2->VAR12 = 0x0000;
    VAR2->VAR13 = 0x1f40;
    VAR2->VAR5.VAR14 = 0x00;
    VAR2->VAR15 = 0x000;
    VAR2->VAR16 = 0x000;
    FUN3(VAR2->VAR5.VAR17);
    FUN3(VAR2->VAR5.VAR18);
    FUN3(VAR2->VAR19);
}