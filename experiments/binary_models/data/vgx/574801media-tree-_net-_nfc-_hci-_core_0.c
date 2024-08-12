static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3,
struct VAR4 *VAR5, data_exchange_cb_t VAR6,
void *VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR1);
int VAR10;

FUN3("", VAR3->VAR11);

switch (VAR3->VAR12) {
case VAR13:
case VAR14:
if (VAR9->VAR15->VAR16) {
VAR10 = VAR9->VAR15->FUN4(VAR9, VAR3, VAR5, VAR6,
VAR7);
if (VAR10 <= 0)	
break;
}

*FUN5(VAR5, 1) = 0;	

VAR9->VAR17 = VAR18;
VAR9->VAR19 = VAR6;
VAR9->VAR20 = VAR7;

VAR10 = FUN6(VAR9, VAR3->VAR12,
VAR21, VAR5->VAR22,
VAR5->VAR23, VAR24, VAR9);
break;
default:
if (VAR9->VAR15->VAR16) {
VAR10 = VAR9->VAR15->FUN4(VAR9, VAR3, VAR5, VAR6,
VAR7);
if (VAR10 == 1)
VAR10 = -VAR25;
} else {
VAR10 = -VAR25;
}
break;
}

FUN7(VAR5);

return VAR10;
}