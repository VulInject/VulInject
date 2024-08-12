VAR1
FUN1(l_int32    VAR2,
l_int32    VAR3,
l_float32  VAR4)
{
l_int32  VAR5, VAR6, VAR7;

if (VAR4 == 0.0)
VAR4 = VAR8;
VAR5 = (VAR1)((VAR2 * 72.) / (VAR9 * VAR4));
VAR6 = (VAR1)((VAR3 * 72.) / (VAR10 * VAR4));
VAR7 = FUN2(VAR5, VAR6);
return VAR7;
}