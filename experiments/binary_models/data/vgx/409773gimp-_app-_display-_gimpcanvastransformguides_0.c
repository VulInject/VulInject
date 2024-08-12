FUN1 (VAR1 *VAR2,
VAR3    *VAR4,
VAR5           *VAR6)
{
VAR7 *private = FUN2 (VAR2);
GimpVector2                       VAR8[4];

VAR8[0] = (VAR3) { private->VAR9, private->VAR10 };
VAR8[1] = (VAR3) { private->VAR11, private->VAR10 };
VAR8[2] = (VAR3) { private->VAR11, private->VAR12 };
VAR8[3] = (VAR3) { private->VAR9, private->VAR12 };

if (private->VAR13)
{
FUN3 (&private->VAR14, VAR8, 4, VAR15,
VAR4, VAR6);

return VAR15;
}
else
{
gint VAR16;

for (VAR16 = 0; VAR16 < 4; VAR16++)
{
FUN4 (&private->VAR14,
VAR8[VAR16].VAR17,    VAR8[VAR16].VAR18,
&VAR4[VAR16].VAR17, &VAR4[VAR16].VAR18);
}

*VAR6 = 4;

return FUN5 (VAR4[0].VAR17, VAR4[0].VAR18,
VAR4[1].VAR17, VAR4[1].VAR18,
VAR4[3].VAR17, VAR4[3].VAR18,
VAR4[2].VAR17, VAR4[2].VAR18);
}
}