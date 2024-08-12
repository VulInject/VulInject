static bool FUN1(struct VAR1 *VAR2,
u32 VAR3,
u8 VAR4,
enum VAR5 *VAR6,
struct VAR7 **VAR8)
{
struct VAR9 *VAR10 = VAR2->VAR11;
u32 VAR12;


for (*VAR6 = 0; *VAR6 < VAR13; (*VAR6)++) {
if (VAR4 == VAR14)
*VAR8 = &VAR10->VAR15[*VAR6];
else
*VAR8 = &VAR10->VAR16[*VAR6][VAR4];

if (!((*VAR8)->VAR17))
continue;
if (VAR3 >= (*VAR8)->VAR18 &&
VAR3 < (*VAR8)->VAR18 + (*VAR8)->VAR19)
break;
}

if (*VAR6 == VAR13) {
FUN2(VAR2, "", VAR3, VAR4);
goto VAR20;
}

VAR12 = VAR3 - (*VAR8)->VAR18;
if (!FUN3(VAR12, (*VAR8)->VAR17)) {
FUN2(VAR2, "",
VAR3, VAR4);
goto VAR20;
}

return true;
VAR20:
*VAR6 = VAR13;
*VAR8 = NULL;
return false;
}