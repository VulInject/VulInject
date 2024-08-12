VAR1  *VAR2,
gdouble      VAR3,
gdouble      VAR4);

static void   FUN1 (VAR5 *VAR6,
VAR7  *VAR8,
gdouble      VAR3);


void
FUN2 (VAR5 *VAR6,
VAR1  *VAR9,
VAR1  *VAR2,
gdouble      VAR3)
{
gdouble     VAR10      = VAR9->VAR10;
gdouble     VAR11      = VAR9->VAR11;
gdouble     VAR12;
VAR13      *VAR14;
VAR7 *VAR8;

for (VAR14 = VAR6->VAR15->VAR16;
VAR14;
VAR14 = FUN3 (VAR14))
{
VAR8 = VAR14->VAR17;

VAR12 = FUN4 (VAR6, VAR8);

if (VAR10 < VAR12 || ! VAR14->VAR18)
break;

VAR10 -= VAR12;
}

if (! VAR14)
{
VAR2->VAR10 = 0;
VAR2->VAR11 = 0;
return;
}

FUN5 (VAR8, VAR10, VAR11, VAR2, VAR3, VAR12);
}