static void
FUN1(struct VAR1 *VAR2, err_t VAR3)
{
struct VAR4 *VAR5 = (void *)VAR2;	
struct VAR6 *VAR7;
bool VAR8 = VAR5->VAR9.VAR10;
int VAR11 = VAR5->VAR9.VAR11;


VAR12 = VAR11;


if (VAR8)
VAR5->VAR9.VAR10 = FUN2(&VAR5->VAR9.VAR13, &VAR5->VAR9.VAR14
, VAR5->VAR9.VAR15);


if (VAR5->VAR9.VAR16 && VAR3 != NULL)
{
FUN3(VAR17 | VAR18,
{
char VAR19[VAR20];
char VAR21[VAR20];

FUN4(&VAR5->VAR9.VAR13, 0, VAR19, sizeof(VAR19));
FUN4(&VAR5->VAR9.VAR14, 0, VAR21, sizeof(VAR21));
FUN5(""
, VAR5->VAR9.VAR22, VAR19, VAR21, VAR3);
});
}

if (!VAR5->VAR9.VAR16 && VAR3 != NULL)
{
VAR7 = FUN6(NULL, &VAR5->VAR9.VAR13, &VAR5->VAR9.VAR14
, VAR5->VAR9.VAR15);
FUN7(VAR7, &VAR5->VAR9
, FUN8("", VAR5->VAR9.VAR22, VAR3));
}
else if (VAR8 && !VAR5->VAR9.VAR10)
{

char VAR19[VAR20];
char VAR21[VAR20];

FUN4(&VAR5->VAR9.VAR13, 0, VAR19, sizeof(VAR19));
FUN4(&VAR5->VAR9.VAR14, 0, VAR21, sizeof(VAR21));

FUN9(VAR23
, ""
, VAR19, VAR21);
}
else
{
(void)FUN10(&VAR5->VAR9, &VAR5->VAR24, VAR3
, VAR25);
VAR11 = VAR26;	
}

VAR12 = VAR26;
FUN11(VAR11);
}