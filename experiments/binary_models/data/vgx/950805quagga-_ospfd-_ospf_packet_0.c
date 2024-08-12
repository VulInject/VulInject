FUN1 (struct VAR1 * VAR2, const u_int16_t VAR3, const u_char VAR4)
{
unsigned VAR5;
struct VAR6 * VAR7;
if
(
VAR2->VAR8 < VAR9 &&
VAR10[VAR2->VAR8] &&
VAR3 < VAR11 + VAR10[VAR2->VAR8]
)
{
if (FUN2 (0, VAR12))
FUN3 ("",
VAR13, VAR3, FUN4 (VAR14, VAR2->VAR8));
return VAR15;
}
switch (VAR2->VAR8)
{
case VAR16:

if (VAR4)
{
VAR5 = (VAR3 - VAR11 - VAR17) % 4 ? VAR15 : VAR18;
break;
}
VAR7 = (struct VAR6 *) VAR2;
VAR5 = VAR19
(
(struct VAR20 *) VAR7->VAR21,
VAR3 - VAR11 - 4, 
FUN5 (VAR7->VAR22) 
);
break;
case VAR23:

case VAR24:

VAR5 = (VAR3 - VAR11 - VAR25) % 12 ? VAR15 : VAR18;
break;

case VAR26:

case VAR27:
case VAR28:

case VAR29:
case VAR30:
case VAR31:

VAR5 = VAR3 % 4 ? VAR15 : VAR18;
break;
default:
if (FUN2 (0, VAR12))
FUN3 ("", VAR13, VAR2->VAR8);
return VAR15;
}
if (VAR5 != VAR18 && FUN2 (0, VAR12))
FUN3 ("",
VAR13, FUN4 (VAR14, VAR2->VAR8));
return VAR5;
}