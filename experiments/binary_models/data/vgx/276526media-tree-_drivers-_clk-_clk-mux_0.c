static VAR1 FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR3);
int VAR6 = FUN3(VAR3);
u32 VAR7;


VAR7 = FUN4(VAR5->VAR8) >> VAR5->VAR9;
VAR7 &= VAR5->VAR10;

if (VAR5->VAR11) {
int VAR12;

for (VAR12 = 0; VAR12 < VAR6; VAR12++)
if (VAR5->VAR11[VAR12] == VAR7)
return VAR12;
return -VAR13;
}

if (VAR7 && (VAR5->VAR14 & VAR15))
VAR7 = FUN5(VAR7) - 1;

if (VAR7 && (VAR5->VAR14 & VAR16))
VAR7--;

if (VAR7 >= VAR6)
return -VAR13;

return VAR7;
}