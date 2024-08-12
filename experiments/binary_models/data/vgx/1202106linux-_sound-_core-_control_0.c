static int FUN1(struct VAR1 *VAR2,
struct snd_ctl_elem_value VAR3 *VAR4)
{
struct VAR5 *VAR6;
int VAR7;

VAR6 = FUN2(VAR4, sizeof(*VAR6));
if (FUN3(VAR6))
return FUN4(VAR6);

VAR7 = FUN5(VAR2, VAR6);
if (VAR7 < 0)
goto VAR8;

if (FUN6(VAR4, VAR6, sizeof(*VAR6)))
VAR7 = -VAR9;
VAR8:
FUN7(VAR6);
return VAR7;
}