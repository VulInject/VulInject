FUN1 (mp_ptr VAR1, mp_ptr VAR2,
mp_srcptr VAR3, mp_size_t VAR4, mp_size_t VAR5, mp_ptr VAR6)
{
mp_limb_t VAR7;
int VAR8;

FUN2 (VAR5 > 0);
FUN2 (VAR5 <= VAR4);


VAR1[VAR4] = FUN3 (VAR1, VAR3, VAR3 + 2*VAR4, VAR4);

VAR7 = FUN3 (VAR6, VAR3 + VAR4, VAR3 + 3*VAR4, VAR5);
VAR1[VAR4] = FUN4 (VAR1, VAR3, VAR3 + 2*VAR4, VAR4, 2);

VAR7 = FUN4 (VAR6, VAR3 + VAR4, VAR3 + 3*VAR4, VAR5, 2);
if (VAR5 < VAR4)
VAR7 = FUN5 (VAR6 + VAR5, VAR3 + VAR4 + VAR5, VAR4 - VAR5, VAR7);
VAR6[VAR4] = VAR7;
VAR7 = FUN6 (VAR6, VAR3 + 2*VAR4, VAR4, 2);
VAR1[VAR4] = VAR7 + FUN7 (VAR1, VAR6, VAR3, VAR4);

VAR6[VAR5] = FUN6 (VAR6, VAR3 + 3*VAR4, VAR5, 2);
if (VAR5 < VAR4)
VAR6[VAR4] = FUN8 (VAR6, VAR3 + VAR4, VAR4, VAR6, VAR5 + 1);
else
VAR6[VAR4] += FUN7 (VAR6, VAR3 + VAR4, VAR6, VAR4);
FUN6 (VAR6, VAR6, VAR4+1, 1);

VAR8 = (FUN9 (VAR1, VAR6, VAR4 + 1) < 0) ? ~0 : 0;

if (VAR8)
FUN10 (VAR1, VAR2, VAR6, VAR1, VAR4 + 1);
else
FUN10 (VAR1, VAR2, VAR1, VAR6, VAR4 + 1);
if (VAR8)
FUN11 (VAR2, VAR6, VAR1, VAR4 + 1);
else
FUN11 (VAR2, VAR1, VAR6, VAR4 + 1);

FUN7 (VAR1, VAR1, VAR6, VAR4 + 1);

FUN2 (VAR1[VAR4] < 15);
FUN2 (VAR2[VAR4] < 10);

return VAR8;
}