FUN1 (VAR1  *VAR2,
VAR3 **VAR4)
{
VAR5           *VAR6;
BitmapFileHead  VAR7;
BitmapHead      VAR8;
guchar          VAR9[124];
gint            VAR10, VAR11, VAR12;
gboolean        VAR13 = VAR14;
guchar          VAR15[256][3];
VAR16      *VAR17 = NULL;
gchar           VAR18[2];
BitmapChannel   VAR19[4];

FUN2 (FUN3(""),
FUN4 (VAR2));

VAR6 = FUN5 (FUN6 (VAR2), "");

if (! VAR6)
{
FUN7 (VAR4, VAR20, FUN8 (VAR21),
FUN3(""),
FUN4 (VAR2), FUN9 (VAR21));
goto VAR22;
}



if (! FUN10 (VAR6, VAR18, 2) ||
! (! FUN11 (VAR18, "", 2) ||
! FUN11 (VAR18, "", 2) ||
! FUN11 (VAR18, "", 2) ||
! FUN11 (VAR18, "", 2) ||
! FUN11 (VAR18, "", 2) ||
! FUN11 (VAR18, "", 2)))
{
FUN7 (VAR4, VAR20, VAR23,
FUN3(""),
FUN4 (VAR2));
goto VAR22;
}

while (! FUN11 (VAR18, "", 2))
{
if (! FUN10 (VAR6, VAR9, 12))
{
FUN7 (VAR4, VAR20, VAR23,
FUN3(""),
FUN4 (VAR2));
goto VAR22;
}

if (! FUN10 (VAR6, VAR18, 2))
{
FUN7 (VAR4, VAR20, VAR23,
FUN3(""),
FUN4 (VAR2));
goto VAR22;
}
}

if (! FUN10 (VAR6, VAR9, 12))
{
FUN7 (VAR4, VAR20, VAR23,
FUN3(""),
FUN4 (VAR2));
goto VAR22;
}



VAR7.VAR24 = FUN12 (&VAR9[0x00]);
VAR7.VAR25 = FUN13 (&VAR9[0x04]);
VAR7.VAR26 = FUN13 (&VAR9[0x06]);
VAR7.VAR27 = FUN12 (&VAR9[0x08]);

if (! FUN10 (VAR6, VAR9, 4))
{
FUN7 (VAR4, VAR20, VAR23,
FUN3(""),
FUN4 (VAR2));
goto VAR22;
}

VAR7.VAR28 = FUN12 (&VAR9[0x00]);



if (VAR7.VAR28 == 12) 
{
if (! FUN10 (VAR6, VAR9, 8))
{
FUN7 (VAR4, VAR20, VAR23,
FUN3(""),
FUN4 (VAR2));
goto VAR22;
}

VAR8.VAR29   = FUN13 (&VAR9[0x00]);       
VAR8.VAR30  = FUN13 (&VAR9[0x02]);       
VAR8.VAR31  = FUN13 (&VAR9[0x04]);       
VAR8.VAR32  = FUN13 (&VAR9[0x06]);       
VAR8.VAR33   = 0;
VAR8.VAR34  = 0;
VAR8.VAR35   = VAR8.VAR36 = 0;
VAR8.VAR37 = 0;
VAR8.VAR38  = 0;
VAR8.VAR19[0]  = 0;
VAR8.VAR19[1]  = 0;
VAR8.VAR19[2]  = 0;
VAR8.VAR19[3]  = 0;

memset (VAR19, 0, sizeof (VAR19));
VAR12 = 3;
}
else if (VAR7.VAR28 == 40) 
{
if (! FUN10 (VAR6, VAR9, 36))
{
FUN7 (VAR4, VAR20, VAR23,
FUN3(""),
FUN4 (VAR2));
goto VAR22;
}

VAR8.VAR29   = FUN12 (&VAR9[0x00]);      
VAR8.VAR30  = FUN12 (&VAR9[0x04]);      
VAR8.VAR31  = FUN13 (&VAR9[0x08]);      
VAR8.VAR32  = FUN13 (&VAR9[0x0A]);      
VAR8.VAR33   = FUN12 (&VAR9[0x0C]);      
VAR8.VAR34  = FUN12 (&VAR9[0x10]);      
VAR8.VAR35   = FUN12 (&VAR9[0x14]);      
VAR8.VAR36   = FUN12 (&VAR9[0x18]);      
VAR8.VAR37 = FUN12 (&VAR9[0x1C]);      
VAR8.VAR38  = FUN12 (&VAR9[0x20]);      
VAR8.VAR19[0]  = 0;
VAR8.VAR19[1]  = 0;
VAR8.VAR19[2]  = 0;
VAR8.VAR19[3]  = 0;

VAR12 = 4;
memset (VAR19, 0, sizeof (VAR19));

if (VAR8.VAR33 == VAR39)
{
FUN14 ("");

if (! FUN10 (VAR6, VAR9, 3 * sizeof (VAR40)))
{
FUN7 (VAR4, VAR20, VAR23,
FUN3(""),
FUN4 (VAR2));
goto VAR22;
}

VAR8.VAR19[0] = FUN12 (&VAR9[0x00]);
VAR8.VAR19[1] = FUN12 (&VAR9[0x04]);
VAR8.VAR19[2] = FUN12 (&VAR9[0x08]);

FUN15 (&VAR8.VAR19[0], VAR19, 3);
}
else if (VAR8.VAR33 == VAR41)
{
FUN14 ("");

FUN16 (VAR8.VAR32, VAR19);
}
else if ((VAR8.VAR33 != VAR42) &&
(VAR8.VAR33 != VAR43))
{

FUN7 (VAR4, VAR20, VAR23,
FUN3(""),
VAR8.VAR33,
FUN4 (VAR2));
}

FUN14 ("");
}
else if (VAR7.VAR28 >= 56 &&
VAR7.VAR28 <= 64)
{


if (! FUN10 (VAR6, VAR9, VAR7.VAR28 - 4))
{
FUN7 (VAR4, VAR20, VAR23,
FUN3(""),
FUN4 (VAR2));
goto VAR22;
}

VAR8.VAR29   = FUN12 (&VAR9[0x00]);       
VAR8.VAR30  = FUN12 (&VAR9[0x04]);       
VAR8.VAR31  = FUN13 (&VAR9[0x08]);       
VAR8.VAR32  = FUN13 (&VAR9[0x0A]);       
VAR8.VAR33   = FUN12 (&VAR9[0x0C]);       
VAR8.VAR34  = FUN12 (&VAR9[0x10]);       
VAR8.VAR35   = FUN12 (&VAR9[0x14]);       
VAR8.VAR36   = FUN12 (&VAR9[0x18]);       
VAR8.VAR37 = FUN12 (&VAR9[0x1C]);       
VAR8.VAR38  = FUN12 (&VAR9[0x20]);       
VAR8.VAR19[0]  = FUN12 (&VAR9[0x24]);       
VAR8.VAR19[1]  = FUN12 (&VAR9[0x28]);       
VAR8.VAR19[2]  = FUN12 (&VAR9[0x2C]);       
VAR8.VAR19[3]  = FUN12 (&VAR9[0x30]);       

VAR12 = 4;
FUN15 (&VAR8.VAR19[0], VAR19, 4);
}
else if (VAR7.VAR28 == 108 ||
VAR7.VAR28 == 124)
{


if (! FUN10 (VAR6, VAR9, VAR7.VAR28 - 4))
{
FUN7 (VAR4, VAR20, VAR23,
FUN3(""),
FUN4 (VAR2));
goto VAR22;
}

VAR8.VAR29   = FUN12 (&VAR9[0x00]);
VAR8.VAR30  = FUN12 (&VAR9[0x04]);
VAR8.VAR31  = FUN13 (&VAR9[0x08]);
VAR8.VAR32  = FUN13 (&VAR9[0x0A]);
VAR8.VAR33   = FUN12 (&VAR9[0x0C]);
VAR8.VAR34  = FUN12 (&VAR9[0x10]);
VAR8.VAR35   = FUN12 (&VAR9[0x14]);
VAR8.VAR36   = FUN12 (&VAR9[0x18]);
VAR8.VAR37 = FUN12 (&VAR9[0x1C]);
VAR8.VAR38  = FUN12 (&VAR9[0x20]);
VAR8.VAR19[0]  = FUN12 (&VAR9[0x24]);
VAR8.VAR19[1]  = FUN12 (&VAR9[0x28]);
VAR8.VAR19[2]  = FUN12 (&VAR9[0x2C]);
VAR8.VAR19[3]  = FUN12 (&VAR9[0x30]);

VAR12 = 4;

if (VAR8.VAR33 == VAR39)
{
FUN14 ("");

FUN15 (&VAR8.VAR19[0], VAR19, 4);
}
else if (VAR8.VAR33 == VAR41)
{
FUN14 ("");

FUN16 (VAR8.VAR32, VAR19);
}
}
else
{
FUN7 (VAR4, VAR20, VAR23,
FUN3(""),
FUN4 (VAR2));
goto VAR22;
}




switch (VAR8.VAR32)
{
case 1:
case 2:
case 4:
case 8:
case 16:
case 24:
case 32:
break;
default:
FUN7 (VAR4, VAR20, VAR23,
FUN3(""),
FUN4 (VAR2));
goto VAR22;
}



VAR10 =
(VAR7.VAR27 - VAR7.VAR28 - 14) / VAR12;

if ((VAR8.VAR37 == 0) &&
(VAR8.VAR32  <= 8))
{
VAR10 = VAR8.VAR37 = 1 << VAR8.VAR32;
}

if (VAR10 > 256)
VAR10 = 256;



if (VAR8.VAR30 == 0 ||
VAR8.VAR29  == 0)
{
FUN7 (VAR4, VAR20, VAR23,
FUN3(""),
FUN4 (VAR2));
goto VAR22;
}


if (VAR8.VAR29  <  0 ||
VAR8.VAR30 == VAR44)
{
FUN7 (VAR4, VAR20, VAR23,
FUN3(""),
FUN4 (VAR2));
goto VAR22;
}

if (VAR8.VAR31 != 1)
{
FUN7 (VAR4, VAR20, VAR23,
FUN3(""),
FUN4 (VAR2));
goto VAR22;
}

if (VAR8.VAR37 >  256 &&
VAR8.VAR32  <= 8)
{
FUN7 (VAR4, VAR20, VAR23,
FUN3(""),
FUN4 (VAR2));
goto VAR22;
}




if (((VAR45) VAR8.VAR29) > VAR46 / VAR8.VAR32 ||
((VAR45) VAR8.VAR29) > (VAR46 / FUN17 (VAR8.VAR30)) / 4)
{
FUN7 (VAR4, VAR20, VAR23,
FUN3(""),
FUN4 (VAR2));
goto VAR22;
}



VAR11 = ((VAR8.VAR29 * VAR8.VAR32 - 1) / 32) * 4 + 4;

FUN18 (""
"",
VAR7.VAR24,
VAR8.VAR37,
VAR8.VAR32,
VAR8.VAR29,
VAR8.VAR30,
VAR8.VAR33,
VAR11);

if (VAR8.VAR32 <= 8)
{
FUN18 ("");

if (! FUN19 (VAR6, VAR15, VAR10, VAR12, &VAR13))
goto VAR22;
}

FUN20 (VAR6, VAR7.VAR27, VAR47);


VAR17 = FUN21 (VAR6,
VAR2,
VAR8.VAR29,
FUN17 (VAR8.VAR30),
VAR15,
VAR8.VAR37,
VAR8.VAR32,
VAR8.VAR33,
VAR11,
VAR13,
VAR19,
VAR4);

if (! VAR17)
goto VAR22;

if (VAR8.VAR35 > 0 &&
VAR8.VAR36 > 0)
{

gdouble VAR48;
gdouble VAR49;



VAR48 = VAR8.VAR35 * 0.0254;
VAR49 = VAR8.VAR36 * 0.0254;

FUN22 (VAR17, VAR48, VAR49);
}

if (VAR8.VAR30 < 0)
FUN23 (VAR17, VAR50);

VAR22:
if (VAR6)
fclose (VAR6);

return VAR17;
}