static void        FUN1      (VAR1      *private);
static void        FUN2         (VAR2             *VAR3,
VAR4          *VAR5,
gint                   VAR6,
gint                   VAR7,
GimpUnit               VAR8,
GimpInterpolationType  VAR9,
gdouble                VAR10,
gdouble                VAR11,
GimpUnit               VAR12,
gpointer               VAR13);

static VAR2 * FUN3   (VAR1      *private);
static void        FUN4    (VAR1      *private,
gint64                 VAR14,
gint64                 VAR15);
static void        FUN5    (VAR1      *private);
static void        FUN6 (VAR2             *VAR3,
gint                   VAR16,
VAR1      *private);




VAR2 *
FUN7 (VAR17             *VAR18,
VAR19           *VAR20,
VAR2             *VAR21,
GimpUnit               VAR8,
GimpInterpolationType  VAR9,
GimpScaleCallback      VAR22,
gpointer               VAR23)
{
VAR1 *private;

FUN8 (FUN9 (VAR18), NULL);
FUN8 (FUN10 (VAR20), NULL);
FUN8 (VAR22 != NULL, NULL);

private = FUN11 (VAR1);

private->VAR18     = VAR18;
private->VAR22  = VAR22;
private->VAR23 = VAR23;

private->VAR24 = FUN12 (FUN13 (VAR18), VAR20,
FUN14("", ""),
"",
VAR21,
VAR25,
VAR26,
VAR8,
VAR9,
VAR27,
private);

FUN15 (FUN16 (private->VAR24),
(VAR28) VAR29, private);

return private->VAR24;
}