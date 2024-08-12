FUN1 (VAR1        *VAR2,
GimpHistogramChannel  VAR3)
{
VAR4 *VAR5;
gdouble               VAR6 = 0.0;
gint                  VAR7;

FUN2 (FUN3 (VAR2), 0.0);

VAR5 = VAR2->VAR5;

if (! VAR5->VAR8 ||
! FUN4 (VAR2, &VAR3))
{
return 0.0;
}

if (VAR3 == VAR9)
{
for (VAR7 = 0; VAR7 < VAR5->VAR10; VAR7++)
{
VAR6 = FUN5 (VAR6, FUN6 (VAR11,   VAR7));
VAR6 = FUN5 (VAR6, FUN6 (VAR12, VAR7));
VAR6 = FUN5 (VAR6, FUN6 (VAR13,  VAR7));
}
}
else
{
for (VAR7 = 0; VAR7 < VAR5->VAR10; VAR7++)
{
VAR6 = FUN5 (VAR6, FUN6 (VAR3, VAR7));
}
}

return VAR6;
}