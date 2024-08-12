static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
u32 VAR4;
int VAR5;

VAR5 = FUN2(VAR2->VAR6 + VAR7, VAR4,
VAR4 & VAR3, 0,
VAR8);
if (VAR5) {
FUN3(VAR2->VAR9, "", VAR3);
return -VAR10;
}

FUN4(VAR3, VAR2->VAR6 + VAR7);

return 0;
}