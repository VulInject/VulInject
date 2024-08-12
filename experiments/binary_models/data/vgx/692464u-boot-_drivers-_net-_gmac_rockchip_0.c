static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
const char *VAR5;

VAR5 = FUN3(VAR2, "");
if (!strcmp(VAR5, ""))
VAR4->VAR6 = true;
else
VAR4->VAR6 = false;


VAR4->VAR7 = FUN4(VAR2, "", -VAR8);
VAR4->VAR9 = FUN4(VAR2, "", -VAR8);


if (VAR4->VAR7 == -VAR8)
VAR4->VAR7 = FUN4(VAR2, "", 0x30);
if (VAR4->VAR9 == -VAR8)
VAR4->VAR9 = FUN4(VAR2, "", 0x10);

return FUN5(VAR2);
}