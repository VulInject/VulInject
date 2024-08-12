VAR1 FUN1(VAR2 *VAR3, int *VAR4, VAR5 **VAR6)
{
char VAR7[sizeof VAR8];
struct snoop_hdr VAR9;
struct snooprec_hdr VAR10;
guint VAR11;
gboolean VAR12;
static const int VAR13[] = {
VAR14,	
VAR15,	
VAR16,
VAR15,	
VAR14,
VAR15,	
VAR15,	
VAR15,	
VAR17,
VAR18,	
VAR15,	
VAR15,	
VAR15,	
VAR15,	
VAR18,	
VAR15,	
VAR19,	
VAR15,	
VAR20,	
VAR15,	
VAR15,	
VAR15,	
VAR15,	
VAR15,	
VAR15,	
VAR15,	
VAR21,	
};
static const int VAR22[] = {
VAR15,	
VAR15,	
VAR15,	
VAR15,	
VAR15,	
VAR23,	
VAR15,	
VAR15,	
};
static const int VAR24[] = {
VAR14,	
VAR15,	
VAR16,
VAR15,	
VAR14,
VAR15,	
VAR15,	
VAR15,	
VAR17,
VAR15,	
VAR14,	
VAR16,	
VAR14,	
VAR16,	
VAR16,	
VAR15,	
VAR15,	
VAR15,	
VAR25, 
VAR14,	
};
int VAR26;
gint64 VAR27;
VAR28 *VAR29;


if (!FUN2(VAR3->VAR30, VAR7, sizeof VAR7, VAR4, VAR6)) {
if (*VAR4 != VAR31)
return VAR32;
return VAR33;
}

if (memcmp(VAR7, VAR8, sizeof VAR8) != 0) {
return VAR33;
}


if (!FUN2(VAR3->VAR30, &VAR9, sizeof VAR9, VAR4, VAR6))
return VAR32;


VAR9.VAR34 = FUN3(VAR9.VAR34);
switch (VAR9.VAR34) {

case 2:		
case 3:		
case 4:		
case 5:		
break;

default:
*VAR4 = VAR35;
*VAR6 = FUN4("", VAR9.VAR34);
return VAR32;
}




VAR12 = VAR36;


VAR27 = FUN5(VAR3->VAR30);
if (!FUN6(VAR3->VAR30, &VAR10, sizeof VAR10, VAR4, VAR6)) {
if (*VAR4 != 0)
return VAR32;


} else {

if (FUN3(VAR10.VAR37) >
(sizeof VAR10 + FUN3(VAR10.VAR38))) {

VAR11 = FUN3(VAR10.VAR37) -
((VAR39)sizeof VAR10 + FUN3(VAR10.VAR38));


VAR12 =
(VAR11 >= sizeof (struct VAR40));
}
}


if (FUN7(VAR3->VAR30, VAR27, VAR41, VAR4) == -1)
return VAR32;

VAR9.VAR42 = FUN3(VAR9.VAR42);
if (VAR12) {
if (VAR9.VAR42 >= VAR43
|| VAR24[VAR9.VAR42] == VAR15) {
*VAR4 = VAR35;
*VAR6 = FUN4("",
VAR9.VAR42);
return VAR32;
}
VAR26 = VAR24[VAR9.VAR42];
} else if (VAR9.VAR42 & VAR44) {
if ((VAR9.VAR42^VAR44) >= VAR45
|| VAR22[VAR9.VAR42^VAR44] == VAR15) {
*VAR4 = VAR35;
*VAR6 = FUN4("",
VAR9.VAR42);
return VAR32;
}
VAR26 = VAR22[VAR9.VAR42^VAR44];
} else {
if (VAR9.VAR42 >= VAR46
|| VAR13[VAR9.VAR42] == VAR15) {
*VAR4 = VAR35;
*VAR6 = FUN4("",
VAR9.VAR42);
return VAR32;
}
VAR26 = VAR13[VAR9.VAR42];
}


VAR3->VAR47 = VAR12 ? VAR48 : VAR49;
VAR29 = FUN8(VAR28, 1);
VAR3->VAR50 = (void *)VAR29;
VAR3->VAR51 = VAR52;
VAR3->VAR53 = VAR54;
VAR3->VAR26 = VAR26;
VAR3->VAR55 = 0;	
VAR3->VAR56 = VAR57;
VAR29->VAR12 = VAR12;


FUN9(VAR3);

return VAR58;
}


typedef struct {
guint8 VAR59[4];
guint8 VAR60[2];
guint8 VAR61;
guint8 VAR62;
guint8 VAR63;
guint8 signal;
guint8 VAR64;
guint8 VAR65;
} VAR66;