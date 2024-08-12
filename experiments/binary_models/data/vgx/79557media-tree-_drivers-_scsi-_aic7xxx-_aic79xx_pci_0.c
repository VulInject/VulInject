static int
FUN1(struct VAR1 *VAR2)
{
struct	vpd_config VAR3;
struct	VAR4 *VAR5;
u_int	VAR6;
int	VAR7;
int	VAR8;

VAR5 = VAR2->VAR9;
VAR7 = FUN2(VAR2);
if (VAR7) {
u_int VAR10;


if (VAR11) 
FUN3("",
FUN4(VAR2));


VAR10 = ((2 * sizeof(*VAR5))
+ (sizeof(VAR3) * (VAR2->VAR12 - ''))) / 2;

VAR8 = FUN5(VAR2, (VAR13 *)&VAR3,
VAR10, sizeof(VAR3)/2,
VAR14);
if (VAR8 == 0)
VAR8 = FUN6(VAR2, &VAR3);
if (VAR11) 
FUN3("",
FUN4(VAR2),
VAR8 == 0 ? "" : "");

if (VAR11) 
FUN3("", FUN4(VAR2));


VAR10 = (sizeof(*VAR5) / 2) * (VAR2->VAR12 - '');

VAR8 = FUN5(VAR2, (VAR13 *)VAR5,
VAR10, sizeof(*VAR5)/2,
VAR15);

if (VAR8 != 0) {
FUN3("");
VAR7 = 0;
} else {
VAR7 = FUN7(VAR5);

if (VAR11) {
if (VAR7 == 0)
FUN3 ("");
else
FUN3 ("");
}
}
FUN8(VAR2);
}

if (!VAR7) {
u_int	  VAR16;


FUN9(VAR2, 0xFF);
VAR16 = FUN10(VAR2, VAR17 + VAR18);
if (VAR16 != 0xFF
&& ((FUN10(VAR2, VAR17 + 0) == ''
&& FUN10(VAR2, VAR17 + 1) == ''
&& FUN10(VAR2, VAR17 + 2) == ''
&& FUN10(VAR2, VAR17 + 3) == '')
|| (FUN10(VAR2, VAR17 + 0) == ''
&& FUN10(VAR2, VAR17 + 1) == ''
&& FUN10(VAR2, VAR17 + 2) == ''
&& FUN10(VAR2, VAR17 + 3) == '')
|| (FUN10(VAR2, VAR17 + 0) == ''
&& FUN10(VAR2, VAR17 + 1) == ''
&& FUN10(VAR2, VAR17 + 2) == ''
&& FUN10(VAR2, VAR17 + 3) == ''))) {
VAR13 *VAR19;
int	  VAR20;

FUN9(VAR2, VAR16);
VAR19 = (VAR13 *)VAR5;
for (VAR20 = 0; VAR20 < 64; VAR20 += 2)
*VAR19++ = FUN11(VAR2, VAR17+VAR20);
VAR7 = FUN7(VAR5);
if (VAR7)
VAR2->VAR21 |= VAR22;
}
}

if (VAR7 != 0
&& (VAR23 & VAR24) != 0) {
VAR13 *VAR19;
int	  VAR20;

FUN3("", FUN4(VAR2));
VAR19 = (VAR13 *)VAR5;
for (VAR20 = 0; VAR20 < (sizeof(*VAR5)); VAR20 += 2)
FUN3("", VAR19[VAR20]);
FUN3("");
}

if (!VAR7) {
if (VAR11)
FUN3("", FUN4(VAR2));
VAR2->VAR21 |= VAR25;
VAR8 = FUN12(VAR2);
VAR6 = VAR26|VAR27;
FUN13(VAR2->VAR9);
VAR2->VAR9 = NULL;
} else {
VAR8 = FUN14(VAR2, VAR5);
VAR6 = VAR5->VAR6;
}
if (VAR8 != 0)
return (VAR8);

FUN15(VAR2, VAR6);

return (0);
}