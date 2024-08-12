static VAR1 FUN1(struct VAR2 *VAR2,
struct VAR3 *VAR4, char *VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
struct mei_fw_status VAR8;
int VAR9, VAR10;
ssize_t VAR11 = 0;

FUN3(&VAR7->VAR12);
VAR9 = FUN4(VAR7, &VAR8);
FUN5(&VAR7->VAR12);
if (VAR9) {
FUN6(VAR2, "", VAR9);
return VAR9;
}

for (VAR10 = 0; VAR10 < VAR8.VAR13; VAR10++)
VAR11 += FUN7(VAR5 + VAR11, VAR14 - VAR11, "",
VAR8.VAR15[VAR10]);
return VAR11;
}