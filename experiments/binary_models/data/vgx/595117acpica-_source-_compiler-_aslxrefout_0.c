FUN1 (
VAR1       *VAR2,
UINT32                  VAR3,
void                    *VAR4)
{
VAR5           *VAR6 = (VAR5 *) VAR4;
VAR7     *VAR8;
char                    *VAR9;




if (!VAR2->VAR10.VAR8 ||
(VAR2->VAR10.VAR11 != VAR12))
{
return (VAR13);
}



if (VAR2->VAR10.VAR8->VAR14.VAR15[0] == '')
{
VAR6->VAR16++;
return (VAR13);
}

VAR8 = VAR2->VAR10.VAR8;
VAR9 = FUN2 (VAR8, VAR17);

FUN3 (VAR18,
"",
VAR2->VAR10.VAR19, VAR9,
FUN4 (VAR8->VAR20), VAR8->VAR21);

VAR6->VAR22++;
VAR6->VAR23 = 0;
VAR6->VAR24 = VAR2;

(void) FUN5 (VAR25, VAR26,
VAR27, NULL, VAR6);

if (!VAR6->VAR23)
{
FUN3 (VAR18,
"");
VAR6->VAR28++;
}
else
{
FUN3 (VAR18,
"",
VAR6->VAR23, VAR9);
}

FUN6 (VAR9);
return (VAR13);
}