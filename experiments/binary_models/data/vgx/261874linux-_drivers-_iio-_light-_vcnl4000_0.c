static int FUN1(struct VAR1 *VAR2)
{
int VAR3, VAR4;

VAR3 = FUN2(VAR2->VAR5, VAR6);
if (VAR3 < 0)
return VAR3;

VAR4 = VAR3 >> 4;
switch (VAR4) {
case VAR7:
if (VAR2->VAR8 != VAR9)
FUN3(&VAR2->VAR5->VAR10,
"");
break;
case VAR11:
if (VAR2->VAR8 != VAR12)
FUN3(&VAR2->VAR5->VAR10,
"");
break;
default:
return -VAR13;
}

VAR2->VAR14 = VAR3 & 0xf;
VAR2->VAR15 = 250000;
FUN4(&VAR2->VAR16);

return VAR2->VAR17->FUN5(VAR2, true);
};