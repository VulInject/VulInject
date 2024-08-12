int FUN1(struct VAR1 *VAR2, uint32_t VAR3,
uint32_t VAR4, uint32_t VAR5, VAR6 *VAR7)
{
uint32_t VAR8[8];
struct VAR9 *VAR9 = NULL;
int VAR10 = VAR11;

memset(VAR8, 0, sizeof(VAR8));

VAR9 = FUN2(VAR2);
if (!VAR9) {
FUN3(FUN4(VAR12, VAR2, "",
VAR13));
VAR10 = VAR14;
goto VAR15;
}

VAR8[0] = VAR16;
VAR8[1] = VAR3;
memcpy(&VAR8[2], &VAR7[0], 4);
memcpy(&VAR8[3], &VAR7[4], 4);
memcpy(&VAR8[4], &VAR7[8], 4);
memcpy(&VAR8[5], &VAR7[12], 4);
VAR8[6] = VAR4;

VAR9->VAR5 = VAR5;
VAR10 = FUN5(VAR2, VAR9, VAR8);

if (VAR10 != VAR11)
goto VAR15;

return VAR10;
VAR15:
FUN6(VAR9);
return VAR10;
}