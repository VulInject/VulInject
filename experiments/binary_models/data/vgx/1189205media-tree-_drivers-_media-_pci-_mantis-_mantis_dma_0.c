}
FUN1(VAR1);

static inline int FUN2(struct VAR2 *VAR3)
{
if (!VAR3->VAR4) {
VAR3->VAR4 = FUN3(VAR3->VAR5,
VAR6,
&VAR3->VAR7);
if (!VAR3->VAR4) {
FUN4(VAR8, 1,
"");

goto VAR9;
}
FUN4(VAR8, 1,
"",
(unsigned long) VAR3->VAR7,
VAR3->VAR4, VAR6);
}
if (!VAR3->VAR10) {
VAR3->VAR10 = FUN3(VAR3->VAR5,
VAR11,
&VAR3->VAR12);

if (!VAR3->VAR10) {
FUN4(VAR8, 1,
"");

FUN5(VAR3);

goto VAR9;
}
FUN4(VAR8, 1,
"",
(unsigned long) VAR3->VAR12,
VAR3->VAR10, VAR11);
}

return 0;
VAR9:
FUN4(VAR8, 1, "");
return -VAR13;
}