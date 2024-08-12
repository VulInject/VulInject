int					
main(int  argc,				
char *argv[])			
{
int		VAR1;			
const char	*VAR2;		
char		VAR3[VAR4],	
VAR5[VAR6];	
int		VAR7;		
int		VAR8;			
VAR9	*VAR10;			
VAR11	*VAR12,			
*VAR13;			
struct stat	VAR14;		
VAR15	*VAR16;			
VAR17	*VAR18;		
VAR19	*VAR20;		


VAR10        = NULL;
VAR12         = NULL;
VAR13         = NULL;
VAR16         = NULL;
VAR2 = "" VAR21 "";

VAR14.VAR22 = 0;

for (VAR1 = 1; VAR1 < argc; VAR1 ++)
if (!strcmp(argv[VAR1], ""))
{
VAR1 ++;

if (VAR1 < argc)
{
VAR10 = FUN1(argv[VAR1], VAR2);

if (VAR16)
FUN2(VAR10, VAR16);
}
}
else if (!strcmp(argv[VAR1], ""))
{
VAR1 ++;

if (VAR1 < argc)
VAR2 = argv[VAR1];
}
else if (!strcmp(argv[VAR1], ""))
{
VAR1 ++;

if (VAR1 < argc)
{
VAR16 = FUN3(argv[VAR1]);

if (VAR10)
FUN2(VAR10, VAR16);
}
}
else if (!VAR12)
{
if (!VAR10)
VAR10 = FUN1("", VAR2);

if (VAR16)
FUN2(VAR10, VAR16);

VAR12 = FUN4(VAR10, argv[VAR1], NULL, &VAR7);
FUN5(argv[VAR1], &VAR14);

if (VAR12)
FUN6("", argv[VAR1], VAR12->VAR3, VAR12->VAR5,
VAR7 ? "" : "");
else if ((VAR12 = FUN7(VAR10, "", "")) != NULL)
FUN6("", argv[VAR1]);
else
{
FUN6("", argv[VAR1]);
if (VAR10)
FUN8(VAR10);
return (1);
}
}
else
{
sscanf(argv[VAR1], "", VAR3, VAR5);
VAR13 = FUN7(VAR10, VAR3, VAR5);

VAR18 = FUN9(VAR10, VAR12, (VAR23)VAR14.VAR22, VAR13, &VAR8);

if (!VAR18)
{
FUN6("", VAR12->VAR3,
VAR12->VAR5, argv[VAR1]);
}
else
{
int VAR24 = 1;			

FUN6("", VAR8);

for (VAR20 = (VAR19 *)FUN10(VAR18);
VAR20;
VAR20 = (VAR19 *)FUN11(VAR18))
{
if (!strcmp(VAR20->VAR20, ""))
continue;

if (VAR24)
{
VAR24 = 0;
fputs(VAR20->VAR20, VAR25);
}
else
FUN6("", VAR20->VAR20);
}

FUN12('');

FUN13(VAR18);
}
}

if (!VAR10)
{
VAR10 = FUN1("", VAR2);
if (VAR16)
FUN2(VAR10, VAR16);
}

if (!VAR12)
{
FUN14("");
for (VAR12 = FUN15(VAR10); VAR12; VAR12 = FUN16(VAR10))
{
FUN6("", VAR12->VAR3, VAR12->VAR5, VAR12->VAR26);
FUN17(VAR12->VAR27);
FUN14("");
}

FUN14("");

FUN14("");
for (VAR20 = FUN18(VAR10); VAR20; VAR20 = FUN19(VAR10))
FUN6("",
VAR20->VAR12->VAR3, VAR20->VAR12->VAR5,
VAR20->VAR13->VAR3, VAR20->VAR13->VAR5,
VAR20->VAR20, VAR20->VAR8);

FUN20(VAR10, "");
}

return (0);
}