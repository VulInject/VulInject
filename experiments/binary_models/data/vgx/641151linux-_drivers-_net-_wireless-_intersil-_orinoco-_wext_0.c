static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
union VAR5 *VAR6,
char *VAR7)
{
struct VAR8 *VAR9 = &VAR6->VAR10;
struct VAR11 *VAR12 = FUN2(VAR2);
int VAR13 = (VAR9->VAR14 & VAR15) - 1;
int VAR16 = VAR12->VAR17;
enum orinoco_alg VAR18 = VAR12->VAR18;
int VAR19 = VAR12->VAR20;
int VAR21 = -VAR22;		
unsigned long VAR14;

if (!VAR12->VAR23)
return -VAR24;

if (VAR9->VAR25) {

if (VAR9->VAR26 > VAR27)
return -VAR28;

if ((VAR9->VAR26 > VAR29) && !VAR12->VAR30)
return -VAR28;
}

if (FUN3(VAR12, &VAR14) != 0)
return -VAR31;


if ((VAR12->VAR32) && (VAR12->VAR18 == VAR33))
(void) FUN4(VAR12, VAR16);

if (VAR9->VAR26 > 0) {
if ((VAR13 < 0) || (VAR13 >= VAR34))
VAR13 = VAR12->VAR17;


if (VAR18 != VAR35) {
VAR16 = VAR13;
VAR18 = VAR35;
}
} else {

if ((VAR13 < 0) || (VAR13 >= VAR34)) {
if ((VAR13 != -1) || (VAR9->VAR14 == 0)) {
VAR21 = -VAR36;
goto VAR37;
}
} else {

if (VAR12->VAR38[VAR13].VAR39 == 0) {
VAR21 = -VAR36;
goto VAR37;
}
VAR16 = VAR13;
}
}

if (VAR9->VAR14 & VAR40)
VAR18 = VAR41;
if (VAR9->VAR14 & VAR42)
VAR19 = 0;
if (VAR9->VAR14 & VAR43)
VAR19 = 1;

if (VAR9->VAR25 && VAR9->VAR26 > 0) {
VAR21 = FUN5(VAR12, VAR13, VAR35, VAR7,
VAR9->VAR26, NULL, 0);
}
VAR12->VAR17 = VAR16;


if ((VAR12->VAR18 == VAR18) &&
(VAR12->VAR20 == VAR19) &&
FUN6(VAR2)) {
VAR21 = FUN7(VAR12);

goto VAR37;
}

VAR12->VAR18 = VAR18;
VAR12->VAR20 = VAR19;

VAR37:
FUN8(VAR12, &VAR14);

return VAR21;
}