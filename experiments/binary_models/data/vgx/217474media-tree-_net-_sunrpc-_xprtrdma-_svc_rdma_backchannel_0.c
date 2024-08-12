static int
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5;
size_t VAR6 = VAR4->VAR7;
struct VAR8 *VAR8;

if (VAR6 > VAR9) {
FUN2(1, "",
VAR6);
return -VAR10;
}


VAR8 = FUN3(VAR11);
if (!VAR8)
return -VAR12;
VAR4->VAR13 = FUN4(VAR8);

VAR4->VAR14 = FUN5(VAR4->VAR15, VAR11);
if (!VAR4->VAR14) {
FUN6(VAR8);
return -VAR12;
}
return 0;
}