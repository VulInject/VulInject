FUN1 (
VAR1       *VAR2,
UINT32                  VAR3,
void                    *VAR4)
{
VAR5           *VAR6 = (VAR5 *) VAR4;
VAR7     *VAR8;
char                    *VAR9;
const VAR10  *VAR11;




if (!VAR2->VAR12.VAR8 ||
(VAR2->VAR12.VAR13 == VAR14))
{
return (VAR15);
}

VAR11 = FUN2 (VAR2->VAR12.VAR16);
if (!(VAR11->VAR17 & VAR18))
{
return (VAR15);
}



if ((VAR2->VAR12.VAR13 != VAR19) &&
(VAR2->VAR12.VAR13 != VAR20) &&
(VAR2->VAR12.VAR13 != VAR21) &&
(VAR2->VAR12.VAR13 != VAR22) &&
(VAR2->VAR12.VAR13 != VAR23) &&
(VAR2->VAR12.VAR13 != VAR24))
{
return (VAR15);
}



if (VAR2->VAR12.VAR8->VAR25.VAR26[0] == '')
{
return (VAR15);
}

VAR8 = VAR2->VAR12.VAR8;
VAR9 = FUN3 (VAR8, VAR27);

FUN4 (VAR28,
"",
VAR2->VAR12.VAR29, VAR9,
FUN5 (VAR8->VAR30));
FUN6 (VAR9);

VAR6->VAR31 = VAR2;
VAR6->VAR32 = 0;
VAR6->VAR33 = 0;

(void) FUN7 (VAR34, VAR35,
VAR36, NULL, VAR6);

if (!VAR6->VAR32)
{
FUN4 (VAR28,
"");
VAR6->VAR37++;
}
else
{
FUN4 (VAR28,
"",
VAR6->VAR32, VAR9);
}

return (VAR15);
}