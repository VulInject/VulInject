void
FUN1(int VAR1, short VAR2, void *VAR3)
{
static struct VAR4	*VAR5;
static struct VAR6	*VAR6;
struct imsg			 VAR7;
struct VAR8			*VAR9 = VAR3;
struct VAR10			*VAR11 = &VAR9->VAR11;
struct imsg_ifinfo		 VAR12;
ssize_t				 VAR13;
int				 VAR14 = 0;

if (VAR2 & VAR15) {
if ((VAR13 = FUN2(VAR11)) == -1 && VAR16 != VAR17)
FUN3("");
if (VAR13 == 0)	
VAR14 = 1;
}
if (VAR2 & VAR18) {
if ((VAR13 = FUN4(&VAR11->VAR19)) == -1 && VAR16 != VAR17)
FUN3("");
if (VAR13 == 0)	
VAR14 = 1;
}

for (;;) {
if ((VAR13 = FUN5(VAR11, &VAR7)) == -1)
FUN3("", VAR20);
if (VAR13 == 0)	
break;

switch (VAR7.VAR21.VAR22) {
case VAR23:

if (VAR24)
FUN6(""
"", VAR20);

if ((VAR1 = VAR7.VAR1) == -1)
FUN6(""
"", VAR20);

VAR24 = malloc(sizeof(struct VAR8));
if (VAR24 == NULL)
FUN3(NULL);

FUN7(&VAR24->VAR11, VAR1);
VAR24->VAR25 = VAR26;
VAR24->VAR27 = VAR15;

FUN8(&VAR24->VAR28, VAR24->VAR11.VAR1,
VAR24->VAR27, VAR24->VAR25,
VAR24);
FUN9(&VAR24->VAR28, NULL);

if (FUN10("", NULL) == -1)
FUN3("");

break;
case VAR29:
if (FUN11(VAR7) != sizeof(VAR12))
FUN6("",
VAR20, FUN11(VAR7));
memcpy(&VAR12, VAR7.VAR30, sizeof(VAR12));
if (VAR12.VAR31[VAR32 - 1] != '')
FUN6("");
FUN12(&VAR12);
break;
case VAR33:
if (VAR5 != NULL)
FUN6(""
"", VAR20);
if ((VAR5 = malloc(sizeof(struct VAR4))) ==
NULL)
FUN3(NULL);
FUN13(&VAR5->VAR34);
break;
case VAR35:
if (FUN11(VAR7) != sizeof(struct
VAR6))
FUN6(""
"", VAR20, FUN11(VAR7));
if ((VAR6 = malloc(sizeof(struct VAR6)))
== NULL)
FUN3(NULL);
memcpy(VAR6, VAR7.VAR30, sizeof(struct
VAR6));
VAR6->VAR36 = NULL;
VAR6->VAR37 = 0;
VAR6->VAR38 = NULL;
VAR6->VAR39 = 0;
VAR6->VAR40 = NULL;
FUN14(&VAR5->VAR34,
VAR6, VAR41);
break;
case VAR42:
if (VAR6 == NULL)
FUN3(""
"");
if (FUN11(VAR7) > 255 + 2)
FUN6(""
"", VAR20, FUN11(VAR7));
if ((VAR6->VAR36 = malloc(FUN11(VAR7)))
== NULL)
FUN3(NULL);
memcpy(VAR6->VAR36, VAR7.VAR30,
FUN11(VAR7));
VAR6->VAR37 = FUN11(VAR7);
break;
case VAR43:
if (VAR6 == NULL)
FUN3(""
"");
if (FUN11(VAR7) > 255 + 2)
FUN6(""
"", VAR20, FUN11(VAR7));
if ((VAR6->VAR38 = malloc(FUN11(VAR7)))
== NULL)
FUN3(NULL);
memcpy(VAR6->VAR38, VAR7.VAR30,
FUN11(VAR7));
VAR6->VAR39 = FUN11(VAR7);
break;
case VAR44:
if (VAR6 == NULL)
FUN3(""
"");
if (((char *)VAR7.VAR30)[FUN11(VAR7) - 1] !=
'')
FUN6("");
if (FUN11(VAR7) > 256)
FUN6("");
if ((VAR6->VAR40 = strdup(VAR7.VAR30)) == NULL)
FUN3(NULL);
break;
case VAR45: {
struct VAR46	*VAR47;
int			*VAR48;
int			 VAR49, VAR50;
char			*VAR51;
char			 VAR52[VAR53];

if (VAR5 == NULL)
FUN6(""
"", VAR20);
VAR48 = FUN15(VAR54, VAR5);
FUN16(VAR54, VAR5);
VAR5 = NULL;
for (VAR49 = 0; VAR48[VAR49] != 0; VAR49++) {
VAR50 = VAR48[VAR49];
VAR51 = FUN17(VAR50, VAR52);
VAR47 = FUN18(VAR50);
if (VAR51 == NULL || VAR47 == NULL)
continue;
VAR6 = FUN19(
&VAR54->VAR34, VAR51);
if (VAR6 == NULL)
continue;
if (VAR6->VAR55 & VAR56)
FUN20(VAR47);
if (VAR6->VAR55 & VAR57)
FUN21(VAR47);
}
free(VAR48);
break;
}
default:
FUN22("", VAR20,
VAR7.VAR21.VAR22);
break;
}
FUN23(&VAR7);
}
if (!VAR14)
FUN24(VAR9);
else {

FUN25(&VAR9->VAR28);
FUN26(NULL);
}
}