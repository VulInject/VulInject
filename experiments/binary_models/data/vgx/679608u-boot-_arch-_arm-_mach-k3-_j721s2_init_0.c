static VAR1 FUN1(u32 VAR2, u32 VAR3)
{
u32 VAR4 = (VAR3 & VAR5) >>
VAR6;

VAR4 |= (VAR2 & VAR7) <<
VAR8;

if (VAR4 == VAR9 || VAR4 ==	VAR10 ||
VAR4 == VAR11)
VAR4 = VAR12;

if (VAR4 == VAR13) {
u32 VAR14 = (VAR2 &
VAR15) >>
VAR16;
if (VAR14 == 0x0)
VAR4 = VAR17;
}

return VAR4;
}