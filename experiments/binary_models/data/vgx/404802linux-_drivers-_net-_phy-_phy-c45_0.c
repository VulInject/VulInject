int FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR3 = FUN2(VAR2);
if (VAR3)
return VAR3;

VAR2->VAR4 = VAR5;
VAR2->VAR6 = VAR7;
VAR2->VAR8 = 0;
VAR2->VAR9 = 0;

if (VAR2->VAR10 == VAR11) {
VAR3 = FUN3(VAR2);
if (VAR3)
return VAR3;

if (FUN4(VAR2)) {
VAR3 = FUN5(VAR2);
if (VAR3 < 0)
return VAR3;
}

FUN6(VAR2);
} else {
VAR3 = FUN7(VAR2);
}

return VAR3;
}