static inline int FUN1(struct VAR1 *VAR2)
{
if (!VAR2->VAR3) {
VAR2->VAR3 = FUN2(VAR2->VAR4,
VAR5,
&VAR2->VAR6);
if (!VAR2->VAR3) {
FUN3(VAR7, 1,
"");

goto VAR8;
}
FUN3(VAR7, 1,
"",
(unsigned long) VAR2->VAR6,
VAR2->VAR3, VAR5);
}
if (!VAR2->VAR9) {
VAR2->VAR9 = FUN2(VAR2->VAR4,
VAR10,
&VAR2->VAR11);

if (!VAR2->VAR9) {
FUN3(VAR7, 1,
"");

FUN4(VAR2);

goto VAR8;
}
FUN3(VAR7, 1,
"",
(unsigned long) VAR2->VAR11,
VAR2->VAR9, VAR10);
}

return 0;
VAR8:
FUN3(VAR7, 1, "");
return -VAR12;
}