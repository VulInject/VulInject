int
FUN1(VAR1 *VAR2, VAR3 *VAR4,
const VAR5 *VAR6, const VAR5 *VAR7, VAR8 *VAR9,
int *VAR10)
{
int VAR11, VAR12;
off_t VAR13 = 0;
int VAR14 = 0;
int VAR15 = 0;
int VAR16 = 0;
off_t VAR17 = 0;
VAR1 *VAR18;
uschar VAR19[VAR20];
VAR1 *VAR21 = VAR19;
VAR1 *VAR22;



VAR18 = FUN2("", VAR2);

FUN3(VAR23) FUN4("", VAR2);
if ((VAR12 = FUN5(VAR18, VAR24|VAR25, VAR4->VAR26 ? VAR4->VAR26 : 0600)) < 0)
{
if (VAR27 != VAR28) return -1;
FUN3(VAR23)
FUN4("", VAR18);
goto VAR29;
}



if ((VAR11 = read(VAR12, VAR19, sizeof(VAR19))) >= sizeof(VAR19))
{
FUN3(VAR23)
FUN4("", VAR11);
goto VAR29;
}
VAR19[VAR11] = 0;   



FUN3(VAR23)
FUN4("");

for (;;)
{
off_t VAR30 = (VAR8)FUN6(VAR21, &VAR22);



if (*VAR22 == '') VAR13 = VAR30;
else if (*VAR22 == '') VAR14 = (int)VAR30;
if (!FUN7(*VAR22++))
{
FUN3(VAR23)
FUN4(""
""%.*VAR31\"", (int)(VAR22 - VAR19),
VAR19);
goto VAR29;
}
if (*VAR22 == '' || *VAR22 == 0) break;
if (*VAR22++ != '')
{
FUN3(VAR23)
FUN4(""
""%.*VAR31\"", (int)(VAR22 - VAR19),
VAR19);
goto VAR29;
}
VAR21 = VAR22;
}



if (VAR13 != VAR4->VAR32 ||
VAR14 != VAR4->VAR33)
{
FUN3(VAR23)
FUN4(""
"" VAR34 "" VAR34 ""
"", VAR4->VAR32,
VAR13, VAR4->VAR33, VAR14);
goto VAR29;
}



FUN3(VAR23)
FUN4("");

while (*VAR22++ == '')
{
if (*VAR22 == 0) break;
VAR16++;
VAR21 = VAR22;
VAR17 += (VAR8)FUN6(VAR21, &VAR22);
if (*VAR22 != '') break;
VAR21 = VAR22 + 1;
VAR15 += FUN8(VAR21, &VAR22, 10);
}



if (*VAR22 == 0)
{
if (VAR17 < 0 || VAR15 < 0)
{
FUN3(VAR23) FUN4(""
"" VAR34 "", VAR17, VAR15);
goto VAR29;
}

if (VAR4->VAR32 > 0 &&
(VAR17 + (VAR4->VAR35? VAR36 : 0) > VAR4->VAR32 ||
(VAR4->VAR33 > 0 &&
VAR15 + (VAR4->VAR35 ? 1:0) >
VAR4->VAR33)
))
{
struct stat VAR37;
if (VAR16 > 1)
{
FUN3(VAR23) FUN4(""
"");
goto VAR29;
}

if (FUN9(VAR12, &VAR37) < 0) goto VAR29;  

if (FUN10(NULL) - VAR37.VAR38 > 15*60)
{
FUN3(VAR23) FUN4(""
"");
goto VAR29;
}
}
}




else
{
int VAR39;
time_t VAR40, VAR41;
VAR1 *VAR42;
struct timeval VAR43;

FUN3(VAR23)
{
VAR1 *VAR44 = VAR22;
while (VAR44 > VAR19 && VAR44[-1] != '') VAR44--;
VAR22[1] = 0;

FUN4(""
"",
*VAR22, VAR16 + 1, FUN11(VAR44));
}



VAR29:

if (VAR12 >= 0) (void)close(VAR12);
VAR40 = 0;
VAR15 = 0;
VAR17 = FUN12(VAR2, &VAR15, &VAR40, VAR6, VAR7,
VAR45);

(void)FUN13(&VAR43, NULL);
VAR42 = FUN2("" VAR46 "",
VAR2, VAR43.VAR47, VAR43.VAR48, (long unsigned) FUN14(), VAR49);

VAR12 = FUN5(VAR42, VAR24|VAR50|VAR51, VAR4->VAR26 ? VAR4->VAR26 : 0600);
if (VAR12 >= 0)
{
(void)sprintf(CS VAR19, VAR34 "" VAR34 "",
VAR4->VAR32, VAR4->VAR33, VAR17, VAR15);
VAR39 = FUN15(VAR19);
if (write(VAR12, VAR19, VAR39) != VAR39 || FUN16(VAR42, VAR18) < 0)
{
(void)close(VAR12);
VAR12 = -1;
}
}



FUN3(VAR23) FUN4("");
VAR41 = 0;
(void)FUN12(VAR2, NULL, &VAR41 , NULL, VAR7, VAR52);
if (VAR41 > VAR40)
{
FUN3(VAR23) FUN4(""
"");
(void)FUN17(VAR18);
(void)close(VAR12);
VAR12 = -2;
}
}



FUN3(VAR23) FUN4("" VAR34
"", VAR17, VAR15);
*VAR9 = VAR17;
*VAR10 = VAR15;
return VAR12;
}