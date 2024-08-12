void
FUN1(int VAR1, short VAR2, void *VAR3)
{
struct imsg		 VAR4;
struct VAR5		*VAR6 = VAR3;
struct VAR7		*VAR8 = &VAR6->VAR8;
struct imsg_ifinfo	 VAR9;
ssize_t			 VAR10;
int			 VAR11 = 0;

if (VAR2 & VAR12) {
if ((VAR10 = FUN2(VAR8)) == -1 && VAR13 != VAR14)
FUN3("");
if (VAR10 == 0)	
VAR11 = 1;
}
if (VAR2 & VAR15) {
if ((VAR10 = FUN4(&VAR8->VAR16)) == -1 && VAR13 != VAR14)
FUN3("");
if (VAR10 == 0)	
VAR11 = 1;
}

for (;;) {
if ((VAR10 = FUN5(VAR8, &VAR4)) == -1)
FUN3("", VAR17);
if (VAR10 == 0)	
break;

switch (VAR4.VAR18.VAR19) {
case VAR20:

if (VAR21)
FUN6(""
"", VAR17);

if ((VAR1 = VAR4.VAR1) == -1)
FUN6(""
"", VAR17);

VAR21 = malloc(sizeof(struct VAR5));
if (VAR21 == NULL)
FUN3(NULL);

FUN7(&VAR21->VAR8, VAR1);
VAR21->VAR22 = VAR23;
VAR21->VAR24 = VAR12;

FUN8(&VAR21->VAR25, VAR21->VAR8.VAR1,
VAR21->VAR24, VAR21->VAR22,
VAR21);
FUN9(&VAR21->VAR25, NULL);

if (FUN10("", NULL) == -1)
FUN3("");
break;
case VAR26:
if (FUN11(VAR4) != sizeof(VAR9))
FUN6("",
VAR17, FUN11(VAR4));
memcpy(&VAR9, VAR4.VAR27, sizeof(VAR9));
FUN12(&VAR9);
break;
default:
FUN13("", VAR17,
VAR4.VAR18.VAR19);
break;
}
FUN14(&VAR4);
}
if (!VAR11)
FUN15(VAR6);
else {

FUN16(&VAR6->VAR25);
FUN17(NULL);
}
}