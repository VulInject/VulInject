FUN1 (mp_ptr VAR1,
mp_srcptr VAR2, mp_size_t VAR3,
mp_ptr VAR4)
{
const int VAR5 = 1;
mp_size_t VAR6, VAR7;
mp_limb_t VAR8, VAR9;
mp_ptr VAR10;


VAR7 = VAR3 >> 1;
VAR6 = VAR3 - VAR7;

FUN2 (0 < VAR7 && VAR7 <= VAR6 && VAR7 >= VAR6 - 1);

VAR10 = VAR1;


if (VAR7 == VAR6)
{
if (FUN3 (VAR11, VAR12, VAR6) < 0)
{
FUN4 (VAR10, VAR12, VAR11, VAR6);
}
else
{
FUN4 (VAR10, VAR11, VAR12, VAR6);
}
}
else 
{
if (VAR11[VAR7] == 0 && FUN3 (VAR11, VAR12, VAR7) < 0)
{
FUN4 (VAR10, VAR12, VAR11, VAR7);
VAR10[VAR7] = 0;
}
else
{
VAR10[VAR7] = VAR11[VAR7] - FUN4 (VAR10, VAR11, VAR12, VAR7);
}
}



FUN5 (VAR13, VAR10, VAR6, VAR14);


FUN5 (VAR15, VAR12, VAR7, VAR14);


FUN5 (VAR16, VAR2, VAR6, VAR14);


VAR8 = FUN6 (VAR1 + 2 * VAR6, VAR16 + VAR6, VAR15, VAR6);


VAR9 = VAR8 + FUN6 (VAR1 + VAR6, VAR1 + 2 * VAR6, VAR16, VAR6);


VAR8 += FUN7 (VAR1 + 2 * VAR6, VAR1 + 2 * VAR6, VAR6, VAR15 + VAR6, VAR7 + VAR7 - VAR6);

VAR8 -= FUN4 (VAR1 + VAR6, VAR1 + VAR6, VAR13, 2 * VAR6);

FUN2 (VAR8 + 1 <= 3);
FUN2 (VAR9 <= 2);

if (FUN8 (VAR8 <= 2)) {
FUN9 (VAR1 + 2 * VAR6, VAR7 + VAR7, VAR9);
FUN9 (VAR1 + 3 * VAR6, VAR7 + VAR7 - VAR6, VAR8);
} else { 


FUN2 (VAR9 == 1);
VAR8 += FUN10 (VAR1 + 2 * VAR6, VAR1 + 2 * VAR6, VAR6, VAR9);
FUN2 (VAR8 == 0);

FUN11 (VAR1 + 2 * VAR6, VAR6, 0);
}
}