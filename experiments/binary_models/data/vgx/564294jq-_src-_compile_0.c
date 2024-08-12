static int FUN1(int* VAR1, block VAR2, block VAR3, int VAR4, int VAR5) {
assert(FUN2(VAR2));
assert((FUN3(VAR2.VAR6->VAR7)->VAR8 & VAR4) == (VAR4 & ~VAR9));
assert(VAR2.VAR6->VAR10);
assert(VAR2.VAR6->VAR11 == 0 || VAR2.VAR6->VAR11 == VAR2.VAR6);
assert(VAR5 >= 0);

VAR2.VAR6->VAR11 = VAR2.VAR6;
int VAR12 = 0;
for (VAR13* VAR14 = VAR3.VAR6; VAR14; VAR14 = VAR14->VAR15) {
if (VAR14->VAR1 == 0)
continue;

int VAR8 = FUN3(VAR14->VAR7)->VAR8;
if ((VAR8 & VAR4) == (VAR4 & ~VAR9) && VAR14->VAR11 == 0 &&
(!strcmp(VAR14->VAR10, VAR2.VAR6->VAR10) ||

((VAR4 & VAR9) && VAR14->VAR10[0] == '' &&
VAR5 <= 3 && (VAR14->VAR10[1] == '' + VAR5) &&
VAR14->VAR10[2] == ''))) {

if (VAR14->VAR16 == -1 || VAR14->VAR16 == VAR2.VAR6->VAR17) {
VAR14->VAR11 = VAR2.VAR6;
VAR12++;
}
} else if ((VAR8 & VAR4) == (VAR4 & ~VAR9) && VAR14->VAR11 != 0 &&
!FUN4(VAR2.VAR6->VAR10, "", sizeof("") - 1) &&
!FUN4(VAR14->VAR10, "", sizeof("") - 1)) {


VAR5++;
}

VAR14->VAR1 = (VAR14->VAR10 && !VAR14->VAR11);


VAR12 += FUN1(&VAR14->VAR1, VAR2, VAR14->VAR18, VAR4, VAR5);

VAR12 += FUN1(&VAR14->VAR1, VAR2, VAR14->VAR19, VAR4, VAR5);

if (VAR14->VAR1)
*VAR1 = 1;
}
return VAR12;
}