static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, word VAR6,
word VAR7)
{
API_PARSE VAR8[8];
API_PARSE VAR9[9];
API_PARSE VAR10[2];
byte VAR11[256];
byte VAR12[] = {5, 9, 13, 12, 16, 39, 9, 17, 17, 18};
byte VAR13[] = "";
word VAR14;

API_PARSE VAR15[4];
word VAR16, VAR17, VAR18;
dword VAR19;


for (VAR14 = 0; VAR14 < 8; VAR14++) VAR8[VAR14].VAR20 = 0;
for (VAR14 = 0; VAR14 < 2; VAR14++) VAR10[VAR14].VAR20 = 0;

FUN2(1, FUN3(""));
FUN4(VAR5, "", &VAR3->VAR21);

if (VAR6 == 2) {
VAR3->VAR22 = 0;
FUN5(VAR3, VAR3->VAR22, VAR7);
FUN6(VAR3, VAR23, "");
FUN2(1, FUN3(""));
return 0;
}

if (VAR3->VAR24 == VAR25) return 0;
else if (VAR3->VAR24 == VAR26) {
VAR3->VAR22 = 1;
FUN5(VAR3, VAR3->VAR22, VAR7);
FUN6(VAR3, VAR23, "");
FUN2(1, FUN3(""));
return 0;
}
else if (VAR3->VAR24 == VAR27) {
VAR3->VAR22 = FUN7(VAR3, 9, (VAR1)(VAR7 | VAR28));
FUN5(VAR3, VAR3->VAR22, (VAR1)(VAR7 | VAR28));
VAR13[1] = VAR3->VAR22;
FUN8(&VAR13[5], VAR3->VAR29->VAR30);
FUN6(VAR3, VAR23, VAR13);
FUN2(1, FUN3("", VAR13[1]));
return 0;
}
VAR3->VAR31 &= ~(VAR32 | VAR33);
if (VAR3->VAR31 & VAR34)
VAR3->VAR31 |= VAR32;
else if (VAR3->VAR31 & VAR35)
VAR3->VAR31 |= VAR33;

if (!VAR5->VAR20) {
VAR3->VAR22 = 0x5;
FUN5(VAR3, VAR3->VAR22, VAR7);
FUN6(VAR3, VAR23, "");
return 0;
}

FUN2(1, FUN3("", (VAR1)VAR5->VAR20));
if (VAR5->VAR20 > 256) return VAR36;
if (FUN9(&VAR5->VAR37[1], (VAR1)VAR5->VAR20, "", VAR8))
{
VAR8[6].VAR20 = 0;
if (FUN9(&VAR5->VAR37[1], (VAR1)VAR5->VAR20, "", VAR8))
{
FUN2(1, FUN3(""));
return VAR36;
}
}
else if (FUN9(&VAR5->VAR37[1], (VAR1)VAR5->VAR20, "", VAR8))
{
FUN2(1, FUN3(""));
return VAR36;
}

if (VAR8[6].VAR20)
{
if (FUN9(&VAR8[6].VAR37[1], (VAR1)VAR8[6].VAR20, "", VAR10))
{
return VAR36;
}
switch (FUN10(VAR10[0].VAR37))
{
case 1:
VAR3->VAR31 = (VAR3->VAR31 & ~VAR33) | VAR32;
break;
case 2:
VAR3->VAR31 = (VAR3->VAR31 & ~VAR32) | VAR33;
break;
}
}
FUN2(1, FUN3("", VAR3->VAR31));


if ((FUN10(VAR8[0].VAR37) == VAR38)
&& (VAR3->VAR39->VAR40.VAR41 & (1L << VAR42)))
{
VAR3->VAR22 = FUN7(VAR3, 31, (VAR1)(VAR7 & ~VAR28));
FUN5(VAR3, VAR3->VAR22, (VAR1)(VAR7 & ~VAR28));
VAR11[1] = VAR3->VAR22;
VAR11[2] = 0;
VAR11[3] = 0;
VAR11[4] = 0;
FUN8(&VAR11[5], VAR3->VAR29->VAR30);
for (VAR14 = 0; VAR14 < VAR8[3].VAR20; VAR14++)
VAR11[7 + VAR14] = VAR8[3].VAR37[1 + VAR14];
VAR11[0] = 6 + VAR8[3].VAR20;
FUN6(VAR3, VAR23, VAR11);
return 0;
}


if ((FUN10(VAR8[0].VAR37) == VAR43)
&& (VAR3->VAR39->VAR40.VAR41 & (1L << VAR44)))
{
VAR3->VAR22 = FUN7(VAR3, 35, (VAR1)(VAR7 & ~VAR28));
FUN5(VAR3, VAR3->VAR22, (VAR1)(VAR7 & ~VAR28));
VAR11[1] = VAR3->VAR22;
VAR11[2] = 0;
VAR11[3] = 0;
VAR11[4] = 0;
FUN8(&VAR11[5], VAR3->VAR29->VAR30);
VAR11[0] = 6;
FUN6(VAR3, VAR23, VAR11);
return 0;
}


if ((FUN10(VAR8[0].VAR37) >= 32)
|| (!((1L << FUN10(VAR8[0].VAR37)) & VAR3->VAR39->VAR45.VAR46)
&& ((FUN10(VAR8[0].VAR37) != 3)
|| !((1L << VAR47) & VAR3->VAR39->VAR45.VAR46)
|| ((VAR8[3].VAR20 != 0) && (FUN10(&VAR8[3].VAR37[1]) != 0) && (FUN10(&VAR8[3].VAR37[1]) != 56000)))))
{
return VAR48;
}
VAR3->VAR22 = FUN7(VAR3, VAR12[FUN10(VAR8[0].VAR37)],
(VAR1)(VAR7 & ~VAR28));
FUN5(VAR3, VAR3->VAR22, (VAR1)(VAR7 & ~VAR28));
VAR11[0] = 6;
VAR11[1] = VAR3->VAR22;
for (VAR14 = 2; VAR14 < sizeof(VAR11); VAR14++) VAR11[VAR14] = 0;

if ((FUN10(VAR8[0].VAR37) == VAR49)
|| (FUN10(VAR8[0].VAR37) == VAR50)
|| (FUN10(VAR8[0].VAR37) == VAR51))
{ 
for (VAR14 = 0; VAR14 < 7; VAR14++) VAR9[VAR14].VAR20 = 0;

if (VAR8[3].VAR20)
{
if (FUN9(&VAR8[3].VAR37[1], (VAR1)VAR8[3].VAR20, "", VAR9))
{
return (VAR36);
}

VAR11[2] = 0; 

FUN2(1, FUN3("", FUN10(VAR9[0].VAR37)));

FUN8(&VAR11[13], 0);                          
FUN8(&VAR11[15], FUN10(VAR9[0].VAR37)); 
FUN8(&VAR11[17], 0);                          
FUN8(&VAR11[19], FUN10(VAR9[0].VAR37)); 

VAR11[3] = 0; 
switch (FUN10(VAR9[2].VAR37))
{       
case 1: 
VAR11[3] |= (VAR52 | VAR53);
FUN2(1, FUN3(""));
break;

case 2: 
VAR11[3] |= (VAR52 | VAR54);
FUN2(1, FUN3(""));
break;

default:
FUN2(1, FUN3(""));
break;
}

switch (FUN10(VAR9[3].VAR37))
{       
case 1: 
VAR11[3] |= VAR55;
FUN2(1, FUN3(""));
break;

default:
FUN2(1, FUN3(""));
break;
}

switch (FUN10(VAR9[1].VAR37))
{     
case 5:
VAR11[3] |= VAR56;
FUN2(1, FUN3(""));
break;

case 6:
VAR11[3] |= VAR57;
FUN2(1, FUN3(""));
break;

case 7:
VAR11[3] |= VAR58;
FUN2(1, FUN3(""));
break;

default:
FUN2(1, FUN3(""));
break;
}

VAR11[7] = 0; 
VAR11[8] = 0; 
VAR11[9] = 0; 

if (((VAR3->VAR31 & VAR32) != 0) ^ ((VAR3->VAR31 & VAR34) != 0))
{
VAR11[9] |= VAR59;
FUN2(1, FUN3(""));
}

if (FUN10(VAR9[4].VAR37) & VAR60)
{
VAR11[9] |= VAR61;
FUN2(1, FUN3(""));
}

if (FUN10(VAR9[4].VAR37) & VAR62)
{
VAR11[7] |= VAR63 | VAR64;
FUN2(1, FUN3(""));
}

if (FUN10(VAR9[4].VAR37) & VAR65)
{
VAR11[8] |= VAR66;
FUN2(1, FUN3(""));
}
else if (FUN10(VAR9[4].VAR37) & VAR67)
{
VAR11[8] |= VAR68;
FUN2(1, FUN3(""));
}

if ((FUN10(VAR9[5].VAR37) & 0x00ff) == VAR69)
{
VAR11[8] |= VAR70;
FUN2(1, FUN3(""));
}
else if ((FUN10(VAR9[5].VAR37) & 0x00ff) == VAR71)
{
VAR11[8] |= VAR72;
FUN2(1, FUN3(""));
}
else if ((FUN10(VAR9[5].VAR37) & 0x00ff) == VAR73)
{
VAR11[8] |= VAR74;
FUN2(1, FUN3(""));
}
VAR11[0] = 20;

if ((VAR3->VAR39->VAR40.VAR41 & (1L << VAR75))
&& (FUN10(VAR9[5].VAR37) & 0x8000)) 
{
VAR3->VAR76 |= 1L << VAR75;
}
if (FUN10(VAR9[5].VAR37) & 0x4000) 
VAR3->VAR76 |= 1L << VAR77;

if ((VAR3->VAR78 | VAR3->VAR76 | VAR3->VAR39->VAR79[VAR3->VAR29->VAR80 - 1])
& ((1L << VAR75) | (1L << VAR77)))
{
if (!FUN9(&VAR8[3].VAR37[1], (VAR1)VAR8[3].VAR20, "", VAR9))
{
VAR14 = 27;
if (VAR9[6].VAR20 >= 4)
{
VAR19 = FUN11(&VAR9[6].VAR37[1]);
VAR11[7] |= (VAR81) VAR19;          
VAR11[9] |= (VAR81)(VAR19 >> 8);    
VAR11[++VAR14] = (VAR81)(VAR19 >> 16);  
VAR11[++VAR14] = (VAR81)(VAR19 >> 24);
if (VAR9[6].VAR20 >= 8)
{
VAR19 = FUN11(&VAR9[6].VAR37[5]);
VAR11[10] |= (VAR81) VAR19;        
VAR11[11] |= (VAR81)(VAR19 >> 8);
if (VAR9[6].VAR20 >= 12)
{
VAR19 = FUN11(&VAR9[6].VAR37[9]);
VAR11[12] = (VAR81) VAR19;          
VAR11[++VAR14] = (VAR81)(VAR19 >> 8);   
VAR11[++VAR14] = (VAR81)(VAR19 >> 16);
VAR11[++VAR14] = (VAR81)(VAR19 >> 24);
VAR11[++VAR14] = 0;
if (VAR9[6].VAR20 >= 14)
{
VAR18 = FUN10(&VAR9[6].VAR37[13]);
if (VAR18 != 0)
FUN8(&VAR11[13], VAR18);  
if (VAR9[6].VAR20 >= 16)
{
VAR18 = FUN10(&VAR9[6].VAR37[15]);
if (VAR18 != 0)
FUN8(&VAR11[15], VAR18);  
if (VAR9[6].VAR20 >= 18)
{
VAR18 = FUN10(&VAR9[6].VAR37[17]);
if (VAR18 != 0)
FUN8(&VAR11[17], VAR18);  
if (VAR9[6].VAR20 >= 20)
{
VAR18 = FUN10(&VAR9[6].VAR37[19]);
if (VAR18 != 0)
FUN8(&VAR11[19], VAR18);  
if (VAR9[6].VAR20 >= 22)
{
VAR18 = FUN10(&VAR9[6].VAR37[21]);
VAR11[23] = (VAR81)(-((short) VAR18));  
if (VAR9[6].VAR20 >= 24)
{
VAR18 = FUN10(&VAR9[6].VAR37[23]);
VAR11[22] |= (VAR81) VAR18;        
VAR11[21] |= (VAR81)(VAR18 >> 8);  
}
}
}
}
}
}
}
}
}
VAR11[27] = VAR14 - 27;
VAR14++;
if (!FUN9(&VAR8[3].VAR37[1], (VAR1)VAR8[3].VAR20, "", VAR9))
{
if (!FUN9(&VAR9[7].VAR37[1], (VAR1)VAR9[7].VAR20, "", VAR15))
{
for (VAR17 = 0; VAR17 < 3; VAR17++)
{
VAR11[VAR14] = (VAR81)(VAR15[VAR17].VAR20);
for (VAR16 = 1; VAR16 < ((VAR1)(VAR11[VAR14] + 1)); VAR16++)
VAR11[VAR14 + VAR16] = VAR15[VAR17].VAR37[VAR16];
VAR14 += VAR11[VAR14] + 1;
}
}
}
VAR11[0] = (VAR81)(VAR14 - 1);
}
}

}
}
if (FUN10(VAR8[0].VAR37) == 2 ||                         
FUN10(VAR8[0].VAR37) == 3)                           
{
if (VAR8[3].VAR20) {
FUN2(1, FUN3("", FUN10(&VAR8[3].VAR37[1])));
switch (FUN10(&VAR8[3].VAR37[1])) {                 
case 0:
case 56000:
if (FUN10(VAR8[0].VAR37) == 3) {                  
FUN2(1, FUN3(""));
VAR11[1] = 8;
VAR11[2] = 0;
VAR11[3] = 0;
}
else if (FUN10(VAR8[0].VAR37) == 2) {
FUN2(1, FUN3(""));
VAR11[2] = 9;
}
break;
case 50:     VAR11[2] = 1;  break;
case 75:     VAR11[2] = 1;  break;
case 110:    VAR11[2] = 1;  break;
case 150:    VAR11[2] = 1;  break;
case 200:    VAR11[2] = 1;  break;
case 300:    VAR11[2] = 1;  break;
case 600:    VAR11[2] = 1;  break;
case 1200:   VAR11[2] = 2;  break;
case 2400:   VAR11[2] = 3;  break;
case 4800:   VAR11[2] = 4;  break;
case 7200:   VAR11[2] = 10; break;
case 9600:   VAR11[2] = 5;  break;
case 12000:  VAR11[2] = 13; break;
case 24000:  VAR11[2] = 0;  break;
case 14400:  VAR11[2] = 11; break;
case 19200:  VAR11[2] = 6;  break;
case 28800:  VAR11[2] = 12; break;
case 38400:  VAR11[2] = 7;  break;
case 48000:  VAR11[2] = 8;  break;
case 76:     VAR11[2] = 15; break;  
case 1201:   VAR11[2] = 14; break;  
case 56001:  VAR11[2] = 9;  break;  

default:
return VAR82;
}
VAR11[3] = 0;
if (VAR11[1] == 13)                                        
{
if (VAR8[3].VAR20 >= 8)
{
switch (FUN10(&VAR8[3].VAR37[3]))
{       
case 5:
VAR11[3] |= VAR56;
break;
case 6:
VAR11[3] |= VAR57;
break;
case 7:
VAR11[3] |= VAR58;
break;
}
switch (FUN10(&VAR8[3].VAR37[5]))
{       
case 1: 
VAR11[3] |= (VAR52 | VAR53);
break;
case 2: 
VAR11[3] |= (VAR52 | VAR54);
break;
}
switch (FUN10(&VAR8[3].VAR37[7]))
{       
case 1: 
VAR11[3] |= VAR55;
break;
}
}
}
}
else if (VAR11[1] == 8 || FUN10(VAR8[0].VAR37) == 3) {
FUN2(1, FUN3(""));
VAR11[1] = 8;
VAR11[2] = 0;
VAR11[3] = 0;
}
else {
FUN2(1, FUN3(""));
VAR11[2] = 5;
}
}
FUN8(&VAR11[5], VAR3->VAR29->VAR30);
FUN2(1, FUN3("", VAR11[0], VAR11[1], VAR11[2], VAR11[3], VAR11[4], VAR11[5], VAR11[6]));


FUN6(VAR3, VAR23, VAR11);
return 0;
}