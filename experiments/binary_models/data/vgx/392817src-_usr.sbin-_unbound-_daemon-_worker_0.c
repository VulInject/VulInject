static int
FUN1(struct VAR1* VAR1, struct VAR2* VAR3,
uint16_t VAR4, uint16_t VAR5, struct VAR6* VAR7, 
struct VAR8* VAR9)
{

uint16_t VAR10 = VAR9->VAR11;
int VAR12 = 0;
time_t VAR13 = *VAR1->VAR14.VAR15;
int VAR16 = (!(VAR5&VAR17) || VAR1->VAR14.VAR18->VAR19)
&& VAR1->VAR14.VAR20;
struct VAR21 *VAR22 = NULL;
struct VAR23 *VAR24;

VAR24 = FUN2(&VAR1->VAR14, VAR3->VAR25, 
VAR3->VAR26, VAR3->VAR27, VAR3->VAR28,
VAR1->VAR29, &VAR22, VAR13, 0, NULL, 0);
if(!VAR24) { 
return 0;
}

VAR22->VAR3.VAR30 = VAR3->VAR30;
if(VAR16) {
switch(FUN3(VAR22->VAR31)) {
case VAR32:

return 0;
case VAR33:
case VAR34:

VAR9->VAR35 = VAR36;
VAR9->VAR11 = VAR37;
VAR9->VAR38 = 0;
VAR9->VAR39 &= VAR40;
if(!FUN4(&VAR1->VAR14, VAR3, NULL,
VAR22->VAR31, VAR41, VAR9, VAR7, VAR1->VAR29,
VAR1->VAR14.VAR42))
return 0;

if (VAR1->VAR14.VAR18->VAR43) {
FUN5(&VAR9->VAR44,
VAR1->VAR29, VAR45, "");
}
FUN6(VAR7->VAR46->VAR47, VAR41, 
&VAR22->VAR3, VAR4, VAR5, VAR9);
if(VAR1->VAR48.VAR49) {
VAR1->VAR48.VAR50++;
VAR1->VAR48.VAR51[VAR41]++;
}
return 1;
case VAR52:


if(VAR1->VAR14.VAR18->VAR53)
FUN7(VAR22->VAR31);
VAR12 = 1;
break;
case VAR54:
case VAR55:
default:

VAR12 = 0;
break;
}
}

VAR9->VAR35 = VAR36;
VAR9->VAR11 = VAR37;
VAR9->VAR38 = 0;
VAR9->VAR39 &= VAR40;
if(!FUN8(&VAR1->VAR14, VAR3, NULL, VAR22->VAR31,
(int)(VAR5&VAR56), VAR9, VAR7, VAR1->VAR29,
VAR1->VAR14.VAR42))
return 0;
VAR22->VAR31->VAR5 |= VAR57|VAR58;
if(!FUN9(&VAR22->VAR3, VAR22->VAR31, VAR4, VAR5,
VAR7->VAR46->VAR47, 0, 1, VAR1->VAR29,
VAR10, VAR9, (int)(VAR9->VAR39 & VAR40), VAR12)) {
if(!FUN4(&VAR1->VAR14, VAR3, NULL, NULL,
VAR41, VAR9, VAR7, VAR1->VAR29,
VAR1->VAR14.VAR42))
VAR9->VAR59 = NULL;
FUN6(VAR7->VAR46->VAR47, VAR41, 
&VAR22->VAR3, VAR4, VAR5, VAR9);
}
if(VAR1->VAR48.VAR49) {
if(VAR12) VAR1->VAR48.VAR60++;
FUN10(&VAR1->VAR48, VAR7->VAR46->VAR47);
}
return 1;
}