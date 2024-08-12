FUN1 (VAR1  *VAR2,
VAR3      *VAR4,
VAR5   *VAR6,
VAR7        **VAR8)
{
VAR9 *VAR10 = NULL;
const VAR11 *VAR12;
gint        VAR13;
gint        VAR14, VAR15, VAR16, VAR17;
gint        VAR18;
VAR19     *VAR20;
VAR19     *VAR21;
VAR19     *VAR22 = NULL;
gboolean    VAR23 = (VAR24.VAR25 > 1);

VAR10 = FUN2 (VAR6);
VAR12 = FUN3 ("");
VAR13    = FUN4 (VAR12);
VAR15  = FUN5 (VAR10);
VAR14 = FUN6 (VAR10);

VAR18 = FUN7 ();


VAR21 = VAR20 = (VAR19 *) FUN8 (VAR18 * VAR15 * VAR13);


if (! FUN9 (VAR2, VAR6, VAR15, VAR14, 1 * 8, VAR8))
goto VAR26;


if (! VAR23)
{
if (! FUN10 (VAR2, VAR8,
""))
goto VAR26;
}
else
{
if (! FUN10 (VAR2, VAR8,
""))
goto VAR26;

FUN11 ();


VAR22 = (VAR19 *) FUN8 ((VAR15 * 105) / 100 + 2);
}

if (! FUN12 (VAR2, VAR8))
goto VAR26;

if (! FUN10 (VAR2, VAR8, ""))
goto VAR26;

{ gint VAR27;                                                    \
VAR27 = (VAR16+VAR18-1 < VAR14) ? VAR18 : (VAR14-VAR16); \
FUN13 (VAR10, FUN14 (0, VAR16, VAR15, VAR27),  \
1.0, VAR12, VAR28,                                \
VAR29, VAR30);             \
VAR21 = VAR28; }

for (VAR16 = 0; VAR16 < VAR14; VAR16++)
{
if ((VAR16 % VAR18) == 0)
FUN15 (VAR20); 

if (! VAR23)
{
for (VAR17 = 0; VAR17 < VAR15; VAR17++)
{
if (! FUN10 (VAR2, VAR8, "", VAR31[(*VAR21) >> 4]))
goto VAR26;

if (! FUN10 (VAR2, VAR8, "", VAR31[(*(VAR21++)) & 0x0f]))
goto VAR26;

if (((VAR17 + 1) % 39) == 0)
if (! FUN10 (VAR2, VAR8, ""))
goto VAR26;
}

if (! FUN10 (VAR2, VAR8, ""))
goto VAR26;
}
else
{
gint VAR32;

FUN16 (VAR15, VAR21, &VAR32, VAR22);

if (! FUN17 (VAR2, VAR32, VAR22, VAR8))
goto VAR26;

VAR21 += VAR15;
}

if ((VAR16 % 20) == 0)
FUN18 ((VAR33) VAR16 / (VAR33) VAR14);
}

FUN18 (1.0);

if (VAR23)
{

if (! FUN19 (VAR2, 128, VAR8))
goto VAR26;

if (! FUN20 (VAR2, VAR8))
goto VAR26;
}

if (! FUN21 (VAR2, VAR8))
return VAR34;

if (! FUN10 (VAR2, VAR8, ""))
goto VAR26;

FUN22 (VAR20);
FUN22 (VAR22);

FUN23 (VAR10);

return VAR35;

VAR26:

FUN22 (VAR20);
FUN22 (VAR22);

FUN23 (VAR10);

return VAR34;

}