VAR1 FUN1(struct VAR2 *VAR3, lbaint_t VAR4, lbaint_t VAR5,
const void *VAR6)
{
struct VAR2 *VAR3 = FUN2(VAR7);
int VAR8 = VAR3->VAR9;
lbaint_t VAR10, VAR11 = VAR5;
int VAR12;

struct VAR13 *VAR13 = FUN3(VAR8);
if (!VAR13)
return 0;

VAR12 = FUN4(VAR14, VAR8, VAR3->VAR15);
if (VAR12 < 0)
return 0;

if (FUN5(VAR13, VAR13->VAR16))
return 0;

do {
VAR10 = (VAR11 > VAR13->VAR17->VAR18) ?
VAR13->VAR17->VAR18 : VAR11;
if (FUN6(VAR13, VAR4, VAR10, VAR6) != VAR10)
return 0;
VAR11 -= VAR10;
VAR4 += VAR10;
VAR6 += VAR10 * VAR13->VAR16;
} while (VAR11 > 0);

return VAR5;
}