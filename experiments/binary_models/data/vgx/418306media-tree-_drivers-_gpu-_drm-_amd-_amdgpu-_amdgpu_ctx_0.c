int FUN1(struct VAR1 *VAR2, void *VAR3,
struct VAR4 *VAR5)
{
int VAR6;
uint32_t VAR7;

union VAR8 *VAR9 = VAR3;
struct VAR10 *VAR11 = VAR2->VAR12;
struct VAR13 *VAR14 = VAR5->VAR15;

VAR6 = 0;
VAR7 = VAR9->VAR16.VAR17;

switch (VAR9->VAR16.VAR18) {
case VAR19:
VAR6 = FUN2(VAR11, VAR14, &VAR7);
VAR9->VAR20.VAR21.VAR17 = VAR7;
break;
case VAR22:
VAR6 = FUN3(VAR14, VAR7);
break;
case VAR23:
VAR6 = FUN4(VAR11, VAR14, VAR7, &VAR9->VAR20);
break;
default:
return -VAR24;
}

return VAR6;
}