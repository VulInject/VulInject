VAR1 FUN1(int VAR2, int VAR3)
{
int VAR4;
int VAR5;

if(VAR2<1||VAR3>VAR2||VAR3<0)return 0;
VAR4 = FUN2(2);
VAR5 = FUN2(1);
return FUN3(sizeof(VAR6))
+ VAR3 * FUN3(VAR4)
+ (VAR2-VAR3) * FUN3(VAR5);
}