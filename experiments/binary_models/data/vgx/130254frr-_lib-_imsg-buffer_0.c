int FUN1(struct VAR1 *VAR1)
{
struct iovec VAR2[VAR3];
struct VAR4 *VAR5;
unsigned int VAR6 = 0;
ssize_t VAR7;

memset(&VAR2, 0, sizeof(VAR2));
FUN2 (VAR5, &VAR1->VAR8, VAR9) {
if (VAR6 >= VAR3)
break;
VAR2[VAR6].VAR10 = VAR5->VAR5 + VAR5->VAR11;
VAR2[VAR6].VAR12 = VAR5->VAR13 - VAR5->VAR11;
VAR6++;
}

VAR14:
if ((VAR7 = FUN3(VAR1->VAR15, VAR2, VAR6)) == -1) {
if (VAR16 == VAR17)
goto VAR14;
if (VAR16 == VAR18)
VAR16 = VAR19;
return -1;
}

if (VAR7 == 0) { 
VAR16 = 0;
return 0;
}

FUN4(VAR1, VAR7);

return 1;
}