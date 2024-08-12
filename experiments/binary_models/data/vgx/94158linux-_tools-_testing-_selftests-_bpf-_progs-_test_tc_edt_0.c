static inline int FUN1(struct VAR1 *VAR2)
{
int VAR3 = 0;
VAR4 *VAR5 = FUN2(&VAR6, &VAR3);
uint64_t VAR7 = ((VAR4)VAR2->VAR8) * VAR9 /
VAR10;
uint64_t VAR11 = FUN3();
uint64_t VAR12, VAR13 = 0;

if (VAR5)
VAR13 = *VAR5 + VAR7;

VAR12 = VAR2->VAR12;
if (VAR12 < VAR11)
VAR12 = VAR11;


if (VAR13 <= VAR12) {
if (FUN4(&VAR6, &VAR3, &VAR12, VAR14))
return VAR15;
return VAR16;
}


if (VAR13 - VAR11 >= VAR17)
return VAR15;


if (VAR13 - VAR11 >= VAR18)
FUN5(VAR2);

if (FUN4(&VAR6, &VAR3, &VAR13, VAR19))
return VAR15;
VAR2->VAR12 = VAR13;

return VAR16;
}