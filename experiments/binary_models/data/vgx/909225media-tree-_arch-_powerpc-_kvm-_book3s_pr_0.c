static int FUN1(struct VAR1 *VAR1,
struct VAR2 *VAR3)
{
long int VAR4;
struct VAR5 *VAR6;

VAR3->VAR7 = 0;


VAR3->VAR8 = 64;


VAR3->VAR9[0].VAR10 = 12;
VAR3->VAR9[0].VAR11 = 0;
VAR3->VAR9[0].VAR12[0].VAR10 = 12;
VAR3->VAR9[0].VAR12[0].VAR13 = 0;


VAR4 = 1;
VAR6 = FUN2(VAR1, 0);
if (VAR6 && (VAR6->VAR14.VAR15 & VAR16)) {
VAR3->VAR7 = VAR17;
VAR3->VAR9[VAR4].VAR10 = 16;
VAR3->VAR9[VAR4].VAR11 = VAR18 | VAR19;
VAR3->VAR9[VAR4].VAR12[0].VAR10 = 16;
VAR3->VAR9[VAR4].VAR12[0].VAR13 = 1;
++VAR4;
}


VAR3->VAR9[VAR4].VAR10 = 24;
VAR3->VAR9[VAR4].VAR11 = VAR18;
VAR3->VAR9[VAR4].VAR12[0].VAR10 = 24;
VAR3->VAR9[VAR4].VAR12[0].VAR13 = 0;

return 0;
}