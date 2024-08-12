int FUN1(int VAR1)
{
int VAR2, VAR3, VAR4;

if ((VAR2 = FUN2(VAR1)) != VAR5) {
return VAR2;
}


VAR3 = VAR6[VAR1].VAR7;


if (VAR3 <= 8) {
return VAR8;
}


if ((VAR2 = VAR6[VAR1].FUN3(&VAR3)) != VAR5) {
return VAR2;
}

if (VAR3 != VAR6[VAR1].VAR7) {
return VAR8;
}


if ((VAR2 = FUN4(VAR4 = FUN5(""))) != VAR5) {
return VAR2;
}


VAR9[VAR4].VAR10  =
VAR9[VAR4].VAR11 = VAR6[VAR1].VAR7;


VAR12       = VAR1;
VAR13 = VAR6[VAR1].VAR7;
return VAR5;
}