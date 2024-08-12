int FUN1(VAR1 **VAR2, VAR3 **VAR4) {
if (!VAR2 || !*VAR2) return 0;
if (VAR4)
*VAR4 = (*VAR2)->VAR5;
*VAR2 = (*VAR2)->VAR6;
return 1;
}