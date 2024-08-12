unsigned long FUN1(struct VAR1 *VAR2,
unsigned long VAR3)
{
const struct VAR4 *VAR5;
unsigned long VAR6;
u32 VAR7;
struct VAR8 *VAR9 = NULL;

if (!VAR3)
return 0;

VAR9 = FUN2(VAR2);

if (!VAR9)
return 0;

VAR5 = VAR9->VAR4;

FUN3(!VAR5->VAR10);

VAR7 = VAR11->FUN4(&VAR5->VAR12) & VAR5->VAR10;
VAR7 >>= FUN5(VAR5->VAR10);
if ((VAR7 != VAR13) || (VAR5->VAR14 & VAR15))
VAR6 = VAR3;
else
VAR6 = VAR3 * 2;
return VAR6;
}