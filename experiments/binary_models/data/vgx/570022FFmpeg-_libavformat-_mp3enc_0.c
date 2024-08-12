static int FUN1(VAR1 *VAR2)
{
VAR3 *VAR4 = VAR2->VAR5;
VAR6 *const VAR7 = FUN2(VAR2)->VAR7;
int VAR8 = 0, write = 1;

FUN3(&VAR4->VAR9, VAR2->VAR10, VAR2->VAR11);
FUN4(VAR2);

while (VAR4->VAR12.VAR13) {
FUN5(&VAR4->VAR12, VAR7);
if (write && (VAR8 = FUN6(VAR2, VAR7)) < 0)
write = 0;
FUN7(VAR7);
}
return VAR8;
}