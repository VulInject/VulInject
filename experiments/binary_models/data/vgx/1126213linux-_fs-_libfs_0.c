int FUN1(struct VAR1 *VAR1, loff_t VAR2, loff_t VAR3,
int VAR4)
{
struct VAR5 *VAR5 = VAR1->VAR6->VAR7;
int VAR8;
int VAR9;

VAR8 = FUN2(VAR1, VAR2, VAR3);
if (VAR8)
return VAR8;

FUN3(VAR5);
VAR9 = FUN4(VAR5->VAR10);
if (!(VAR5->VAR11 & VAR12))
goto VAR13;
if (VAR4 && !(VAR5->VAR11 & VAR14))
goto VAR13;

VAR8 = FUN5(VAR5, 1);
if (VAR9 == 0)
VAR9 = VAR8;

VAR13:
FUN6(VAR5);

VAR8 = FUN7(VAR1);
if (VAR9 == 0)
VAR9 = VAR8;
return VAR9;
}