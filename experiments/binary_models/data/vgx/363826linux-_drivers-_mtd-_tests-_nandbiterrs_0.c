static int FUN1(int VAR1)
{
int VAR2 = 0;
struct mtd_oob_ops VAR3 = { };

if (VAR1)
FUN2("");

VAR3.VAR4      = VAR5; 
VAR3.VAR6       = VAR7->VAR8;
VAR3.VAR9    = 0;
VAR3.VAR10    = 0;
VAR3.VAR11 = 0;
VAR3.VAR12   = 0;
VAR3.VAR13    = VAR14;
VAR3.VAR15    = NULL;

VAR2 = FUN3(VAR7, VAR16, &VAR3);
if (VAR2 || VAR3.VAR9 != VAR7->VAR8) {
FUN4("", VAR2);
if (!VAR2)
VAR2 = -VAR17;
}

return VAR2;
}