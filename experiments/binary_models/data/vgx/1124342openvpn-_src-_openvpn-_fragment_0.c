static inline int
FUN1(int VAR1, int VAR2)
{
const int VAR3 = (VAR2 & ~VAR4);
const int VAR5 = VAR1 / VAR3;
const int VAR6 = VAR1 % VAR3;

if (VAR5 > 0 && VAR6 > 0 && VAR6 < VAR3 * 3 / 4)
{
return FUN2(VAR3, (VAR2 - ((VAR2 - VAR6) / (VAR5 + 1))
+ VAR4) & ~VAR4);
}
else
{
return VAR3;
}
}