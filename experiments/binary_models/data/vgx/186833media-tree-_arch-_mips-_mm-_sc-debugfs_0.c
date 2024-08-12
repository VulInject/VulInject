static VAR1 FUN1(struct VAR2 *VAR2,
const char VAR3 *VAR4,
size_t VAR5, VAR6 *VAR7)
{
char VAR8[32];
ssize_t VAR9;
bool VAR10;
int VAR11;

VAR9 = FUN2(VAR5, sizeof(VAR8) - 1);
if (FUN3(VAR8, VAR4, VAR9))
return -VAR12;

VAR8[VAR9] = '';
VAR11 = FUN4(VAR8, &VAR10);
if (VAR11)
return VAR11;

if (VAR10)
FUN5();
else
FUN6();

return VAR5;
}

static const struct file_operations VAR13 = {
.open = VAR14,
.VAR15 = VAR16,
.read = VAR17,
.write = VAR18,
};