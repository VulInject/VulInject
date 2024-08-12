{ "", "", VAR1, sizeof(VAR1) },
{ "", "", VAR2, sizeof(VAR2) },
{ "", "", VAR3, sizeof(VAR3) },
{ "", "", VAR4, sizeof(VAR4) },
{ "", "", VAR5, sizeof(VAR5) },
{ "", "", VAR6, sizeof(VAR6) },
{ "", "", VAR7, sizeof(VAR7) },
{ "", "", VAR8, sizeof(VAR8) },
{ "", "", VAR9, sizeof(VAR9) },
{ "", "", VAR10, sizeof(VAR10) },
{ "", "", VAR11, sizeof(VAR11) },
{ "", "", VAR12, sizeof(VAR12) },
{ "", "", VAR13, sizeof(VAR13) }
};


static VAR14 *FUN1(const VAR15 *VAR16,
VAR17 *VAR18)
{
const void
*VAR19;

VAR14
*VAR20;

VAR15
*VAR21;

VAR22
VAR23;

VAR24
VAR25;

VAR21=FUN2(VAR16);
VAR20=(VAR14 *) NULL;
VAR19=(const void *) NULL;
VAR25=0;
for (VAR23=0; VAR23 < (VAR22) (sizeof(VAR26)/sizeof(VAR26[0])); VAR23++)
if (FUN3(VAR21->VAR27,VAR26[VAR23].VAR28) == 0)
{
(void) FUN4(VAR21->VAR29,VAR26[VAR23].VAR29,
VAR30);
VAR19=VAR26[VAR23].VAR19;
VAR25=VAR26[VAR23].VAR25;
break;
}
if (VAR19 == (const void *) NULL)
{
VAR21=FUN5(VAR21);
FUN6(VAR31,"");
}
VAR20=FUN7(VAR21,VAR19,VAR25,VAR18);
if (VAR16->VAR32 != (char *) NULL)
{
VAR14
*VAR33;


VAR33=VAR20;
VAR20=FUN8(VAR16,VAR18);
(void) FUN9(VAR20,VAR18);
(void) FUN10(VAR33,VAR34,VAR18);
(void) FUN11(VAR20,VAR33,VAR18);
VAR33=FUN12(VAR33);
}
VAR21=FUN5(VAR21);
return(FUN13(VAR20));
}