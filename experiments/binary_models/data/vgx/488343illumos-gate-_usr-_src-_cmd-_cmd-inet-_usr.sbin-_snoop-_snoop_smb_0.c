static void
FUN1(int VAR1, VAR2 *VAR3, int VAR4, char *VAR5, int VAR6)
{
struct VAR7 *VAR7;
VAR2 *VAR8; 
int VAR9;
VAR2 *VAR10;
int VAR11;
int VAR12;
int VAR13;
int VAR14;
int VAR15;
VAR2 *VAR16;
VAR2 *VAR17;
int VAR18;
int VAR19;
char VAR20[256];
const char *VAR21;
const char *VAR22;
ushort_t VAR23;

VAR7 = (struct VAR7 *)VAR3;
VAR23 = FUN2(VAR7->VAR24);
VAR8 = (VAR2 *)VAR3 + sizeof (struct VAR7);
VAR9 = *VAR8++;


VAR19 = VAR23 & VAR25;

VAR10 = VAR8 + (2 * VAR9);
VAR11 = FUN2(VAR10);
VAR10 += 2;


if (VAR1 & VAR26)
FUN3("", VAR9);


if (!(VAR7->VAR1 & VAR27)) {

if (VAR9 < 14)
return;
VAR12  = FUN2(VAR8 + (2 *  9));
VAR13 = FUN2(VAR8 + (2 * 10));
VAR14 = *(VAR8 + (2 * 13));
VAR16  =   VAR8 + (2 * 14);
} else {

if (VAR9 < 10)
return;
VAR12  = FUN2(VAR8 + (2 * 3));
VAR13 = FUN2(VAR8 + (2 * 4));
VAR14 = *(VAR8 + (2 *  9));
VAR16  =   VAR8 + (2 * 10);
}


VAR17 = VAR3 + VAR13;

if ((VAR7->VAR1 & VAR27) == 0) {


if (VAR14 > 0)
VAR15 = FUN2(VAR16);
else
VAR15 = -1; 
VAR22 = FUN4(VAR15);

if (VAR12 > 0)
VAR18 = VAR17[0];
else
VAR18 = -1; 
if (0 <= VAR18 && VAR18 < VAR28)
VAR21 = VAR29[VAR18];
else
VAR21 = "";

if (VAR1 & VAR30) {
int VAR31;

if (*VAR22 != '') {
VAR31 = snprintf(VAR5, VAR6,
"", VAR22);
VAR5 += VAR31;
VAR6 -= VAR31;
}
if (*VAR21 != '')
snprintf(VAR5, VAR6,
"", VAR21);
return;
}
if ((VAR1 & VAR26) == 0)
return;


FUN3("", FUN2(VAR8));
FUN3("", FUN2(VAR8+2));
FUN3("", FUN2(VAR8+4));
FUN3("", FUN2(VAR8+6));
FUN3("", VAR8[8]);
FUN3("", FUN2(VAR8+10));
FUN3("", FUN5(VAR8+12));

FUN3("", VAR12);
FUN3("", VAR13);
FUN3("", FUN2(VAR8+22));
FUN3("", FUN2(VAR8+24));
FUN3("", VAR14);
FUN3("", VAR11);


if (VAR14 > 0)
FUN3("",
VAR15, VAR22);
if (VAR12 > 0)
FUN3("",
VAR18, VAR21);


FUN6(VAR20, VAR10, VAR19);
FUN3("", VAR20);
} else {

if (VAR1 & VAR30)
return;
if ((VAR1 & VAR26) == 0)
return;

FUN3("", FUN2(VAR8));
FUN3("", FUN2(VAR8+2));

FUN3("", VAR12);
FUN3("", VAR13);
FUN3("", FUN2(VAR8+10));
FUN3("", FUN2(VAR8+12));
FUN3("", FUN2(VAR8+14));
FUN3("", FUN2(VAR8+16));
FUN3("", VAR14);
FUN3("", VAR11);

FUN3("", VAR12);
FUN7(VAR17, VAR12);
}
}