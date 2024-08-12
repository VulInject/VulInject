static int
FUN1(void)
{
int VAR1 = 0;

do  { \
const struct migLocalData VAR2 = { \
VAR3, VAR4 \
}; \
if (FUN2("" # VAR3, VAR5, &VAR2) < 0) \
VAR1 = -1; \
} while (0)


FUN3("VAR6:


FUN3("
FUN3("VAR7:

FUN4("VAR8:

FUN4("VAR9+VAR10:


return VAR1 == 0 ? VAR11 : VAR12;
}