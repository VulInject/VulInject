int FUN1(struct VAR1 *VAR2, int VAR3, size_t VAR4, char *VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
int VAR8 = VAR7->VAR9;
int VAR10 = VAR7->VAR11;
int VAR12 = (VAR8 * VAR10) % FUN3(VAR13);

switch (VAR3) {
case VAR14:

snprintf(VAR5, VAR4, VAR13[VAR12]);
return 0;
}

return -VAR15;
}

static const struct udevice_id VAR16[] = {
{ .VAR17 = "" },
{  }
};