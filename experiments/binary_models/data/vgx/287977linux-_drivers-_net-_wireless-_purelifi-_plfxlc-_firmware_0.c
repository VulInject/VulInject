int FUN1(struct VAR1 *VAR2,
unsigned char *VAR3,
unsigned char *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
unsigned long long VAR7;
unsigned char *VAR8 = NULL;

VAR8 = FUN3(VAR9, VAR10);
if (!VAR8)
return -VAR11;

FUN4(VAR12 > VAR9);
FUN4(VAR13 > VAR9);

FUN5(VAR6, VAR14, VAR8,
VAR12);

memcpy(VAR3, VAR8, VAR12);

FUN5(VAR6, VAR15,
VAR8, VAR9);

FUN5(VAR6, VAR15,
VAR8, VAR9);

memcpy(VAR4, VAR8, VAR9);

memset(VAR8, 0x00, VAR9);

FUN5(VAR6, VAR16,
(unsigned char *)VAR8, VAR13);

memcpy(&VAR7, VAR8, VAR13);

FUN6(&VAR2->VAR17, "", VAR7);
FUN7(VAR8);

FUN8(&VAR2->VAR17, "", VAR3);

return 0;
}