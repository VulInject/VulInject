int FUN1(struct VAR1 *VAR2,
bool *VAR3,
bool *VAR4)
{
u8 VAR5;
u32 VAR6;
int VAR7;
u32 VAR8;


if (VAR3)
*VAR3 = true;


if (VAR4)
*VAR4 = false;

if (!VAR2->VAR9)
return FUN2(VAR2);

VAR7 = FUN3(VAR2);

if (VAR7 == -VAR10) {
FUN4(VAR2->VAR11,
"");
VAR7 = FUN5(VAR2,
VAR12,
&VAR8);
if (VAR7 < 0 || VAR8 == 0)

return -VAR10;

VAR2->VAR9 = FUN6(VAR8);
FUN4(VAR2->VAR11, "",
VAR2->VAR9 - 1);


VAR7 = FUN3(VAR2);
}

if (VAR7 <= 0)
return VAR7;

if (VAR4)
*VAR4 = VAR2->VAR13.VAR5 &
VAR14;
VAR2->VAR13.VAR5 &= VAR15;

if (VAR3) {
VAR5 = VAR2->VAR13.VAR5;
VAR6 = FUN7(VAR2);


if (VAR5 == VAR16) {
*VAR3 = false;
} else if (VAR6) {

if (VAR6 & FUN8(VAR17))
*VAR3 = false;

if (!(VAR6 & VAR2->VAR18))
*VAR3 = false;
}
}

return VAR7;
}