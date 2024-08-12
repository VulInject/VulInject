static int
FUN1(struct VAR1 **VAR2, u_int32_t VAR3,
u_int32_t VAR4)
{
struct VAR1 *VAR5;
struct VAR1 **VAR6;

if ((VAR5 = FUN2()) == NULL)
return -1;
VAR5->VAR3 = VAR3;
VAR5->VAR4 = VAR4;

for (VAR6 = VAR2; *VAR6 != NULL; VAR6 = &(*VAR6)->VAR7) {
if ((VAR5->VAR3 & (*VAR6)->VAR4) ==
((*VAR6)->VAR3 & (*VAR6)->VAR4)) {
FUN3(VAR5);
FUN4(VAR2);
return 0;
}
if ((VAR5->VAR3 & VAR5->VAR4) == ((*VAR6)->VAR3 & VAR5->VAR4)) {
VAR5->VAR7 = (*VAR6)->VAR7;
free(*VAR6);
*VAR6 = VAR5;
FUN4(VAR2);
return 0;
}
if ((*VAR6)->VAR3 > VAR5->VAR3)
break;
}
if (VAR6 != NULL) {
VAR5->VAR7 = *VAR6;
*VAR6 = VAR5;
FUN4(VAR2);
}
return 0;
}