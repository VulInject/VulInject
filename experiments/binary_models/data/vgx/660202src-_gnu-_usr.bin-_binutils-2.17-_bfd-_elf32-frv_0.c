FUN1 (VAR1 *VAR2,
struct VAR3 *VAR4)
{
VAR1 *VAR5;
VAR6 *VAR7;
struct _frvfdpic_dynamic_got_plt_info VAR8;

VAR5 = FUN2 (VAR4)->VAR5;
FUN3 (VAR5 != NULL);

if (FUN2 (VAR4)->VAR9)
{

if (VAR4->VAR10)
{
VAR7 = FUN4 (VAR5, "");
FUN3 (VAR7 != NULL);
VAR7->VAR11 = sizeof VAR12;
VAR7->VAR13 = (VAR14 *) VAR12;
}
}

memset (&VAR8, 0, sizeof (VAR8));
VAR8.VAR15.VAR4 = VAR4;

for (;;)
{
htab_t VAR16 = FUN5 (VAR4);

FUN6 (VAR16, VAR17, &VAR16);

if (VAR16 == FUN5 (VAR4))
break;
}

FUN6 (FUN5 (VAR4), VAR18,
&VAR8.VAR15);


FUN7 (VAR4) = FUN8 (VAR5, sizeof (VAR8.VAR15));

if (!FUN9 (VAR2, &VAR8))
return VAR19;

if (FUN2 (VAR4)->VAR9)
{
if (FUN10 (VAR4)->VAR11)
if (!FUN11 (VAR4, VAR20, 0))
return VAR19;

if (FUN12 (VAR4)->VAR11)
if (!FUN11 (VAR4, VAR21, 0)
|| !FUN11 (VAR4, VAR22, VAR23)
|| !FUN11 (VAR4, VAR24, 0))
return VAR19;

if (FUN13 (VAR4)->VAR11)
if (!FUN11 (VAR4, VAR23, 0)
|| !FUN11 (VAR4, VAR25, 0)
|| !FUN11 (VAR4, VAR26,
sizeof (VAR27)))
return VAR19;
}

return VAR28;
}