static int FUN1(struct VAR1 *VAR2, const unsigned char *VAR3, size_t VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2->VAR7);
struct VAR8 *VAR9 = VAR2->VAR9;
int VAR10;

VAR9->VAR11 = 0;
VAR9->VAR12 = false;
VAR9->VAR13 = false;

VAR10 = FUN3(VAR6, VAR3, VAR4, VAR14);
if (VAR10 < 0)
return VAR10;
if (VAR10 != VAR4)
return -VAR15;

VAR10 = FUN4(&VAR9->VAR16, VAR14);
if (VAR10 < 0)
return VAR10;
if (!VAR10)
return -VAR17;

return 0;
}

static const struct {
unsigned char VAR18;
unsigned char VAR19;
} VAR20[] = {
{ 0x11, 0x31 },
{ 0x13, 0x33 },
{ 0x7e, 0x5e },
{ 0x7d, 0x5d },
};