static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3)
{
int VAR4;
VAR5 *VAR6;



if (VAR3->VAR7 < 8)
return;

VAR6 = VAR3->VAR8;

VAR4 = !!(VAR6[0] & 0x40);
if (FUN2(VAR2->VAR9) != VAR4) {
FUN3(VAR2, VAR4, 1);
FUN4(VAR2->VAR9, "", VAR4);
}
}