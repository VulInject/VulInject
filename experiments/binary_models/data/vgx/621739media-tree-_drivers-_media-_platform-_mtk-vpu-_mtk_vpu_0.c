static int FUN1(struct VAR1 *VAR2)
{

FUN2(VAR2, 0x0, VAR3);


VAR2->VAR4 = (__force struct VAR5 *)(VAR2->VAR6.VAR7 +
VAR8);
VAR2->VAR9 = VAR2->VAR4 + 1;
memset(VAR2->VAR4, 0, sizeof(struct VAR5));
memset(VAR2->VAR9, 0, sizeof(struct VAR5));

return 0;
}