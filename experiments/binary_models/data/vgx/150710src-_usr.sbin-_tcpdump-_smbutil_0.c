static const VAR1 *FUN1(const VAR1 *VAR2, const char *VAR3, const VAR1 *VAR4)
{
int VAR5=0;
char *VAR6 = "";
int VAR7;

while (*VAR3 && VAR2<VAR4) {
switch (*VAR3) {
case '':
FUN2(FUN3(VAR2,0),VAR6);
VAR2++; VAR3++;
break;

case '':
FUN2(FUN4(VAR2,0),VAR6);
VAR2+=2; VAR3++;
break;

case '':
{
char VAR8[128];
char *VAR9 = strchr(++VAR3,'');
FUN5(VAR8,VAR3,sizeof(VAR8));
VAR3 = VAR9+1;
FUN2(FUN3(VAR2,0),VAR8);
VAR2++;
break;
}

case '':
{
int VAR10 = FUN6(VAR3+1);
VAR2 += VAR10;
VAR3++;
while (FUN7((unsigned char)*VAR3)) VAR3++;
break;
}
case '':
VAR5 = !VAR5;
VAR3++;
break;
case '':
{
unsigned int VAR11 = VAR5?FUN8(VAR2,0):FUN9(VAR2,0);
FUN10("",VAR11, VAR11);
VAR2 += 4;
VAR3++;
break;
}
case '':
{
unsigned int VAR12 = VAR5?FUN8(VAR2,0):FUN9(VAR2,0);
unsigned int VAR13 = VAR5?FUN8(VAR2,4):FUN9(VAR2,4);
if (VAR13) {
FUN10("",VAR13, VAR12);
} else {
FUN10("",VAR12, VAR13, VAR12);
}
VAR2 += 8;
VAR3++;
break;
}
case '':
{
unsigned int VAR11 = VAR5?FUN11(VAR2,0):FUN4(VAR2,0);
FUN10("",VAR11);
VAR2 += 2;
VAR3++;
break;
}
case '':
{
unsigned int VAR11 = VAR5?FUN8(VAR2,0):FUN9(VAR2,0);
FUN10("",VAR11);
VAR2 += 4;
VAR3++;
break;
}
case '':
{
unsigned int VAR11 = VAR5?FUN11(VAR2,0):FUN4(VAR2,0);
FUN10("",VAR11);
VAR2 += 2;
VAR3++;
break;
}
case '':
{
unsigned int VAR11 = FUN3(VAR2,0);
FUN10("",VAR11);
VAR2 += 1;
VAR3++;
break;
}
case '':
{
unsigned int VAR11 = FUN3(VAR2,0);
FUN10("",VAR11); 			
VAR2 += 1;
VAR3++;
break;
}
case '':
{
FUN10("",(int)FUN12(VAR4,VAR2),FUN13(VAR2, &VAR7));
VAR2 += VAR7;
VAR3++;
break;
}
case '':
{
if (*VAR2 != 4 && *VAR2 != 2)
FUN10("",
*VAR2,(int)FUN12(VAR4,VAR2));
FUN10("",(int)FUN12(VAR4,VAR2+1),FUN13(VAR2+1, &VAR7));
VAR2 += VAR7+1;
VAR3++;
break;
}
case '':
{
int VAR10 = FUN6(VAR3+1);
FUN10("",VAR10,VAR10,VAR2);
VAR2 += VAR10;
VAR3++; while (FUN7((unsigned char)*VAR3)) VAR3++;
break;
}
case '':
{
int VAR10 = FUN6(VAR3+1);
while (VAR10--) FUN10("",*VAR2++);
VAR3++; while (FUN7((unsigned char)*VAR3)) VAR3++;
break;
}
case '':
{
int VAR14 = FUN6(VAR3+1);
char VAR15[255];
int VAR16;
int VAR7;
switch (VAR14) {
case 1:
VAR16 = FUN14(VAR17,FUN12(VAR2,VAR17),VAR4,
VAR15);
if (VAR16 < 0)
goto VAR18;
VAR7 = FUN15(VAR2,VAR4);
if (VAR7 < 0)
goto VAR18;
VAR2 += VAR7;
FUN10("",
VAR15,VAR16,FUN16(VAR16));
break;
case 2:
VAR16 = VAR2[15];
FUN10("",
VAR2,VAR16,FUN16(VAR16));
VAR2 += 16;
break;
}
VAR3++; while (FUN7((unsigned char)*VAR3)) VAR3++;
break;
}
case '':
{
time_t VAR14;
int VAR11 = FUN9(VAR2,0);
switch (FUN6(VAR3+1)) {
case 1:
if (VAR11==0 || VAR11==-1 || VAR11==0xFFFFFFFF)
VAR14 = 0;
else
VAR14 = FUN17(VAR2);
VAR2+=4;
break;
case 2:
if (VAR11==0 || VAR11==-1 || VAR11==0xFFFFFFFF)
VAR14 = 0;
else
VAR14 = FUN18(VAR2);
VAR2+=4;
break;
case 3:
VAR14 = FUN19(VAR2);
VAR2+=8;
break;
default:
FUN20("", VAR3);
}
FUN10("",VAR14?FUN21(FUN22(&VAR14)):"");
VAR3++; while (FUN7((unsigned char)*VAR3)) VAR3++;
break;
}
default:
FUN23(*VAR3);
VAR3++;
break;
}
}

if (VAR2>=VAR4 && *VAR3)
FUN10("");

return(VAR2);

VAR18:
FUN10("");
return(NULL);
}