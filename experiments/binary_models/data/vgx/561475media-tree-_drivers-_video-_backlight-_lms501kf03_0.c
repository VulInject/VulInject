static int FUN1(struct VAR1 *VAR2)
{
int VAR3 = 0;
struct VAR4 *VAR5;

VAR5 = VAR2->VAR6;

VAR3 = FUN2(VAR2);
if (VAR3) {
FUN3(VAR2->VAR7, "");
return -VAR8;
}

FUN4(VAR5->VAR9);

VAR5->FUN5(VAR2->VAR10, 0);

return 0;
}