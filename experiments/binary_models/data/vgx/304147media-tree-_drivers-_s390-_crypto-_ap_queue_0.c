static enum VAR1 FUN1(struct VAR2 *VAR3)
{
struct ap_queue_status VAR4;

if (VAR3->VAR5 > 0 && VAR3->VAR6)

VAR4 = FUN2(VAR3);
else

VAR4 = FUN3(VAR3->VAR7, NULL);

if (VAR4.VAR8 == 1) {

VAR3->VAR9 = VAR10;
VAR3->VAR11 = (VAR3->VAR5 > 0) ?
VAR12 : VAR13;
}

switch (VAR4.VAR14) {
case VAR15:
if (VAR3->VAR5 > 0)
return VAR16;

case VAR17:
return VAR18;
default:
VAR3->VAR11 = VAR19;
return VAR20;
}
}


static VAR21 *VAR22[VAR23][VAR24] = {
[VAR25] = {
[VAR26] = VAR27,
[VAR28] = VAR29,
},
[VAR30] = {
[VAR26] = VAR31,
[VAR28] = VAR29,
},
[VAR32] = {
[VAR26] = VAR33,
[VAR28] = VAR29,
},
[VAR13] = {
[VAR26] = VAR34,
[VAR28] = VAR29,
},
[VAR12] = {
[VAR26] = VAR35,
[VAR28] = VAR27,
},
[VAR36] = {
[VAR26] = VAR37,
[VAR28] = VAR27,
},
[VAR38] = {
[VAR26] = VAR39,
[VAR28] = VAR29,
},
[VAR19] = {
[VAR26] = VAR29,
[VAR28] = VAR29,
},
};