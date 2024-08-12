int
FUN1(int VAR1)
{
int VAR2;
cell_t	VAR3[5];

VAR3[0] = FUN2("");
VAR3[1] = (VAR4)1;
VAR3[2] = (VAR4)1;
VAR3[3] = (VAR4)VAR1;

FUN3();
VAR2 = FUN4(&VAR3);
FUN5();

return ((VAR2) ? -1 : FUN6(VAR3[4]));
}