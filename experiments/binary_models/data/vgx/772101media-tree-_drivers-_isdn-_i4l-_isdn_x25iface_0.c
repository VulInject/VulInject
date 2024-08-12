static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
enum VAR5 *VAR6
= &(((VAR7 *)(VAR2->VAR8))->VAR9);
FUN2(""
, FUN3(VAR2->VAR10));
if (*VAR6 == VAR11) {
FUN4(VAR12
""
, FUN3(VAR2->VAR10));
return -1;
}
*VAR6 = VAR13;

VAR4 = FUN5(1);
if (VAR4) {
*(FUN6(VAR4, 1)) = VAR14;
VAR4->VAR15 = FUN7(VAR4, VAR2->VAR10);
FUN8(VAR4);
return 0;
} else {
FUN4(VAR12 ""
"");
VAR2->VAR16->FUN9(VAR2);
return -1;
}
}