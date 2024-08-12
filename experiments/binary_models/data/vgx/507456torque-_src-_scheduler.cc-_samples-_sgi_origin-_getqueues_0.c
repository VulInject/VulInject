int
FUN1(VAR1 *VAR2)
{
char   *VAR3 = "";
int     VAR4 = 0, VAR5;
VAR6 *VAR7;
VAR8 *VAR9;
static AttrList VAR10[] =
{
{&VAR10[1],  VAR11, "", ""},
{&VAR10[2],  VAR12, "", ""},
{&VAR10[3],  VAR13, "", ""},
{&VAR10[4],  VAR14, "", ""},
{&VAR10[5],  VAR15, "", ""},
{&VAR10[6],  VAR16, "", ""},
{&VAR10[7],  VAR17, "", ""},
{&VAR10[8],  VAR18, "", ""},
{&VAR10[9],  VAR19, "", ""},
{&VAR10[10], VAR20, "", ""},
{&VAR10[11], VAR21, "", ""},
{NULL,       VAR22, "", ""}
};
size_t  VAR23 = VAR24;
size_t  VAR25    = VAR24;
size_t  VAR26     = VAR24;
size_t  VAR27     = VAR24;
int     VAR28 = VAR24;
int     VAR29    = VAR24;
int     VAR30     = VAR24;
int     VAR31     = VAR24;
int     VAR32, VAR33;

VAR2->VAR34 = VAR24;
VAR2->VAR35 = VAR24;
VAR2->VAR36 = VAR24;
VAR2->VAR37      = VAR24;

VAR2->VAR38 = VAR24;
VAR2->VAR39 = VAR24;
VAR2->VAR40 = VAR24;
VAR2->VAR41 = VAR24;
VAR2->VAR42 = VAR24;
VAR2->VAR43 = VAR24;
VAR2->VAR44 = VAR24;
VAR2->VAR45 = VAR24;

VAR2->VAR46 = 0;
FUN2(&VAR2->VAR47);
FUN2(&VAR2->VAR48);
VAR2->VAR49 = NULL;

if (VAR2->VAR50)
{
FUN3(("", VAR3,
VAR2->VAR51));
FUN4(VAR2->VAR50);
}

if (VAR2->VAR52)
{
FUN3(("", VAR3,
VAR2->VAR51));
FUN5(VAR2->VAR52);
}

VAR2->VAR50         = NULL;

VAR2->VAR52 = NULL;



if ((VAR7 = FUN6(VAR53, VAR2->VAR51, VAR10, NULL)) == NULL)
{
sprintf(VAR54, ""%VAR55\"",
VAR2->VAR51);
FUN7(VAR56, VAR57, VAR3, VAR54);
FUN3(("", VAR3, VAR54));
return (-1);
}



for (VAR9 = VAR7->VAR58; VAR9 != NULL; VAR9 = VAR9->VAR59)
{


if (!strcmp(VAR9->VAR60, VAR11))
{
if (FUN8(VAR9->VAR61, &VAR5) == 0)
{
if (VAR5) 
VAR2->VAR46 &= ~VAR62;
else
VAR2->VAR46 |= VAR62;
}
else
{
FUN3(("", VAR3,
VAR9->VAR60, VAR9->VAR61));
}

continue;
}


if (!strcmp(VAR9->VAR60, VAR12))
{
if (FUN8(VAR9->VAR61, &VAR5) == 0)
{
if (VAR5) 
VAR2->VAR46 &= ~VAR63;
else
VAR2->VAR46 |= VAR63;
}
else
{
FUN3(("", VAR3,
VAR9->VAR60, VAR9->VAR61));
}

continue;
}


if (!strcmp(VAR9->VAR60, VAR13))
{
VAR2->VAR35 = FUN9(VAR9->VAR61, VAR64);
VAR2->VAR34 = FUN9(VAR9->VAR61, VAR65);
continue;
}


if (!strcmp(VAR9->VAR60, VAR22))
{
VAR2->VAR36 = FUN10(VAR9->VAR61);
continue;
}


if (!strcmp(VAR9->VAR60, VAR14))
{
VAR2->VAR37 = FUN10(VAR9->VAR61);
continue;
}


if (!strcmp(VAR9->VAR60, VAR20))
{
if (FUN8(VAR9->VAR61, &VAR5) == 0)
{
if (VAR5) 
VAR2->VAR46 |= VAR66;
else
VAR2->VAR46 &= ~VAR66;
}
else
{
FUN3(("", VAR3,
VAR9->VAR60, VAR9->VAR61));
}

continue;
}

if (!strcmp(VAR9->VAR60, VAR21))
{
if (VAR2->VAR52)
{
FUN3(("", VAR2->VAR51));
FUN5(VAR2->VAR52);
}

VAR2->VAR52 = FUN11(VAR9->VAR61);

continue;
}


if (!strcmp(VAR9->VAR60, VAR18))
{
if (!strcmp("", VAR9->VAR67))
{
VAR26 = FUN12(VAR9->VAR61);
continue;
}

if (!strcmp("", VAR9->VAR67))
{
VAR30 = FUN10(VAR9->VAR61);
continue;
}

if (!strcmp("", VAR9->VAR67))
{
VAR2->VAR43 = FUN13(VAR9->VAR61);
continue;
}

if (!strcmp("", VAR9->VAR67))
{
if (FUN14(VAR9->VAR61, &VAR2->VAR47))
{
(void)sprintf(VAR54, "",
VAR9->VAR61);
FUN7(VAR68, VAR57, VAR3,
VAR54);
}
else
VAR2->VAR46 |= VAR69; 
}


continue;
}


if (!strcmp(VAR9->VAR60, VAR19))
{
if (!strcmp("", VAR9->VAR67))
{
VAR27 = FUN12(VAR9->VAR61);
continue;
}

if (!strcmp("", VAR9->VAR67))
{
VAR31 = FUN10(VAR9->VAR61);
continue;
}

if (!strcmp("", VAR9->VAR67))
{
VAR2->VAR44 = FUN13(VAR9->VAR61);
continue;
}

continue;
}


if (!strcmp(VAR9->VAR60, VAR16))
{
if (!strcmp("", VAR9->VAR67))
{
VAR25 = FUN12(VAR9->VAR61);
continue;
}

if (!strcmp("", VAR9->VAR67))
{
VAR29 = FUN10(VAR9->VAR61);
}

continue;
}

if (!strcmp(VAR9->VAR60, VAR17))
{
if (!strcmp("", VAR9->VAR67))
{
VAR23 = FUN12(VAR9->VAR61);
continue;
}

if (!strcmp("", VAR9->VAR67))
{
VAR28 = FUN10(VAR9->VAR61);
continue;
}

if (!strcmp("", VAR9->VAR67))
VAR2->VAR45 = FUN13(VAR9->VAR61);
}


}

FUN15(VAR7);


VAR32 = FUN16(VAR28);
VAR33 = FUN17(VAR23);

if (VAR32 != VAR33)
{
sprintf(VAR54,
"",
VAR3, VAR2->VAR51, VAR28, FUN18(VAR23),
VAR32, VAR33);
FUN7(VAR56, VAR57, VAR3, VAR54);
FUN3(("", VAR3, VAR54));
}

VAR32 = FUN16(VAR30);

VAR33 = FUN17(VAR26);

if (VAR32 != VAR33)
{
sprintf(VAR54,
"",
VAR3, VAR2->VAR51, VAR30, FUN18(VAR26),
VAR32, VAR33);
FUN7(VAR56, VAR57, VAR3, VAR54);
FUN3(("", VAR3, VAR54));
}

VAR32 = FUN16(VAR31);

VAR33 = FUN17(VAR27);

if (VAR32 != VAR33)
{
sprintf(VAR54,
"",
VAR3, VAR2->VAR51, VAR31, FUN18(VAR27),
VAR32, VAR33);
FUN7(VAR56, VAR57, VAR3, VAR54);
FUN3(("", VAR3, VAR54));
}


if ((VAR28 != VAR24) && (VAR23 != VAR24))
VAR2->VAR40 = FUN19(VAR28, VAR23);

if ((VAR30 != VAR24) && (VAR26 != VAR24))
VAR2->VAR38     = FUN19(VAR30, VAR26);

if ((VAR31 != VAR24) && (VAR27 != VAR24))
VAR2->VAR39     = FUN19(VAR31, VAR27);

if ((VAR29 != VAR24) && (VAR25 != VAR24))
VAR2->VAR41    = FUN19(VAR29, VAR25);



if (VAR70)
VAR4 = FUN20(VAR2, &VAR70);

if (VAR4 < 0)
{
sprintf(VAR54, "",
VAR3, VAR2->VAR51);
FUN7(VAR56, VAR57, VAR3, VAR54);
FUN3(("", VAR3, VAR54));
}

if (VAR2->VAR41 == VAR24)
VAR2->VAR41 = 0;

if (VAR2->VAR34    == VAR24)
VAR2->VAR34    = 0;


if (VAR2->VAR34)
{
VAR2->VAR71 = 0;
}
else
{
if (VAR2->VAR71 == 0)
VAR2->VAR71 = VAR72;
}


if ((strcmp(VAR2->VAR51, VAR73->VAR2->VAR51) != 0) ||
((VAR74 != NULL) &&
(!strcmp(VAR2->VAR51, VAR74->VAR2->VAR51))))
{

VAR2->VAR49 = FUN21(VAR2->VAR75);

if (VAR2->VAR49 != NULL)
{

VAR2->VAR49->VAR76 += VAR2->VAR41;
VAR2->VAR49->VAR77       += VAR2->VAR34;



if (VAR78 &&
!(VAR2->VAR49->VAR46 & VAR79))
{
if (FUN22(VAR2->VAR50))
VAR2->VAR49->VAR46 |= VAR79;
}


FUN23(VAR2, VAR2->VAR49);


}
else
{
(void)sprintf(VAR54,
"",
VAR2->VAR51, VAR2->VAR75);
FUN7(VAR68, VAR57, VAR3, VAR54);
FUN3(("", VAR3, VAR54));

VAR2->VAR46 |= VAR63;
}
}

FUN24(VAR2, VAR80);



if ((VAR2->VAR46 & VAR62) == 0)
{
if (!FUN25(VAR2))
{
sprintf(VAR54, "",
VAR2->VAR51);
FUN7(VAR56, VAR57, VAR3, VAR54);
FUN3(("", VAR3, VAR54));

return (1);
}
}

return (0);
}

void
FUN24(VAR1 *VAR2, int VAR81)
{
VAR82    *VAR83;
VAR84 *VAR85;
char    VAR86[32];
char   *VAR87;
int     VAR88;
Bitfield VAR89;

FUN3(("",
VAR2->VAR51, VAR2->VAR75,
(VAR2->VAR46 & VAR63) ? "" : "",
(VAR2->VAR46 & VAR62) ? "" : ""));

FUN3(("",
(VAR2->VAR46 & VAR90) ? "" : "",
(VAR2->VAR46 & VAR91) ? "" : "",
(VAR2->VAR46 & VAR92) ? "" : "",
(VAR2->VAR46 & VAR66) ? "" : ""));

if (VAR93 && VAR72 >= VAR93)
FUN3(("", VAR2->VAR94 ? "" : ""));

FUN3((""));

if (VAR2->VAR46 & VAR69)
{
FUN26(&VAR89);
FUN3(("",
FUN27(&VAR2->VAR47, &VAR89)));
FUN3(("",
FUN27(&VAR2->VAR47, &VAR2->VAR48)));
}


sprintf(VAR86, "", VAR2->VAR34);

FUN3(("",
VAR2->VAR34 != VAR24 ? VAR86 : ""));

sprintf(VAR86, "", VAR2->VAR36);

FUN3(("", VAR2->VAR36 != VAR24 ? VAR86 : ""));

sprintf(VAR86, "", VAR2->VAR37);

FUN3(("", VAR2->VAR37 != VAR24 ? VAR86 : ""));

sprintf(VAR86, "", VAR2->VAR35);

FUN3(("", VAR2->VAR35 != VAR24 ? VAR86 : ""));

sprintf(VAR86, "", VAR2->VAR41);

FUN3(("", VAR2->VAR41 != VAR24 ? VAR86 : ""));

sprintf(VAR86, "", VAR2->VAR38);

FUN3(("", VAR2->VAR38 != VAR24 ? VAR86 : ""));

sprintf(VAR86, "", VAR2->VAR40);

FUN3(("", VAR2->VAR40 != VAR24 ? VAR86 : ""));

sprintf(VAR86, "", VAR2->VAR39);

FUN3(("", VAR2->VAR39 != VAR24 ? VAR86 : ""));

FUN3(("", (VAR2->VAR43 != VAR24) ?
FUN28(VAR2->VAR43) : ""));

FUN3(("",
VAR2->VAR45 != VAR24 ?
FUN28(VAR2->VAR45) : ""));

FUN3(("", (VAR2->VAR44 != VAR24) ?
FUN28(VAR2->VAR44) : ""));

if (VAR2->VAR95)

FUN3(("", FUN29(&VAR2->VAR95)));

if (VAR2->VAR71)

FUN3(("", FUN29(&VAR2->VAR71)));

if (VAR2->VAR52 && (VAR2->VAR46 & VAR66))
{
FUN3((""));
VAR88 = 9;  

for (VAR85 = VAR2->VAR52; VAR85 != NULL; VAR85 = VAR85->VAR59)
{
VAR88 += strlen(VAR85->VAR96) + 1;

if (VAR88 >= 72)
{
FUN3((""));
VAR88 = 0;
}

FUN3(("",

((VAR88 == 0) || (VAR85 == VAR2->VAR52)) ? "" : "",
VAR85->VAR96));
}

FUN3((""));
}

if (VAR81 && VAR2->VAR50)
{
FUN3((""));

VAR88 = 5;  

for (VAR83 = VAR2->VAR50; VAR83 != NULL; VAR83 = VAR83->VAR59)
{


if ((VAR87 = strchr(VAR83->VAR97, '')) != NULL)
* VAR87 = '';

VAR88 += strlen(VAR83->VAR97) + 3; 

if (VAR88 >= 72)
{
FUN3((""));
VAR88 = 0;
}

FUN3(("", VAR83->VAR97));

FUN3(("",
(VAR83->VAR46 & VAR98) ? '' :
(VAR83->VAR46 & VAR99) ? '' :
VAR83->VAR100));

if (VAR87 != NULL)
*VAR87 = '';
}

FUN3((""));
}
}


static int
FUN20(VAR1 *VAR2, VAR82 **VAR101)
{
VAR82    *VAR83, *VAR102, *VAR59, *VAR103, *VAR104;
int     VAR4;
int     VAR34, VAR35, VAR105, VAR106;


VAR104 = NULL;


VAR34 = 0;
VAR35 = 0;
VAR105 = 0;
VAR106 = 0;


VAR4 = 0;


VAR103 = NULL;

if (VAR2->VAR50)
{
for (VAR103 = VAR2->VAR50; VAR103->VAR59 != NULL; VAR103 = VAR103->VAR59)

;
}

VAR102 = NULL;

for (VAR83 = *VAR101; VAR83 != NULL; VAR83 = VAR59)
{
VAR59 = VAR83->VAR59;



if (strcmp(VAR83->VAR51, VAR2->VAR51))
{
VAR102 = VAR83;
continue;
}


if (VAR83 == *VAR101)
{




*VAR101 = VAR59;
VAR102 = *VAR101;

}
else
{



VAR102->VAR59 = VAR83->VAR59;
}


if (VAR103 == NULL)
VAR2->VAR50 = VAR83;
else
VAR103->VAR59 = VAR83;

VAR103 = VAR83;

VAR83->VAR59 = NULL;

if (VAR83->VAR46 & VAR107)
{

free(VAR83->VAR51);
VAR83->VAR51 = VAR2->VAR51;
VAR83->VAR2 = VAR2;


VAR83->VAR46 &= ~VAR107;
}


VAR4 ++;

switch (VAR83->VAR100)
{

case '':
VAR34 ++;



if (VAR83->VAR108 < 0)
{
VAR83->VAR108 = VAR109;
}


if ((VAR104 == NULL) ||
(VAR83->VAR108 > VAR104->VAR108))
{
VAR104 = VAR83;
}

break;

case '':
VAR35 ++;
break;

case '':
VAR105 ++;
break;

default:
VAR106 ++;
break;
}

}


if (VAR104)
VAR2->VAR95 = VAR72 + VAR104->VAR108;
else
VAR2->VAR95 = 0;

return (VAR4);
}


static int
FUN25(VAR1 *VAR2)
{
char   *VAR3 = "";
VAR82    *VAR83;
int     VAR35, VAR34;
int     VAR110;
int     VAR111;

VAR110 = 1; 


if (VAR2->VAR46 & VAR69)
{
if (VAR2->VAR38 != FUN30(&(VAR2->VAR47)))
{
sprintf(VAR54, ""
"", VAR2->VAR51, VAR2->VAR38,
FUN30(&(VAR2->VAR47)));
FUN7(VAR56, VAR57, VAR3, VAR54);
FUN3(("", VAR3, VAR54));
}

VAR111 = 0;

for (VAR83 = VAR2->VAR50; VAR83 != NULL; VAR83 = VAR83->VAR59)
if (VAR83->VAR100 == '')
VAR111 += VAR83->VAR112;

if (VAR2->VAR41 != VAR111)
{
if (VAR2->VAR41 > VAR111)
{
sprintf(VAR54,
"",
VAR2->VAR51, VAR2->VAR41, VAR111);
VAR110 = 0;
}
else
{
sprintf(VAR54, ""
"",
VAR2->VAR51, VAR2->VAR41, VAR111, VAR111);
VAR2->VAR41 = VAR111;
}

FUN7(VAR56, VAR57, VAR3, VAR54);

FUN3(("", VAR3, VAR54));
}
}



VAR35 = VAR34 = 0;

for (VAR83 = VAR2->VAR50; VAR83 != NULL; VAR83 = VAR83->VAR59)
{
switch (VAR83->VAR100)
{

case '':
VAR34 ++;
break;

case '':
VAR35 ++;
break;

default:

break;
}
}

if (VAR2->VAR34 != VAR34)
{
sprintf(VAR54,
"",
VAR2->VAR51, VAR2->VAR34, VAR34);
FUN7(VAR56, VAR57, VAR3, VAR54);
FUN3(("", VAR3, VAR54));
VAR110 = 0;
}

if (VAR2->VAR35 != VAR35)
{
sprintf(VAR54,
"",
VAR2->VAR51, VAR2->VAR35, VAR35);
FUN7(VAR56, VAR57, VAR3, VAR54);
FUN3(("", VAR3, VAR54));
VAR110 = 0;
}

if (VAR2->VAR34 && (VAR2->VAR95 < VAR72))
{
sprintf(VAR54,
"",
VAR2->VAR51, (VAR72 - VAR2->VAR95));
FUN7(VAR56, VAR57, VAR3, VAR54);
FUN3(("", VAR3, VAR54));
VAR110 = 0;
}

return (VAR110);
}

static int
FUN23(VAR1 *VAR2, VAR113 *VAR49)
{
VAR82 *VAR83;
Bitfield VAR114;

FUN2(&VAR114);


FUN31(&VAR2->VAR48, &(VAR2->VAR47));
FUN32(&VAR2->VAR48, &(VAR2->VAR49->VAR48));



if (VAR2->VAR34)
{
for (VAR83 = VAR2->VAR50; VAR83 != NULL; VAR83 = VAR83->VAR59)
{
if (VAR83->VAR100 == '')
FUN33(&VAR114, &(VAR83->VAR115));
}
}


FUN34(&VAR2->VAR48, &VAR114);

FUN33(&VAR49->VAR111, &VAR114);

return (0);
}