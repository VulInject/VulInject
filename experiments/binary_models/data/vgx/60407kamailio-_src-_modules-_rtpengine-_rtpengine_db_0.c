static int FUN1(void)
{
int VAR1;
struct VAR2 *VAR3 = NULL;
VAR4 *VAR5 = NULL;
VAR6 *VAR7 = NULL;
VAR8 *VAR9 = NULL;
db_key_t VAR10[] = {&VAR11, &VAR12, &VAR13, &VAR14};

str VAR15;
int VAR16;
unsigned int VAR17, VAR18, VAR19;


int VAR20 = 0;
int VAR21 = 4;

if (VAR22 == NULL)
{
FUN2("");
return -1;
}
if (VAR23.FUN3(VAR22, &VAR24) < 0)
{
FUN2("", VAR24.VAR25, VAR24.VAR26);
return -1;
}
if (VAR23.FUN4(VAR22, 0, 0, 0, VAR10, 0, VAR21, 0, &VAR5) < 0)
{
FUN2("");
return -1;
}

FUN5();

VAR20 = FUN6(VAR5);
VAR9 = FUN7(VAR5);
if (VAR20 == 0)
{
FUN8("");
VAR23.FUN9(VAR22, VAR5);
return 0;
}

for (VAR1=0; VAR1<VAR20; VAR1++)
{
VAR7 = FUN10(VAR9 + VAR1);

VAR17 = FUN11(VAR7);
VAR15.VAR26 = FUN12(VAR7+1).VAR26;
VAR15.VAR25 = strlen(VAR15.VAR26);
VAR18 = FUN11(VAR7+2);
VAR16 = FUN11(VAR7+3);
if (VAR16) {
VAR19 = VAR27;
} else {
VAR19 = 0;
}

if ((VAR3 = FUN13(VAR17)) == NULL)
{
FUN2("", VAR17);
continue;
}

if (FUN14(VAR3, VAR15.VAR26, VAR18, VAR16, VAR19, 1) !=  0)
{
FUN2("",
VAR15.VAR25, VAR15.VAR26, VAR17, VAR16);
}
}

VAR23.FUN9(VAR22, VAR5);
return 0;
}