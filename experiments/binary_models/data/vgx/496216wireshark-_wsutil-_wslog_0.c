enum VAR1 FUN1(const char *VAR2)
{
enum ws_log_level VAR3;

VAR3 = FUN2(VAR2);
return FUN3(VAR3);
}


static const char *VAR4   = "";
static const char *VAR5  = "";

static const char *VAR6 = "";
static const char *VAR7    = "";
static const char *VAR8   = "";
static const char *VAR9 = "";

static const char *VAR10 = "";
static const char *VAR11   = "";
static const char *VAR12   = "";


static void FUN4(void (*VAR13)(const char *, va_list VAR14),
int VAR15,
const char *VAR16, ...)
{
va_list VAR14;

FUN5(VAR14, VAR16);
if (VAR13)
FUN6(VAR16, VAR14);
else
FUN7(VAR17, VAR16, VAR14);
FUN8(VAR14);
if (VAR15 != VAR18)
FUN9(VAR15);
}