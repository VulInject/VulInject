static int FUN1(VAR1 *VAR2)
{
VAR3 *VAR4 = VAR2->VAR5;
VAR6 *const VAR7 = FUN2(VAR2)->VAR7;
int VAR8, write = 1;

VAR8 = FUN3(VAR2);
if (VAR8 < 0)
write = 0;

while (VAR4->VAR9.VAR10) {
FUN4(&VAR4->VAR9, VAR7);
if (write && (VAR8 = FUN5(VAR2, VAR7)) < 0)
write = 0;
FUN6(VAR7);
}
return VAR8;
}