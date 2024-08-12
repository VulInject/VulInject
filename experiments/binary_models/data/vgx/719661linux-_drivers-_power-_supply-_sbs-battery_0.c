static int FUN1(struct VAR1 *VAR2, u8 VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
int VAR6 = VAR5->VAR7;
s32 VAR8 = 0;

while (VAR6 > 0) {
VAR8 = FUN3(VAR2, VAR3);
if (VAR8 >= 0)
break;
VAR6--;
}

if (VAR8 < 0) {
FUN4(&VAR2->VAR9,
"",
VAR10, VAR3);
return VAR8;
}

return VAR8;
}