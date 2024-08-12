static int FUN1(struct VAR1 *VAR2, u32 VAR3)
{
int VAR4;
u32 VAR5 = 0;

FUN2(VAR6, VAR3);
for (VAR4 = 0; VAR4 < VAR2->VAR7; VAR4++) {
if (FUN3(VAR8) != 0)
break;
FUN4(1);
}
VAR5 = FUN3(VAR8);

if (VAR5 != 1) {
if (VAR5 == 0xFF) {
FUN5("");
return -VAR9;
} else if (VAR5 == 0xFE) {
FUN5("");
return -VAR9;
}
}

return 0;
}