FUN1 (VAR1 *VAR2)
{
size_t VAR3, VAR4, VAR5, VAR6;
size_t VAR7, VAR8;
double VAR9, VAR10, VAR11, VAR12;
VAR13 *VAR14, *VAR15;

? (VAR16) \
: ((VAR16) < 1024*1024*10 \
? (VAR16) / 1024 \
: (VAR16) / (1024*1024))))

VAR7 = VAR8 = VAR9 = VAR4 = 0;
VAR14 = VAR2->VAR17;
VAR15 = VAR14 + VAR2->VAR18;
do
if (*VAR14)
{
size_t VAR19 = FUN2 (*VAR14);

VAR7 += VAR19;
VAR9 += (double) VAR19 * VAR19;
if (VAR19 > VAR8)
VAR8 = VAR19;
VAR4++;
}
while (++VAR14 < VAR15);

VAR3 = VAR2->VAR20;
VAR5 = FUN3 (&VAR2->VAR21) - VAR7;
VAR6 = VAR2->VAR18 * sizeof (VAR13);

fprintf (VAR22, "",
(unsigned long) VAR3);
fprintf (VAR22, "",
(unsigned long) VAR4, VAR4 * 100.0 / VAR3);
fprintf (VAR22, "",
(unsigned long) VAR2->VAR18);
fprintf (VAR22, "",
FUN4 (VAR7), FUN5 (VAR7),
FUN4 (VAR5), FUN5 (VAR5));
fprintf (VAR22, "",
FUN4 (VAR6), FUN5 (VAR6));

VAR10 = (double)VAR7 / (double)VAR3;
VAR12 = VAR10 * VAR10;
VAR11 = (double) VAR9 / (double) VAR3;

fprintf (VAR22, "",
(double) VAR2->VAR23 / (double) VAR2->VAR24);
fprintf (VAR22, "",
(double) VAR3 / (double) VAR2->VAR24);
fprintf (VAR22, "",
VAR10, FUN6 (VAR11 - VAR12));
fprintf (VAR22, "",
(unsigned long) VAR8);
}