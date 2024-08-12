FUN1(VAR1, VAR2, 0444);
FUN2(VAR1, "");

static int VAR3 = -1;
FUN1(VAR3, VAR2, 0444);
FUN2(VAR3, "");

static struct VAR4 *VAR5;

static bool FUN3(unsigned char VAR6, unsigned char VAR7,
struct VAR8 *VAR9)
{
static bool VAR10;
bool VAR11 = false;

if (VAR7 & VAR12)
return false;

if (FUN4(VAR6 == 0xe1)) {
VAR10 = true;
VAR11 = true;
} else if (FUN4(VAR10)) {
VAR10 = false;
VAR11 = true;
}

return VAR11;
}