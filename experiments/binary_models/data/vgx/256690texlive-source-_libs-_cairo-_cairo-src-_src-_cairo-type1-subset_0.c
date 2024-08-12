FUN1 (VAR1 *VAR2,
int                        VAR3,
const char                *VAR4,
int                        VAR5)
{
cairo_status_t VAR6;
unsigned char *VAR7;
const unsigned char *VAR8;
const unsigned char *VAR9;
int VAR10;

VAR7 = FUN2 (VAR5);
if (FUN3 (VAR7 == NULL))
return FUN4 (VAR11);

FUN5 ((const unsigned char *)
VAR4,
VAR5,
VAR7);
VAR8 = VAR7 + VAR5;
VAR9 = VAR7 + VAR2->VAR12;
VAR6 = VAR13;
while (VAR9 < VAR8) {
if (*VAR9 < 32) {
VAR10 = *VAR9++;
switch (VAR10) {
case VAR14:
case VAR15:
case VAR16:
case VAR17:
case VAR18:
case VAR19:
case VAR20:
case VAR21:
case VAR22:
case VAR23:
case VAR24:
case VAR25:
case VAR26:
case VAR27:
default:

VAR2->VAR28.VAR29 = 0;
break;

case VAR30:
if (VAR2->VAR31 && VAR2->VAR28.VAR29 > 0) {
double VAR32;
if (FUN6(VAR2->VAR28.VAR33[--VAR2->VAR28.VAR29], &VAR32) == 0.0) {
int VAR34 = VAR32;
if (VAR34 >= 0 && VAR34 < VAR2->VAR35) {
VAR2->VAR36[VAR34].VAR37 = VAR38;
VAR6 = FUN1 (
VAR2,
VAR3,
VAR2->VAR36[VAR34].VAR39,
VAR2->VAR36[VAR34].VAR40);
break;
}
}
}
VAR2->VAR31 = VAR41;
break;

case VAR42:
if (VAR2->VAR28.VAR29 < 2) {
VAR6 = VAR43;
goto VAR44;
}

VAR2->VAR45[VAR3].VAR46 = VAR2->VAR28.VAR33[1]/VAR2->VAR47.VAR48;
VAR2->VAR28.VAR29 = 0;
break;

case VAR49:
VAR10 = VAR10 << 8 | *VAR9++;
switch (VAR10) {
case VAR50:
case VAR51:
case VAR52:
case VAR53:
default:

VAR2->VAR28.VAR29 = 0;
break;

case VAR54:

if (VAR2->VAR28.VAR29 < 5) {
VAR6 = VAR43;
goto VAR44;
}

VAR6 = FUN7 (VAR2, VAR2->VAR28.VAR33[3]);
if (FUN3 (VAR6))
goto VAR44;

VAR6 = FUN7 (VAR2, VAR2->VAR28.VAR33[4]);
if (FUN3 (VAR6))
goto VAR44;

VAR2->VAR28.VAR29 = 0;
break;

case VAR55:
if (VAR2->VAR28.VAR29 < 4) {
VAR6 = VAR43;
goto VAR44;
}

VAR2->VAR45[VAR3].VAR46 = VAR2->VAR28.VAR33[2]/VAR2->VAR47.VAR48;
VAR2->VAR28.VAR29 = 0;
break;

case VAR56:
if (VAR2->VAR28.VAR29 < 2) {
VAR6 = VAR43;
goto VAR44;
} else {
double VAR57 = VAR2->VAR28.VAR33[VAR2->VAR28.VAR29 - 2];
double VAR58 = VAR2->VAR28.VAR33[VAR2->VAR28.VAR29 - 1];
VAR2->VAR28.VAR29--;
if (VAR58 == 0.0) {
VAR6 = VAR43;
goto VAR44;
}
VAR2->VAR28.VAR33[VAR2->VAR28.VAR29 - 1] = VAR57/VAR58;
}
break;

case VAR59:
if (VAR2->VAR28.VAR29 < 1) {
VAR6 = VAR43;
goto VAR44;
}

VAR2->VAR28.VAR29--;
VAR2->VAR60.VAR29 = 0;
while (VAR2->VAR28.VAR29)
VAR2->VAR60.VAR33[VAR2->VAR60.VAR29++] = VAR2->VAR28.VAR33[--VAR2->VAR28.VAR29];

break;

case VAR61:
if (VAR2->VAR60.VAR29 < 1) {
VAR6 = VAR43;
goto VAR44;
}


VAR2->VAR28.VAR33[VAR2->VAR28.VAR29++] = VAR2->VAR60.VAR33[--VAR2->VAR60.VAR29];
break;
}
break;
}
} else {

if (VAR2->VAR28.VAR29 < VAR62) {
int VAR63;
VAR9 = FUN8 (VAR9, &VAR63);
VAR2->VAR28.VAR33[VAR2->VAR28.VAR29++] = VAR63;
} else {
VAR6 = VAR43;
goto VAR44;
}
}
}

VAR44:
free (VAR7);

return VAR6;
}