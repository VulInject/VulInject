struct VAR1 *FUN1(struct VAR2 *VAR3, struct VAR4 *VAR4)
{
struct VAR5 *VAR6 = VAR4->VAR7;
struct VAR1 *VAR8;

while (VAR6) {
if (!VAR6->VAR9) {
VAR6 = VAR6->VAR10;
continue;
}
VAR8 = FUN2(VAR6);
if (VAR8->VAR11.VAR9) {
FUN3(VAR4, &VAR6->VAR12->VAR13);
return VAR8;
}
VAR6 = VAR6->VAR10;
}
FUN3(VAR4,
&FUN4(VAR3->VAR14)->VAR12->VAR13);
return VAR3->VAR14;
}