static unsigned int FUN1(
const struct VAR1 *VAR2)
{
u32 VAR3;
unsigned int VAR4;

if (VAR2->VAR5 && VAR2->FUN2())
return VAR6;

VAR3 = FUN3(VAR7 + VAR8);

if (VAR2->VAR9 && VAR2->FUN4(VAR3))
return VAR10;

if (VAR2->VAR11 && VAR2->FUN5(VAR3))
return VAR12;

VAR4 = VAR3 >> VAR2->VAR13;

FUN6(!FUN7(*VAR2->VAR14));
VAR4 &= *VAR2->VAR14 - 1;

return VAR2->VAR15[VAR4].VAR16;
}