static int FUN1(struct VAR1 *VAR2,
void VAR3 *VAR4,
uint32_t VAR5,
struct VAR6 ***VAR7)
{
uint32_t VAR8, *VAR9;
struct VAR6 **VAR10;
int VAR11;

VAR9 = FUN2(VAR5, sizeof(*VAR9), VAR12);
if (VAR9 == NULL)
return -VAR13;

if (FUN3(VAR9, VAR4,
sizeof(VAR14) * VAR5)) {
VAR11 = -VAR15;
goto VAR16;
}

VAR10 = FUN2(VAR5, sizeof(*VAR10), VAR12);
if (VAR10 == NULL) {
VAR11 = -VAR13;
goto VAR16;
}

for (VAR8 = 0; VAR8 < VAR5; VAR8++) {
VAR10[VAR8] = FUN4(VAR2, VAR9[VAR8]);
if (!VAR10[VAR8]) {
VAR11 = -VAR17;
goto VAR18;
}
}

FUN5(VAR9);
*VAR7 = VAR10;
return 0;

VAR18:
while (VAR8-- > 0)
FUN6(VAR10[VAR8]);
FUN5(VAR10);
VAR16:
FUN5(VAR9);

return VAR11;
}