static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
struct s5p_mfc_cmd_args VAR5;
int VAR6;


FUN2(2, "", VAR2->VAR7);
VAR4->VAR8 = VAR2->VAR9;
memset(&VAR5, 0, sizeof(struct VAR10));
switch (VAR2->VAR7) {
case VAR11:
VAR5.VAR12[0] = VAR13;
break;
case VAR14:
VAR5.VAR12[0] = VAR15;
break;
case VAR16:
VAR5.VAR12[0] = VAR17;
break;
case VAR18:
VAR5.VAR12[0] = VAR19;
break;
case VAR20:
VAR5.VAR12[0] = VAR21;
break;
case VAR22:
VAR5.VAR12[0] = VAR23;
break;
case VAR24:
VAR5.VAR12[0] = VAR25;
break;
case VAR26:
VAR5.VAR12[0] = VAR27;
break;
case VAR28:
VAR5.VAR12[0] = VAR29;
break;
default:
VAR5.VAR12[0] = VAR30;
}
VAR5.VAR12[1] = 0; 
VAR5.VAR12[2] = VAR2->VAR2.VAR31;
VAR5.VAR12[3] = VAR2->VAR2.VAR32;
VAR6 = FUN3(VAR4, VAR33,
&VAR5);
if (VAR6) {
FUN4("");
VAR2->VAR34 = VAR35;
}
return VAR6;
}