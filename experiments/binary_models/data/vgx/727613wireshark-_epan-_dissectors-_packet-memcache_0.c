FUN1 (VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
gint           VAR8;
int            VAR9;
const VAR10  *VAR11, *VAR12;
const VAR10  *VAR13;
int            VAR14;
guint16        VAR15;
guint32        VAR16;
guint64        VAR17;
guint8         VAR18 = 0xff;
gchar          VAR19[21]; 


while (FUN2 (VAR2, VAR7)) {

VAR9 = FUN3 (VAR2, VAR7, -1, &VAR8,
VAR20);
if (VAR9 < 0) {

return -1;
}


VAR11 = FUN4 (VAR2, VAR7, VAR9);
VAR12 = VAR11 + VAR9;


VAR14 = FUN5 (VAR11, VAR12, &VAR13);
if (VAR14 == 0) {

return -1;
}

if ((VAR14 == 5) && FUN6 (VAR11, "", VAR14) == 0) {

} else if ((VAR14 == 3) && FUN6 (VAR11, "", VAR14) == 0) {

VAR7 += (int) (VAR13 - VAR11);
return VAR7;
} else {

return -1;
}

VAR7 += (int) (VAR13 - VAR11);
VAR11 = VAR13;


VAR14 = FUN5 (VAR11, VAR12, &VAR13);
if (VAR14 == 0) {
return -1;
}
FUN7 (VAR2, VAR4, VAR6, VAR7, VAR14, VAR18, VAR21);
VAR7 += (int) (VAR13 - VAR11);
VAR11 = VAR13;


VAR14 = FUN5 (VAR11, VAR12, &VAR13);
if (VAR14 == 0 || VAR14 > 5) {
return -1;
}
memcpy (VAR19, VAR11, VAR14);
VAR19[VAR14] = '';

VAR15 = (VAR22) FUN8 (VAR19, NULL, 10);
FUN9 (VAR6, VAR23, VAR2, VAR7, VAR14, VAR15);

VAR7 += (int) (VAR13 - VAR11);
VAR11 = VAR13;


VAR14 = FUN5 (VAR11, VAR12, &VAR13);
if (VAR14 == 0 || VAR14 > 10) {
return -1;
}
memcpy (VAR19, VAR11, VAR14);
VAR19[VAR14] = '';

VAR16 = (VAR24) FUN8 (VAR19, NULL, 10);
FUN9 (VAR6, VAR25, VAR2, VAR7, VAR14, VAR16);

VAR7 += (int) (VAR13 - VAR11);
VAR11 = VAR13;


VAR14 = FUN5 (VAR11, VAR12, &VAR13);
if (VAR14 > 20) {
return -1;
}

if (VAR14 != 0) {  
memcpy (VAR19, VAR11, VAR14);
VAR19[VAR14] = '';

VAR17 = (VAR26) FUN8 (VAR19, NULL, 10);
FUN10 (VAR6, VAR27, VAR2, VAR7, VAR14, VAR17);


VAR14 = FUN5 (VAR11, VAR12, &VAR13);
if (VAR14 != 0) {
return -1; 
}
}

VAR7 = VAR8;

VAR7 = FUN11 (VAR2, VAR4, VAR6, VAR7, VAR16, VAR18);
if (VAR7 == -1) {
return VAR7;
}
}

return VAR7;
}