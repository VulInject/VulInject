int FUN1(struct VAR1 *VAR2,
struct VAR3 **VAR4)
{
struct VAR5 *VAR6 = FUN2();
int VAR7, VAR8 = 0;

*VAR4 = FUN3(sizeof(**VAR4) + VAR6->VAR9 *
sizeof(struct VAR10), VAR11);
if (!*VAR4)
return -VAR12;

(*VAR4)->VAR6 = VAR6;
for (VAR7 = 0; VAR7 < VAR6->VAR9; VAR7++) {
struct VAR13 *VAR14 = VAR6->VAR15[VAR7];
u32 VAR16;

VAR8 = VAR14->FUN4(VAR2,
&((*VAR4)->VAR17[VAR7]));
if (VAR8 != 0)
goto VAR18;

VAR16 = (*VAR4)->VAR17[VAR7].VAR16;
(*VAR4)->VAR19 += sizeof(VAR16);
(*VAR4)->VAR19 += VAR16;
}
return 0;
VAR18:
FUN5(*VAR4);
*VAR4 = NULL;
return VAR8;
}