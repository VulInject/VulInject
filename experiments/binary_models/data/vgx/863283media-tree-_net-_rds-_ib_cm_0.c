static VAR1 FUN1(struct VAR2 *VAR3)
{
const struct VAR4 *VAR5 = VAR3->VAR6.VAR7.VAR8;
u16 VAR9;
u32 VAR10 = 0;




if (!VAR3->VAR6.VAR7.VAR11) {
FUN2(VAR12 ""
"");
return 0;
}


if (VAR3->VAR6.VAR7.VAR11 < sizeof (*VAR5) ||
VAR5->VAR13 == 0)
return VAR14;

VAR9 = FUN3(VAR5->VAR15) & VAR16;
if (VAR5->VAR13 == 3 && VAR9) {
VAR10 = VAR14;
while ((VAR9 >>= 1) != 0)
VAR10++;
} else
FUN4(VAR12 "",
&VAR5->VAR17,
VAR5->VAR13,
VAR5->VAR18);
return VAR10;
}