FUN1 (VAR1 *VAR2,
VAR3 *VAR4,
void *VAR5,
VAR6 *VAR7,
bfd_boolean VAR8)
{
VAR9 *VAR10;
void *VAR11 = NULL;
VAR6 *VAR12 = NULL;
const struct VAR13 *VAR14 = FUN2 (VAR2);

if (FUN3 (VAR4)->VAR15 != NULL)
return FUN3 (VAR4)->VAR15;

if (VAR4->VAR16 == 0)
return NULL;

VAR10 = &FUN3 (VAR4)->VAR10;

if (VAR7 == NULL)
{
bfd_size_type VAR17;

VAR17 = VAR4->VAR16;
VAR17 *= VAR14->VAR18->VAR19 * sizeof (VAR6);
if (VAR8)
VAR7 = FUN4 (VAR2, VAR17);
else
VAR7 = VAR12 = FUN5 (VAR17);
if (VAR7 == NULL)
goto VAR20;
}

if (VAR5 == NULL)
{
bfd_size_type VAR17 = VAR10->VAR21;

if (FUN3 (VAR4)->VAR22)
VAR17 += FUN3 (VAR4)->VAR22->VAR21;
VAR11 = FUN5 (VAR17);
if (VAR11 == NULL)
goto VAR20;
VAR5 = VAR11;
}

if (!FUN6 (VAR2, VAR4, VAR10,
VAR5,
VAR7))
goto VAR20;
if (FUN3 (VAR4)->VAR22
&& (!VAR23
(VAR2, VAR4,
FUN3 (VAR4)->VAR22,
((VAR24 *) VAR5) + VAR10->VAR21,
VAR7 + (FUN7 (VAR10)
* VAR14->VAR18->VAR19))))
goto VAR20;


if (VAR8)
FUN3 (VAR4)->VAR15 = VAR7;

if (VAR11 != NULL)
free (VAR11);



return VAR7;

VAR20:
if (VAR11 != NULL)
free (VAR11);
if (VAR12 != NULL)
free (VAR12);
return NULL;
}