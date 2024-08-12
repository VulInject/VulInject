static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
u32 VAR5, VAR6;
int VAR7;


FUN2(VAR2, &VAR5);

VAR7 = FUN3(VAR2, VAR5, &VAR6);
if (VAR7)
return VAR7;

if (VAR6 >> 16)
FUN4(VAR2, VAR8, VAR2->VAR9, "",
VAR6);
VAR4->VAR10 = VAR6;
VAR4->VAR11 = true;


FUN5(VAR2, &VAR5);

VAR7 = FUN3(VAR2, VAR5, &VAR6);
if (VAR7)
return VAR7;
if (VAR6 >> 16)
FUN4(VAR2, VAR8, VAR2->VAR9, "",
VAR6);
VAR4->VAR12 = VAR6;
VAR4->VAR13 = true;

return 0;
}