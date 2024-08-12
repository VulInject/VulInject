int FUN1(struct VAR1 *VAR1,
int VAR2, u8 VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR1);
int VAR6;


if (VAR1->VAR7) {
FUN3(&VAR5->VAR8, "");
return -1;
}

if (FUN4(VAR1) && !VAR1->VAR9) {
FUN5(&VAR5->VAR8,
"");
VAR1->VAR9 = true;
return 0;
}

VAR6 = FUN6(VAR1->VAR10,
VAR1->VAR11,
VAR2);
if (VAR6 > 0) {
if (FUN4(VAR1) &&
!FUN7(VAR1,
FUN8(VAR1, VAR6 - 1),
VAR3)) {
FUN5(&VAR5->VAR8,
"");
return 0;
}
VAR1->VAR12 = FUN8(VAR1, VAR6 - 1);
VAR1->VAR13 = VAR3;
} else if (VAR3 > 1) {
if (FUN4(VAR1) &&
!FUN7(VAR1,
FUN9(VAR1),
VAR3 >> 1)) {
FUN5(&VAR5->VAR8,
"");
return 0;
}
VAR1->VAR12 = FUN9(VAR1);
VAR1->VAR13 = VAR3 >> 1;
} else {
FUN3(&VAR5->VAR8, "");
return -1;
}

return 0;
}