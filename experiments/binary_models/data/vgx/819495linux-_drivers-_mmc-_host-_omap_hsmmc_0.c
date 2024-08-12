static struct VAR1 *FUN1(struct VAR2 *VAR3)
{
struct VAR1 *VAR4, *VAR5;
struct VAR6 *VAR7 = VAR3->VAR8;

VAR4 = FUN2(VAR3, sizeof(*VAR4), VAR9);
if (!VAR4)
return FUN3(-VAR10); 

VAR5 = FUN4(VAR3);
if (VAR5 && VAR5->VAR11)
VAR4->VAR11 = VAR5->VAR11;

if (FUN5(VAR7, "", NULL))
VAR4->VAR12 |= VAR13;

if (FUN5(VAR7, "", NULL)) {
VAR4->VAR14 = true;
VAR4->VAR15 = true;
}

if (FUN5(VAR7, "", NULL))
VAR4->VAR16 |= VAR17;

if (FUN5(VAR7, "", NULL))
VAR4->VAR16 |= VAR18;

return VAR4;
}