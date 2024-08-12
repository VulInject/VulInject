static inline int FUN1(int VAR1)
{
int VAR2;

FUN2(VAR1++, VAR3);
VAR2 = FUN3(VAR4) << 8;
FUN2(VAR1, VAR3);
VAR2 |= FUN3(VAR4);
return VAR2;
}