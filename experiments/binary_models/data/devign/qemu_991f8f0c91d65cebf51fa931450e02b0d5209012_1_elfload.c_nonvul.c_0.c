static void FUN1(struct VAR1 *VAR2, int VAR3, uint16_t VAR4, uint32_t VAR5)
{
    (void)memset(VAR2, 0, sizeof(*VAR2));
    (void)memcpy(VAR2->VAR6, VAR7, VAR8);
    VAR2->VAR6[VAR9] = VAR10;
    VAR2->VAR6[VAR11] = VAR12;
    VAR2->VAR6[VAR13] = VAR14;
    VAR2->VAR6[VAR15] = VAR16;
    VAR2->VAR17 = VAR18;
    VAR2->VAR19 = VAR4;
    VAR2->VAR20 = VAR14;
    VAR2->VAR21 = sizeof(struct VAR1);
    VAR2->VAR22 = VAR5;
    VAR2->VAR23 = sizeof(struct VAR1);
    VAR2->VAR24 = sizeof(struct VAR25);
    VAR2->VAR26 = VAR3;
    FUN2(VAR2);
}