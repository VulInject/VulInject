static bool
FUN1(struct VAR1 *VAR1, struct VAR2 *VAR2,
const struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7.VAR6;
const struct VAR8 *VAR9 = NULL;
struct ipp_prescale_params VAR10 = { 0 };
bool VAR11 = true;

if (VAR6 == NULL)
return false;

if (VAR4->VAR12)
VAR9 = VAR4->VAR12;

FUN2(&VAR10, VAR4);
VAR6->VAR13->FUN3(VAR6, &VAR10);

if (VAR4->VAR14 &&
!VAR4->VAR14->VAR15 &&
FUN4(VAR4->VAR16))
VAR6->VAR13->FUN5(VAR6, VAR4->VAR14);

if (VAR9 == NULL) {

VAR6->VAR13->FUN6(VAR6, VAR17);
} else if (VAR9->VAR18 == VAR19) {
switch (VAR9->VAR9) {
case VAR20:
VAR6->VAR13->FUN6(VAR6, VAR17);
break;
case VAR21:
VAR6->VAR13->FUN6(VAR6, VAR22);
break;
case VAR23:
VAR6->VAR13->FUN6(VAR6, VAR24);
break;
case VAR25:
default:
VAR11 = false;
break;
}
} else if (VAR9->VAR18 == VAR26) {
VAR6->VAR13->FUN6(VAR6, VAR24);
} else {

VAR11 = false;
}

return VAR11;
}