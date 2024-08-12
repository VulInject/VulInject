FUN1(VAR1, "", VAR2);

static VAR3 FUN2(struct VAR4 *VAR5,
struct VAR6 *VAR7,
const char *VAR8,
size_t VAR9)
{
unsigned long VAR10;
int VAR11;

if (!FUN3(VAR12))
return -VAR13;
VAR11 = FUN4(VAR8, 10, &VAR10);
if (VAR11)
return VAR11;
if (VAR10 == 0)
return -VAR14;
VAR2 = VAR10;
return VAR9;
}