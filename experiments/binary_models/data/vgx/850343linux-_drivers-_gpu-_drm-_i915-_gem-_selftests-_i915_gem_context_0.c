static int
FUN1(const char *VAR1, u32 VAR2, int VAR3, unsigned int VAR4,
const char *VAR5, const char *VAR6)
{
if (VAR3 == VAR4)
return 0;

if (VAR3 < 0) {
FUN2("",
VAR1, VAR5, VAR3, VAR6);
return VAR3;
}

FUN2("",
VAR1, VAR5, VAR3, VAR4, VAR6);

FUN3("",
VAR2, VAR3,
(VAR2 & VAR7) ? "" : "",
(VAR2 & VAR8) >> VAR9,
(VAR2 & VAR10) ? "" : "");

return -VAR11;
}