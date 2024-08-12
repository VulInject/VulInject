signed int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3, signed int VAR4, u8 VAR5, bool VAR6)
{
u8 VAR7;
struct VAR8		*VAR9;
struct VAR10	*VAR11;
struct VAR12 	*VAR13 = &(VAR1->VAR14);
signed int	VAR15 = VAR16;

VAR11 = FUN2(sizeof(struct VAR10));
if (!VAR11) {
VAR15 = VAR17;
goto VAR18;
}

if (VAR3->VAR19 == VAR20)
VAR11->VAR21 = (unsigned char)VAR3->VAR22;
else
VAR11->VAR21 = (VAR23)VAR3->VAR24;

VAR11->VAR4 = (VAR23)VAR4;
VAR11->VAR5 = VAR5;
if (FUN3(VAR11->VAR21))
VAR1->VAR25.VAR26 |= FUN4(VAR11->VAR4);

switch (VAR11->VAR21) {

case VAR27:
VAR7 = 5;
memcpy(&(VAR11->VAR28[0]), &(VAR3->VAR29[VAR4].VAR30[0]), VAR7);
break;
case VAR31:
VAR7 = 13;
memcpy(&(VAR11->VAR28[0]), &(VAR3->VAR29[VAR4].VAR30[0]), VAR7);
break;
case VAR32:
VAR7 = 16;
memcpy(&VAR11->VAR28, &VAR3->VAR33[VAR4], VAR7);
VAR11->VAR34 = 1;
break;
case VAR35:
VAR7 = 16;
memcpy(&VAR11->VAR28, &VAR3->VAR33[VAR4], VAR7);
VAR11->VAR34 = 1;
break;
default:
VAR15 = VAR17;
FUN5(VAR11);
goto VAR18;
}

if (VAR6) {
VAR9 = FUN2(sizeof(struct VAR8));
if (!VAR9) {
FUN5(VAR11);
VAR15 = VAR17;  
goto VAR18;
}

VAR9->VAR36 = VAR37;
VAR9->VAR38 = (VAR23 *)VAR11;
VAR9->VAR39 =  (sizeof(struct VAR10));
VAR9->VAR40 = NULL;
VAR9->VAR41 = 0;

FUN6(&VAR9->VAR42);

VAR15 = FUN7(VAR13, VAR9);
} else {
FUN8(VAR1, (VAR23 *)VAR11);
FUN5(VAR11);
}
VAR18:
return VAR15;
}