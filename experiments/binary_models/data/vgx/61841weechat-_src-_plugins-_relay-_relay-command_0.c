FUN1 (const void *VAR1, void *VAR2,
struct VAR3 *VAR4, int argc,
char **argv, char **VAR5)
{
struct VAR6 *VAR7;
struct VAR8 *VAR9;
char *VAR10;
int VAR11, VAR12;


(void) VAR1;
(void) VAR2;
(void) VAR4;

if (argc > 1)
{
if (FUN2 (argv[1], "") == 0)
{
FUN3 (0);
return VAR13;
}

if (FUN2 (argv[1], "") == 0)
{
FUN3 (1);
return VAR13;
}

if (FUN2 (argv[1], "") == 0)
{
FUN4 ();
return VAR13;
}

if (FUN2 (argv[1], "") == 0)
{
FUN5(4, "");
FUN6 (argv[2], NULL, NULL, NULL,
&VAR11, NULL, NULL);
VAR12 = FUN7 (
NULL, NULL,
VAR14,
(VAR11) ? VAR15 : VAR16,
argv[2],
VAR5[3]);
if (VAR12 != VAR17)
{
FUN8 (NULL,
FUN9(""%VAR18\""),
VAR19,
argv[2],
(VAR11) ? FUN9("") : FUN9(""),
VAR5[3]);
}
return VAR13;
}

if (FUN2 (argv[1], "") == 0)
{
FUN5(3, "");
VAR7 = FUN10 (VAR5[2]);
if (VAR7)
{
VAR11 = VAR7->VAR11;
VAR10 = strdup (VAR7->VAR10);
FUN11 (VAR7);
VAR9 = FUN12 (
VAR14,
(VAR11) ? VAR15 : VAR16,
VAR5[2]);
if (VAR9)
FUN13 (VAR9);
FUN8 (NULL,
FUN9(""%VAR18\""),
VAR19,
argv[2],
(VAR11) ? FUN9("") : FUN9(""),
VAR10);
free (VAR10);
}
else
{
FUN8 (NULL,
FUN9(""%VAR18\""),
FUN14 (""),
VAR19,
VAR5[2]);
}
return VAR13;
}

if (FUN2 (argv[1], "") == 0)
{
FUN5(3, "");
VAR7 = FUN10 (VAR5[2]);
if (VAR7)
{
FUN15 (VAR7);
}
else
{
FUN8 (NULL,
FUN9(""%VAR18\""),
FUN14 (""),
VAR19,
VAR5[2]);
}
return VAR13;
}

if (FUN2 (argv[1], "") == 0)
{
FUN5(3, "");
VAR7 = FUN10 (VAR5[2]);
if (VAR7)
{
if (VAR7->VAR20 < 0)
FUN16 (VAR7);
}
else
{
FUN8 (NULL,
FUN9(""%VAR18\""),
FUN14 (""),
VAR19,
VAR5[2]);
}
return VAR13;
}

if (FUN2 (argv[1], "") == 0)
{
FUN5(3, "");
VAR7 = FUN10 (VAR5[2]);
if (VAR7)
{
FUN15 (VAR7);
FUN16 (VAR7);
}
else
{
FUN8 (NULL,
FUN9(""%VAR18\""),
FUN14 (""),
VAR19,
VAR5[2]);
}
return VAR13;
}

if (FUN2 (argv[1], "") == 0)
{
FUN17 (1);
return VAR13;
}

if (FUN2 (argv[1], "") == 0)
{
FUN18 (1);
return VAR13;
}

if (FUN2 (argv[1], "") == 0)
{
if (VAR21 && (VAR22 > 0))
{
VAR22--;
FUN19 (NULL);
}
return VAR13;
}

if (FUN2 (argv[1], "") == 0)
{
if (VAR21
&& VAR22 < VAR23 - 1)
{
VAR22++;
FUN19 (NULL);
}
return VAR13;
}

VAR24;
}

if (!VAR21)
FUN20 ();

if (VAR21)
{
FUN21 (VAR21, "", "");
FUN19 (NULL);
}

return VAR13;
}